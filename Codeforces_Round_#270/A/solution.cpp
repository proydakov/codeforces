#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int val;
    std::cin >> val;

    const int N = 1000000;
    std::vector<int> isPrime(N, 1);
    isPrime[1] = 0;
    for (int i = 2; i * i < N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < N; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    int k1; int k2;
    for(int i = 4;; i++) {
        k1 = i;
        k2 = val - i;

        if(isPrime[k1] == 0 && isPrime[k2] == 0) {
            break;
        }
    }

    std::cout << k1 << ' ' << k2 << std::endl;

    return 0;
}
