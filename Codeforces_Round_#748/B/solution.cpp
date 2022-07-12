#include <string>
#include <cstdint>
#include <optional>
#include <iostream>
#include <algorithm>

std::optional<int64_t> solve(int64_t v, char c1, char c2)
{
    int64_t res{};
    std::string str = std::to_string(v);

    while(str.size() > 1 && str.back() != c2)
    {
        res++;
        str.pop_back();
    }

    while(str.size() > 1 && str[str.size() - 2] != c1)
    {
        res++;
        str.erase(str.begin() + str.size() - 2);
    }

    return str.empty() ? std::optional<int64_t>{} : std::optional<int64_t>{res};
}

void solve()
{
    int64_t val;
    std::cin >> val;

    int64_t res = val;

    std::vector<std::pair<char, char>> const vec({{'0', '0'}, {'2', '5'}, {'5', '0'}, {'7', '5'}});

    for(auto const& [k, v] : vec)
    {
        auto r = solve(val, k, v);
        if (r && r.value() < res)
        {
            res = r.value();
        }
    }

    std::cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
