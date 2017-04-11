#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    int count = 0;
    while(true) {
        if(n > 0) {
            count++;
        }
        else {
            break;
        }
        --n;
        if(count % m == 0) {
            ++n;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
