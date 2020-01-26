#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }
    std::sort(data.begin(), data.end());
    
    int res = 0;
    for(int i = 0; i < n and i < m; i++)
    {
        if (data[i] < 0)
        {
            res += data[i];
        }
    }
    std::cout << -1 * res << std::endl;

    return 0;
}
