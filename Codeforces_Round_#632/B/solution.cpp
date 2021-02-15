#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> a(n, 0);
    std::vector<int> b(n, 0);

    for(size_t i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for(size_t i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }

    size_t left_minus = n;
    size_t left_plus = n;
    for(size_t i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            left_minus = std::min(left_minus, i);
        }
        else if (a[i] > 0)
        {
            left_plus = std::min(left_plus, i);
        }
    }

    bool valid = true;
    for(size_t i = 0; i < n; i++)
    {
        if (b[i] < a[i])
        {
            valid &= (left_minus < i);
        }
        else if(b[i] > a[i])
        {
            valid &= (left_plus < i);
        }
    }

    if (valid)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
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
