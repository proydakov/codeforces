#include <limits>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

void step(std::vector<char> const& vec, size_t index, std::string prefix, size_t counter, std::unordered_map<std::string, size_t>& cache)
{
    if (index > vec.size())
    {
        return;
    }

    if (cache.find(prefix) != cache.end())
    {
        return;
    }
    else
    {
        cache[prefix] = counter;
    }

    auto const c = vec[index];
    index++;

    switch(c)
    {
        case '0':
        {
            auto new_prefix = prefix;
            new_prefix.push_back('O');
            step(vec, index, std::move(new_prefix), counter + 1, cache);
        }
            break;

        case '1':
        {
            char last = 'O';
            if (!prefix.empty())
            {
                last = prefix.back();
            }
            auto new_prefix = prefix;
            new_prefix.push_back(last != 'C' ? 'C' : 'O');
            step(vec, index, std::move(new_prefix), counter + last != 'C' ? 0 : 1, cache);
        }
            break;

        case '2':
        {
            char last = 'O';
            if (!prefix.empty())
            {
                last = prefix.back();
            }
            auto new_prefix = prefix;
            new_prefix.push_back(last != 'S' ? 'S' : 'O');
            step(vec, index, std::move(new_prefix), counter + last != 'S' ? 0 : 1, cache);
        }
            break;

        case '3':
        {
            char last = 'O';
            if (!prefix.empty())
            {
                last = prefix.back();
            }

        }
    }
}

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<char> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
        vec[i] += '0';
    }

    std::unordered_map<std::string, size_t> cache;
    step(vec, 0, prefix, 0, cache);

    size_t res = std::numeric_limits<size_t>::max();
    for(auto const& [k, v] : cache)
    {
        if (v.size() == vec.size())
        {
            res = std::min(res, v);
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
