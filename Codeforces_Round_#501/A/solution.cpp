#include <cstdint>
#include <iostream>
#include <unordered_set>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::unordered_set<int> positions;
    for(int i = 1; i <= m; i++)
    {
        positions.insert(i);
    }

    for(int i = 0; i < n; i++)
    {
        int l, r;
        std::cin >> l >> r;

        for(int j = l; j <= r; j++)
        {
            positions.erase(j);
        }
    }

    std::cout << positions.size() << "\n";
    for(auto val : positions)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    return 0;
}
