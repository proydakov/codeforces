#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    std::string s;
    std::cin >> s;

    std::cout << s.size() << "\n";
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
