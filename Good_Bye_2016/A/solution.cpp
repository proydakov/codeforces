#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    int t = 60 * 4 - k;

    int time = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        time += (i + 1) * 5;
        if(time <= t) {
            count = i + 1;
        }
        else {
            break;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
