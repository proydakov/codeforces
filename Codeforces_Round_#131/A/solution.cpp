#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    int count = 0;
    for(int a = 0; a <= 1000; a++) {
        for(int b = 0; b <= 1000; b++) {
            const int testn = a * a + b;
            const int testm = a + b * b;
            if(testn == n && testm == m) {
                count++;
            }
        }
    }
    std::cout << count << std::endl;

    return 0;
}
