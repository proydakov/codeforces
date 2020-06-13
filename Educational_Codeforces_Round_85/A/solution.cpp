#include <cstdint>
#include <iostream>

void solve()
{
    bool result = true;

    int n;
    std::cin >> n;

    int p0, c0;
    p0 = 0;
    c0 = 0;
    for(int i = 0; i < n; i++)
    {
        int p, c;
        std::cin >> p >> c;

        int c_delta = c - c0;
        int p_delta = p - p0;
        if (p < p0 || c < c0 || p < c || c_delta > p_delta)
        {
            result = false;
        }

        p0 = p;
        c0 = c;
    }

    std::cout << (result ? "YES" : "NO") << '\n';
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
