#include <vector>
#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    size_t c_100{};
    size_t c_200{};
    for(size_t i = 0; i < n; i++)
    {
        size_t val;
        std::cin >> val;

        if (100 == val)
        {
            c_100++;
        }
        else
        {
            c_200++;
        }
    }

    auto ost = c_200 % 2;
    if (1 == ost)
    {
        if (c_100 < 2)
        {
            goto no;
        }
        else
        {
            c_100 -= 2;
        }
    }

    ost = c_100 % 2;
    if (1 == ost)
    {
        goto no;
    }

    std::cout << "YES\n";
    return;

no:
    std::cout << "NO\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
