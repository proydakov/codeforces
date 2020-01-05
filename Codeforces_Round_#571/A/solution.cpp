#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n, m, k;
    std::cin >> n;
    std::cin >> m;
    std::cin >> k;

    std::cout << ((n <= m && n <= k) ? "Yes" : "No") << std::endl;
    return 0;
}
