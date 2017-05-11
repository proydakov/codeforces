#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int c;
    std::cin >> n;
    std::cin >> c;

    int value = 0;

    int prev;
    std::cin >> prev;
    for(int i = 1; i < n; i++) {
        int curr;
        std::cin >> curr;
        value = std::max(value, prev - curr - c);
        prev = curr;
    }

    std::cout << value << std::endl;

    return 0;
}
