#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    std::vector<int> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<int> b(k);
    for(int i = 0; i < k; i++) {
        std::cin >> b[i];
    }

    if(k > 1) {
        std::cout << "Yes" << std::endl;
        return 0;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            a[i] = b[0];
            break;
        }
    }

    bool is = std::is_sorted(a.begin(), a.end());
    if(is) {
        std::cout << "No" << std::endl;
    }
    else {
        std::cout << "Yes" << std::endl;
    }

    return 0;
}
