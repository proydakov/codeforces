#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    std::sort(data.begin(), data.end());
    std::cout << (data.back() - data.front() + 1 - data.size()) << std::endl;

    return 0;
}
