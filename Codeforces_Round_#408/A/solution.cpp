#include <cmath>
#include <limits>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n, m, k;

    std::cin >> n;
    std::cin >> m;
    std::cin >> k;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    m--;
    int min_dist = std::numeric_limits<int>::max();;
    for(int i = 0; i < n; i++) {
        if(data[i] && data[i] <= k) {
            const int dist = std::abs(m - i);
            if(dist < min_dist) {
                min_dist = dist;
            }
        }
    }

    std::cout << (min_dist * 10) << std::endl;

    return 0;
}
