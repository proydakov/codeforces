#include <iostream>

int sim2(int n, int t, int k, int d)
{
    int ti = 1;
    for(; ; ti++) {
        if(ti % t == 0) {
            n -= k;
        }
        if(ti > d) {
            if( (ti - d) % t == 0 ) {
                n -= k;
            }
        }
        if(n <= 0) {
            break;
        }
    }
    return ti;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int t; int k; int d;

    std::cin >> n;
    std::cin >> t;
    std::cin >> k;
    std::cin >> d;

    int c_iter_1 = n / k;
    if(n % k) {
        c_iter_1++;
    }
    const int time_1 = c_iter_1 * t;

    int time_2 = sim2(n, t, k, d);

    if(time_2 < time_1) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
