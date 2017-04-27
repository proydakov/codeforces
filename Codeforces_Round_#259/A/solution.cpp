#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int width = n / 2;
    for(int i = 0; i < width; i++) {
        const int obj = 1 + 2 * i;
        const int half = (n - obj) / 2;

        for(int j = 0; j < half; j++) {
            std::cout << '*';
        }
        for(int j = 0; j < obj; j++) {
            std::cout << 'D';
        }
        for(int j = 0; j < half; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    for(int i = 0; i < n; i++) {
        std::cout << 'D';
    }
    std::cout << std::endl;

    for(int i = 0; i < width; i++) {
        const int obj = n - 2 * (i + 1);
        const int half = (n - obj) / 2;

        for(int j = 0; j < half; j++) {
            std::cout << '*';
        }
        for(int j = 0; j < obj; j++) {
            std::cout << 'D';
        }
        for(int j = 0; j < half; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    return 0;
}
