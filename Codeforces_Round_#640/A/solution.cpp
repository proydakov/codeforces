#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int count = 0;
    int m = n;
    while(m > 0)
    {
        if (m % 10 != 0)
        {
            count++;
        }
        m /= 10;
    }

    std::cout << count << ' ';

    int shift = 1;
    m = n;
    while(m > 0)
    {
        int ost = m % 10;
        if (ost != 0)
        {
            std::cout << (ost * shift) << ' ';
        }
        m /= 10;
        shift *= 10;
    }

    std::cout << "\n";
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
