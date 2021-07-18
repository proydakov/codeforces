#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    size_t odd{};
    size_t even{};

    for(size_t i = 0; i < n * 2; i++)
    {
        int64_t val;
        std::cin >> val;

        if(val % 2 == 0)
        {
            odd += 1;
        }
        else
        {
            even += 1;
        }
    }

    if (odd == even)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
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
