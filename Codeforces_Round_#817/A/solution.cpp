#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string origin("Timur");
    std::sort(origin.begin(), origin.end());

    size_t n;
    std::cin >> n;

    std::string str;
    std::cin >> str;
    std::sort(str.begin(), str.end());

    std::cout << (str == origin ? "YES\n" : "NO\n");
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
