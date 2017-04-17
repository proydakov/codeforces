#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int x;
    std::cin >> n;
    std::cin >> x;

    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(x % i == 0 && x / i <= n) {
            count++;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
