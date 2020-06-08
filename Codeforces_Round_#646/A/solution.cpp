#include <iostream>

void solve()
{
    int n, x;
    std::cin >> n >> x;

    int array[2] = { 0 };

    for(int i = 0; i < n; i++)
    {
        int t;
        std::cin >> t;
        array[t % 2]++;
    }

    int even = array[0];
    int odd = array[1];

    int even_count = std::min(x - 1, even);
    if (x % 2 == 0)
    {
        if(even_count % 2 == 0)
        {
            even_count--;
        }
    }
    else
    {
        if(even_count % 2 == 1)
        {
            even_count--;
        }
    }

    std::cout << (even_count >= 0 && odd >= x - even_count ? "YES" : "NO") << '\n';
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
