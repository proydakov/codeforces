#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

/*

  *
 *  *
* * * *

*/

int main()
{
    std::ios::sync_with_stdio(false);

    size_t n;
    std::cin >> n;

    std::vector<int64_t> items(n, 0);
    for(size_t i = 0; i < n; i++) {
        std::cin >> items[i];
    }

    std::sort(items.begin(), items.end());

    for(size_t i = 1; i < n - 1; i++) {
        int64_t acc = items[i - 1] + items[i];
        if(acc > items[i + 1]) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;

    return 0;
}
