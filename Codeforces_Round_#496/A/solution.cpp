#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data;
    data.reserve(n);

    for(int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;
        data.push_back(val);
    }

    std::vector<int> result;
    result.reserve(n);

    for(int i = 1; i < n; i++)
    {
        if (1 == data[i])
        {
            result.push_back(data[i - 1]);
        }
    }
    result.push_back(data.back());

    std::cout << result.size() << std::endl;
    for (auto const r : result)
    {
        std::cout << r << ' ';
    }
    std::cout << std::endl;

    return 0;
}
