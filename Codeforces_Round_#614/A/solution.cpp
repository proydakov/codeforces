#include <cstdint>
#include <iostream>
#include <unordered_set>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int q;
    std::cin >> q;

    std::unordered_set<int> floors;
    floors.reserve(1024);
    for(int i = 0; i < q; i++)
    {
        floors.clear();
        int n, s, k;
        std::cin >> n >> s >> k;
        for(int j = 0; j < k; j++)
        {
            int v;
            std::cin >> v;
            floors.insert(v);
        }

        int min_up = n;
        for(int j = s; j <= n; j++)
        {
            if (floors.count(j) == 0)
            {
                min_up = j - s;
                break;
            }
        }

        int min_down = n;
        for(int j = s; j > 0; j--)
        {
            if (floors.count(j) == 0)
            {
                min_down = s - j;
                break;
            }
        }
        std::cout << std::min(min_up, min_down) << "\n";
    }
    std::cout.flush();

    return 0;
}
