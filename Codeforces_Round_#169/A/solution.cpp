#include <cmath>
#include <limits>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    int max = std::numeric_limits<int>::min();
    for(int i = 0; i < n; i++) {
        int f; int t;
        std::cin >> f;
        std::cin >> t;

        if(t > k) {
            const int temp = f - (t - k);
            max = std::max(max, temp);
        }
        else
            max = std::max(max, f);
    }
    std::cout << max << std::endl;

    return 0;
}
