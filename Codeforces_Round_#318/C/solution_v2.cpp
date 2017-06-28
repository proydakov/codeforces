#include <iostream>

int calc_gcd(int a, int b) {
    while (b)
    {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int t1;
    std::cin >> t1;

    for(int i = 1; i < n; i++) {
        int t2;
        std::cin >> t2;

        int gcd = calc_gcd(t1, t2);

        int d1 = t1 / gcd;
        while(d1 % 2 == 0) { d1 /= 2; }
        while(d1 % 3 == 0) { d1 /= 3; }

        int d2 = t2 / gcd;
        while(d2 % 2 == 0) { d2 /= 2; }
        while(d2 % 3 == 0) { d2 /= 3; }

        if(d1 != 1 || d2 != 1) {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;

    return 0;
}
