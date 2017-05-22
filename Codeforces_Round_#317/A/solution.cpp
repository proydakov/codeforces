#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int A; int B;
    int k; int m;

    std::cin >> A;
    std::cin >> B;
    std::cin >> k;
    std::cin >> m;

    std::vector<int> data_a(A);
    for(int i = 0; i < A; i++) {
        std::cin >> data_a[i];
    }

    std::vector<int> data_b(B);
    for(int i = 0; i < B; i++) {
        std::cin >> data_b[i];
    }

    const int max_a = data_a[k - 1];
    const int min_b = data_b[B - m];

    if(max_a < min_b) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
