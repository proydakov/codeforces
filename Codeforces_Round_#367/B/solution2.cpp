#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> vals(n);
    for(int i = 0; i < n; i++) {
        std::cin >> vals[i];
    }

    std::sort(vals.begin(), vals.end());

    int q;
    std::cin >> q;

    for(int i = 0; i < q; i++) {
        int x;
        std::cin >> x;
        auto lower = std::upper_bound(vals.begin(), vals.end(), x);
        size_t dist = std::distance(vals.begin(), lower);
        std::cout << dist << std::endl;
    }

    return 0;
}
