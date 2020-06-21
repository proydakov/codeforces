#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    int odd = 0;
    int even = 0;
    int place = 0;

    int data[n];
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> data[i];
        if (data[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (data[i] % 2 == i % 2)
        {
            place++;
        }
    }

    if (n % 2 == 0)
    {
        if (even == odd)
        {
            std::cout << ((n - place) / 2) << '\n';
        }
        else
        {
            std::cout << -1 << '\n';
        }
    }
    else
    {
        if (even == odd + 1)
        {
            std::cout << ((n - place) / 2) << '\n';
        }
        else
        {
            std::cout << -1 << '\n';
        }
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
