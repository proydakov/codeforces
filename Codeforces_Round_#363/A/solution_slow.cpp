#include <limits>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_set>

void step(std::vector<char> const& vec, size_t index, std::string prefix, std::unordered_set<std::string>& cache);

void relax(std::vector<char> const& vec, size_t index, std::string prefix, std::unordered_set<std::string>& cache)
{
    prefix.push_back('O');
    step(vec, index, std::move(prefix), cache);
}

void step(std::vector<char> const& vec, size_t index, std::string prefix, std::unordered_set<std::string>& cache)
{
//    if (prefix.size() == 4)
//    std::cout << "index: " << index << " prefix: '" << prefix << std::endl;

    auto const [it, res] = cache.insert(prefix);
    if (!res)
    {
        return;
    }

    if (index >= vec.size())
    {
        return;
    }

    auto const c = vec[index];
    index++;

    switch(c)
    {
        case '0':
        {
            relax(vec, index, prefix, cache);
        }
            break;

        case '1':
        {
            char last = 'O';
            if (!prefix.empty())
            {
                last = prefix.back();
            }

            {
                auto new_prefix = prefix;
                new_prefix.push_back(last != 'C' ? 'C' : 'O');
                step(vec, index, std::move(new_prefix), cache);
            }

            {
                relax(vec, index, prefix, cache);
            }
        }
            break;

        case '2':
        {
            char last = 'O';
            if (!prefix.empty())
            {
                last = prefix.back();
            }

            {
                auto new_prefix = prefix;
                new_prefix.push_back(last != 'S' ? 'S' : 'O');
                step(vec, index, std::move(new_prefix), cache);
            }

            {
                relax(vec, index, prefix, cache);
            }
        }
            break;

        case '3':
        {
            char last = 'O';
            if (!prefix.empty())
            {
                last = prefix.back();
            }

            {
                auto new_prefix = prefix;
                new_prefix.push_back(last != 'C' ? 'C' : 'O');
                step(vec, index, std::move(new_prefix), cache);
            }

            {
                auto new_prefix = prefix;
                new_prefix.push_back(last != 'S' ? 'S' : 'O');
                step(vec, index, std::move(new_prefix), cache);
            }
        }
            break;
    }
}

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<char> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        int delta{};
        std::cin >> delta;
        vec[i] = '0' + delta;
    }

    std::unordered_set<std::string> cache;
    step(vec, 0, std::string(), cache);

    size_t res = std::numeric_limits<size_t>::max();

    for(auto const& k : cache)
    {
        if (k.size() == vec.size())
        {

            res = std::min(res, static_cast<size_t>(std::count(k.begin(), k.end(), 'O')));
        }
    }

    std::cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    {
        solve();
    }

    return 0;
}
