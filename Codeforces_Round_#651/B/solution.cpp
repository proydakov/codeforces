#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<size_t> even, odd;
    for (size_t i = 1; i <= (n + n); i++)
    {
        size_t val;
        std::cin >> val;

        if (val % 2 == 0)
        {
            even.emplace_back(i);
        }
        else
        {
            odd.emplace_back(i);
        }
    }

    if (odd.size() % 2 != 0 && even.size() % 2 != 0)
    {
        odd.pop_back();
        even.pop_back();
    }
    else if (odd.size() > 1)
    {
        odd.pop_back();
        odd.pop_back();
    }
    else if (even.size() > 1)
    {
        even.pop_back();
        even.pop_back();
    }

    std::vector<std::pair<size_t, size_t>> ans;
    for (size_t i = 0; i < odd.size(); i += 2)
    {
        ans.emplace_back(odd[i], odd[i + 1]);
    }

    for (size_t i = 0; i < even.size(); i += 2)
    {
        ans.emplace_back(even[i], even[i + 1]);
    }

    for (auto const& [f, s] : ans)
    {
        std::cout << f << ' ' << s << '\n';
    }
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
