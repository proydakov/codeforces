#include <cstdint>
#include <iostream>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    int div1 = k / n;
    int result = k + div1;
    while(true)
    {
        int div2 = result / n;
        if (div2 == div1)
        {
            break;
        }
        result += (div2 - div1);
        div1 = div2;
    }

    if (result % n == 0)
    {
        result++;
    }
    std::cout << result << "\n";
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
