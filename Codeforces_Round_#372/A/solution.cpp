#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int c;
    std::cin >> n;
    std::cin >> c;

    int temp;
    std::cin >> temp;

    int count = 1;
    int prev_time = temp;

    for(int i = 1; i < n; i++) {
        std::cin >> temp;
        if(prev_time + c < temp) {
            count = 0;
        }
        prev_time = temp;
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}
