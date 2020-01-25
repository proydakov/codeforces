#include <vector>
#include <cstdint>
#include <iostream>
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

    int result = 0;
    for(int i = 0; i < n; i += 2)
    {
        result += data[i + 1] - data[i];
    }
    std::cout << result << std::endl;

    return 0;
}
