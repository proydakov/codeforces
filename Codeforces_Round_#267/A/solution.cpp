#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;

    std::cin >> n;

    int count = 0;

    for(int i = 0; i < n; i++) {
        int p;
        int q;

        std::cin >> p;
        std::cin >> q;

        const int delta = q - p;
        if(delta >= 2) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
