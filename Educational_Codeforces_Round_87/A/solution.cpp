#include <cstdint>
#include <iostream>

void solve()
{
    std::int64_t a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a > b && c <= d)
    {
        std::cout << "-1\n";
    }
    else
    {
        auto total = b;
        auto result = b;

        if(total < a)
        {
            auto interval = c - d;
            auto delta = a - b;
            auto steps = delta / interval + (delta % interval > 0 ? 1 : 0);
            result += c * steps;
        }

        std::cout << result << '\n';
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
