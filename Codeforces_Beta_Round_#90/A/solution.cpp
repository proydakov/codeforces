#include <array>
#include <iostream>

int gcd(int a, int b)
{
    while (b) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b; int n;
    std::cin >> a;
    std::cin >> b;
    std::cin >> n;

    std::array<int, 2> val;
    val[0] = a;
    val[1] = b;

    bool index = 0;
    while(n > 0) {
        int remove = gcd(n, val[index]);
        n -= remove;
        index = !index;
    }

    std::cout << int(!index) << std::endl;

    return 0;
}
