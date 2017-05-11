#include <cmath>
#include <vector>
#include <cstdint>
#include <iostream>

std::vector<char> build(int n)
{
    std::vector<char> prime (n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            if (i * 1ll * i <= n) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }
    }
    return prime;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<char> cache = build(1000000);
    for(int i = 0; i < n; i++) {
        uint64_t test;
        std::cin >> test;

        double val = std::sqrt((double)test);
        uint64_t ival = (uint64_t)(val);
        if(ival * ival != test) {
            std::cout << "NO" << std::endl;
        }
        else {
            if(cache[ival]) {
                std::cout << "YES" << std::endl;
            }
            else {
                std::cout << "NO" << std::endl;
            }
        }
    }
    return 0;
}
