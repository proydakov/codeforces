#include <cstdint>
#include <iostream>

bool is_pow2(std::int64_t v)
{
    return (v != 0) && ((v & (v - 1)) == 0);
}

void solve()
{
    std::int64_t a, b;
    std::cin >> a >> b;

    if (a < b)
    {
        std::swap(a, b);
    }

    auto div = a / b;
    if (a % b == 0 && is_pow2(div))
    {
        int count = 0;
        while(div > 1)
        {
            div /= 2;
            count++;
        }

        int res = 0;

        res += count / 3;
        count = count % 3;

        res += count / 2;
        count = count % 2;

        res += count / 1;

        std::cout << res << "\n";
        
    }
    else
    {
        std::cout << "-1\n";
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
