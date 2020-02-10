#include <cmath>
#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int sum = 0;
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;
        if (val == 0)
        {
            val++;
            result++;
        }
        sum += val;
    }
    if (sum == 0)
    {
        result += 1;
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
