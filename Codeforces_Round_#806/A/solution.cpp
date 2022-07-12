#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string data;
    std::cin >> data;

    std::transform(data.begin(), data.end(), data.begin(), [](unsigned char c){
        return std::tolower(c);
    });

    std::cout << (data == "yes" ? "YES\n" : "NO\n");
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
