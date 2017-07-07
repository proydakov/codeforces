#include <vector>
#include <iostream>

template<size_t n>
std::vector<bool> build_eratosthenes_sieve()
{
    std::vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = 2; j <= n / i; j++) {
                if (prime[i * j]) {
                    prime[i * j] = 0;
                }
            }
        }
    }
    return prime;
}

int main()
{
    std::ios::sync_with_stdio(false);

    auto prime = build_eratosthenes_sieve<1000 * 1000 + 1>();

    int q;
    std::cin >> q;

    for(int i = 1; i <= 1000; i++) {
        int test = q * i + 1;
        if(0 == prime[test]) {
            std::cout << i << std::endl;
            break;
        }
    }

    return 0;
}
