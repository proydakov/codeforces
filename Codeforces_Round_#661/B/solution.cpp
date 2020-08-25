#include <limits>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int size;
    std::cin >> size;

    using type = std::int32_t;
    type a[size];
    type b[size];

    type min_a = std::numeric_limits<type>::max();
    for(int i = 0; i < size; i++)
    {
        std::cin >> a[i];
        min_a = std::min(min_a, a[i]);
    }

    type min_b = std::numeric_limits<type>::max();
    for(int i = 0; i < size; i++)
    {
        std::cin >> b[i];
        min_b = std::min(min_b, b[i]);
    }

    std::int64_t result_delta = 0;
    for(int i = 0; i < size; i++)
    {
        auto da = a[i] - min_a;
        auto db = b[i] - min_b;

        auto delta = std::min(da, db);
        result_delta += delta;

        da -= delta;
        db -= delta;

        result_delta += da;
        result_delta += db;
    }

    std::cout << result_delta << '\n';
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
