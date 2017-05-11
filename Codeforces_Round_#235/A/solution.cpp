#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int x;
    std::cin >> n;
    std::cin >> x;

    int acc = 0;
    for(int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        acc += val;
    }

    int count = 0;
    count += std::abs(acc / x);
    if(acc % x != 0) {
        count++;
    }
    std::cout << count << std::endl;

    return 0;
}
