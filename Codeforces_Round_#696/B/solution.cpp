#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

std::vector<bool> build_eratosthenes_sieve(size_t n)
{
    std::vector<bool> prime(n + 1, 1);
    prime.fill(1);
    prime[0] = prime[1] = 0;
    for (size_t i = 2; i * i <= N; i++) {
        if (prime[i]) {
            for (size_t j = 2; j <= N / i; j++) {
                prime[i * j] = 0;
            }
        }
    }
    return prime;
}

std::vector<bool> const g_table = build_eratosthenes_sieve(10'000 * 10'000);

void solve()
{
    std::int64_t d;
    std::cin >> d;

    std::vector<std::int64_t> res;
    std::int64_t t = d + 1;

    // calc first prime
    for(; res.size() != 2; t++)
    {
        if (g_table[t])
        {
            res.push_back(t);
            break;
        }
    }

    t += d;

    // search next prime
    for(; res.size() != 2; t++)
    {
        if (g_table[t])
        {
            res.push_back(t);
            break;
        }
    }

    std::cout << std::min(res.front() * res.back(), res.front() * res.front() * res.front()) << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
