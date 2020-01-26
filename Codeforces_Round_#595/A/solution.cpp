#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int q;
    std::cin >> q;
    for(int i = 0; i < q; i++)
    {
        int n;
        std::cin >> n;
        std::vector<int> data(n);
        for(int j = 0; j < n; j++)
        {
            std::cin >> data[j];
        }
        std::sort(data.begin(), data.end());
        bool has = false;
        for(int k = 0; k < n - 1; k++)
        {
            if (data[k] - data[k + 1] == -1)
            {
                has = true;
            }
        }
        std::cout << (has ? 2 : 1) << std::endl;
    }

    return 0;
}
