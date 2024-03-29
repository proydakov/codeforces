#include <vector>

std::vector<bool> build_eratosthenes_sieve(size_t n)
{
    std::vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (size_t i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (size_t j = 2; j <= n / i; j++) {
                prime[i * j] = 0;
            }
        }
    }
    return prime;
}
