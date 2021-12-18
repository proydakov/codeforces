#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::string> vec(n - 2);
    for(auto& s : vec) std::cin >> s;

    bool found{};
    std::cout << vec.front();
    for(size_t i = 1; i < vec.size(); i++)
    {
        auto const& prev = vec[i - 1];
        auto const& curr = vec[i];

        if (prev.back() == curr.front())
        {
            std::cout << curr.back();
        }
        else
        {
            std::cout << curr;
            found = true;
        }
    }

    if (!found)
    {
        std::cout << 'a';
    }

    std::cout << '\n';
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
