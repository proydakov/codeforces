#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    size_t extra{};
    while(n % 3 != 0)
    {
        n--;
        extra++;
    }

    size_t a, b, c;
    a = b = c = n / 3;

    b++;
    c--;

    if(2 == extra)
    {
        a++;
        b++;
    }
    else if(1 == extra)
    {
        b++;
    }

    std::cout << a << ' ' << b << ' ' << c << '\n';
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
