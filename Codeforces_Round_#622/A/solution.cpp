#include <array>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    std::array<int, 3> array{a, b, c};
    std::sort(array.begin(), array.end());
    a = array[2];
    b = array[1];
    c = array[0];

    int result = 0;
    if (a > 0)
    {
        a--;
        result++;
    }

    if (b > 0)
    {
        b--;
        result++;
    }

    if (c > 0)
    {
        c--;
        result++;
    }

    if (a > 0 and b > 0)
    {
        a--;
        b--;
        result++;
    }

    if (a > 0 and c > 0)
    {
        a--;
        c--;
        result++;
    }

    if (b > 0 and c > 0)
    {
        b--;
        c--;
        result++;
    }

    if (a > 0 and b > 0 and c > 0)
    {
        result++;
    }

    std::cout << result << std::endl;
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
