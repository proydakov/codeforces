#include <cstdint>
#include <iostream>

bool is_1_3(int64_t a, int64_t b, int64_t c)
{
    auto const sum = a + c;
    if (sum % 2 == 1)
    {
        return false;
    }
    auto const mid = sum / 2;
    if (mid % b == 0 && mid / b > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_1_2(int64_t a, int64_t b, int64_t c)
{
    auto const delta = b - a;
    auto const next = b + delta;
    if (next % c == 0 && next / c > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_2_3(int64_t a, int64_t b, int64_t c)
{
    auto const delta = c - b;
    auto const prev = b - delta;
    if (prev % a == 0 && prev / a > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int64_t a, b, c;
    std::cin >> a >> b >> c;

    std::cout << (is_1_3(a, b, c) || is_1_2(a, b, c) || is_2_3(a, b, c) ? "YES\n" : "NO\n"); 
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
