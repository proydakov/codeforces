#include <vector>

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
