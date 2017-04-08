#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int acc = 0;
    int max_acc = 0;

    for(int i = 0; i < n; i++) {
        int a; int b;

        std::cin >> a;
        std::cin >> b;

        acc -= a;
        acc += b;

        max_acc = std::max(acc, max_acc);
    }

    std::cout << max_acc << std::endl;

    return 0;
}
