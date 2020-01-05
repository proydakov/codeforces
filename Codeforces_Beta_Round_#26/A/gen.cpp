#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>

template<size_t n>
auto build_eratosthenes_sieve()
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
    std::cout << 1 << std::endl;
    auto const simples = build_eratosthenes_sieve<3000>();
    std::cout << 1 << std::endl;

    int total = 0;
    std::vector<int> subs;
    subs.reserve(2048);
    for(int i = 2; i <= 3000; i++)
    {
        subs.resize(0);
        for(int j = 0; j < simples.size(); j++)
        {
            int const is_simple = simples[j];
            if (is_simple && i % j == 0 && i / j > 0)
            {
                subs.push_back(j);
            }
        }
        if (2 == subs.size())
        {
            total++;
            std::cout << i << ", ";
        }
    }
    std::cout << std::endl;
    std::cout << "TOTAL: " << total << std::endl;

    return 0;
}
