#include <map>
#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    std::map<int, int> data;
    for(int i = 0; i < n; i++)
    {
        int element;
        std::cin >> element;
        data[element]++;
    }

    int total = 1;
    int accum = 1;
    for(auto const [key, val] : data)
    {
        accum += val;
        if (key < accum)
        {
            total = accum;
        }
    }

    std::cout << total << '\n';
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
