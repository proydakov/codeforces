#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int y = 0;
    int b = 0;
    int r = 0;

    std::cin >> y;
    std::cin >> b;
    std::cin >> r;

    std::vector<int> data{ y, b, r };

    int index = 2;
    for (int i = 2; i >= 0; i--)
    {
        if (data[index] > data[i])
        {
            index = i;
        }
    }

    for (int i = index; i < 3; i++)
    {
        data[i] = std::min(data[index] + i - index, data[i]);
    }

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += data[2] - i;
    }

    std::cout << sum << std::endl;

    return 0;
}
