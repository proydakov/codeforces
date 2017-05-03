#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> mans(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> mans[i];
    }

    int m;
    std::cin >> m;

    std::vector<int> girls(m, 0);
    for(int i = 0; i < m; i++) {
        std::cin >> girls[i];
    }

    std::sort(mans.begin(), mans.end());
    std::sort(girls.begin(), girls.end());

    int count = 0;
    for(int i = 0, j = 0; i < n && j < m;) {
        if(std::abs(mans[i] - girls[j]) < 2) {
            count++;
            i++;
            j++;
        }
        else if(mans[i] > girls[j]) {
            j++;
        }
        else if(girls[j] > mans[i]) {
            i++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
