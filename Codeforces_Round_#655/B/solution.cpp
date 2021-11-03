#include <cmath>
#include <cstdint>
#include <iostream>

void solve()
{
    std::int64_t n;
    std::cin >> n;

    std::int64_t a{1};
    std::int64_t b{n - 1};

    for(std::int64_t i = 2; i <= std::sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a = n / i;
            b = n - a;
            break;
        }
    }

    std::cout << a << ' ' << b << '\n';
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
