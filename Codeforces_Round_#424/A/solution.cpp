#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    if(n < 3) {
        std::cout << "YES" << std::endl;
        return 0;
    }

    int i = 0;
    for(; (i < n - 1) && (data[i] < data[i + 1]); i++);
    for(; (i < n - 1) && (data[i] == data[i + 1]); i++);
    for(; (i < n - 1) && (data[i] > data[i + 1]); i++);

    if(i != n - 1) {
        std::cout << "NO" << std::endl;
    }
    else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}
