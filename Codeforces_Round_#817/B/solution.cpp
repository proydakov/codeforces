#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::size_t n;
    std::cin >> n;

    std::string str1, str2;
    std::cin >> str1 >> str2;

    std::replace( str1.begin(), str1.end(), 'B', 'G');
    std::replace( str2.begin(), str2.end(), 'B', 'G');

    std::cout << (str1 == str2 ? "YES\n" : "NO\n");
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
