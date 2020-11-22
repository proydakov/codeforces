#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    int array[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    std::sort(array, array + n);

    int res = 0;
    int group = 0;

    for(int i = 0; i < n; i++)
    {
        if(++group == array[i])
        {
            res++;
            group = 0;
        }
    }

    std::cout << res << "\n";
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
