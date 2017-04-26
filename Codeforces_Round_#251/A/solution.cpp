#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int d;
    std::cin >> n;
    std::cin >> d;

    int acc = 0;
    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        acc += temp;
    }

    acc += (n - 1) * 10;

    if(acc > d) {
        std::cout << -1 << std::endl;
    }
    else {
        d -= acc;
        int count = (n - 1) * 2 + d / 5;
        std::cout << count << std::endl;
    }

    return 0;
}
