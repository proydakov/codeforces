#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t size;
    std::cin >> size;

    int data[size];
    for(size_t i = 0; i < size; i++)
    {
        std::cin >> data[i];
    }

    std::sort(data, data + size);

    bool res = true;
    for(size_t i = 1; i < size; i++)
    {
        if (data[i] - data[i - 1] > 1)
        {
            res = false;
        }
    }
    std::cout << (res ? "YES" : "NO") << std::endl;
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
