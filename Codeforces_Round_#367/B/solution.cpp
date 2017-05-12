#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

enum { size = 100000 };
enum { size_plus_one = size + 1 };

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> vals(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> vals[i];
    }

    std::vector<int> sorted(size_plus_one, 0);
    for(const int val : vals) {
        sorted[val]++;
    }

    std::vector<int> cache(size_plus_one, 0);
    for(int i = 1; i < size_plus_one; i++) {
        cache[i] += cache[i - 1] + sorted[i];
    }

    int q;
    std::cin >> q;

    for(int i = 0; i < q; i++) {
        int x;
        std::cin >> x;
        x = std::min(x, int(size) );
        std::cout << cache[x] << std::endl;
    }

    return 0;
}
