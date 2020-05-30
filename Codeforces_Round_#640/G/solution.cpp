#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    if (n < 4)
    {
        std::cout << "-1\n";
        return;
    }

    for(int i = n; i > 0; i -= 4)
    {
        switch(i)
        {
            case 5:
                std::cout << "4 2 5 3 1";
                i = 0;
                break;

            case 6:
                std::cout << "5 3 6 2 4 1";
                i = 0;
                break;

            case 7:
                std::cout << "6 4 2 5 1 3 7";
                i = 0;
                break;

            default:
                std::cout << (i - 1) << ' ' << (i - 3) << ' ' << (i) << ' ' << (i - 2) << ' ';
                break;
        }
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
