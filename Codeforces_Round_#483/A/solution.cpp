#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    int data[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }
    std::sort(data, data + n);

    int index = 0;
    if (n % 2 == 1)
    {
        index = n / 2;
    }
    else
    {
        index = n / 2 - 1;
    }
    std::cout << data[index] << std::endl;

    return 0;
}
