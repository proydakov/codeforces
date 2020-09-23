#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    size_t count0 = 0;
    size_t count1 = 0;

    for(auto const s : str)
    {
        if (s == '0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }

    std::cout << std::string(n, count0 > count1 ? '0' : '1') << "\n";
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
