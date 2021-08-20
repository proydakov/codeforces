#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    if (n > 45)
    {
        std::cout << "-1\n";
    }
    else
    {
        std::string result;
        for(int i = 9; n > 0; i--)
        {
            if (n < i)
            {
                result.append(std::to_string(n));
            }
            else
            {
                result.append(std::to_string(i));
            }
            n -= i;
        }
        std::reverse(result.begin(), result.end());
        std::cout << result << "\n";
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
