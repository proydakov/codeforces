#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    int data[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    std::sort(data, data + n);

    int odd = 0;
    int even = 0;
    for(int i = 0; i < n; i++)
    {
        if (data[i] % 2 == 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    if (odd % 2 != even % 2)
    {
        std::cout << "NO\n";
    }
    else if (odd % 2 == 0 && even % 2 == 0)
    {
        std::cout << "YES\n";
    }
    else if (odd % 2 == 1 && even % 2 == 1)
    {
        bool has_delta = false;
        for(int i = 0; i < n - 1; i++)
        {
            if (data[i + 1] - data[i] == 1)
            {
                has_delta = true;
                break;
            }
        }

        std::cout << (has_delta ? "YES\n" : "NO\n");
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
