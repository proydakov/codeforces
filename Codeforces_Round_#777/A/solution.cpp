#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t val;
    std::cin >> val;

    std::string result;
    if ((val - 1) % 3 == 0)
    {
        result.push_back('1');
        val--;
    }

    while (val > 0)
    {
        if (val >= 2)
        {
            result.push_back('2');
            val -= 2;
        }

        if (val >= 1)
        {
            result.push_back('1');
            val -= 1;
        }
    }

    std::cout << result << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
