#include <vector>
#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    int i = 0;
    int j = n - 1;
    while(i <= j)
    {
        std::cout << data[i] << ' ';
        i++;

        if (i > j)
        {
            break;
        }

        std::cout << data[j] << ' ';
        j--;
    }

    std::cout << '\n';
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
