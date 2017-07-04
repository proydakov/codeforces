#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t n; int64_t t; int64_t c;
    std::cin >> n;
    std::cin >> t;
    std::cin >> c;

    int64_t count = 0;
    int64_t length = 0;

    for(int64_t i = 0; i < n; i++) {
        int64_t temp;
        std::cin >> temp;
        if(temp > t) {
            length = 0;
        }
        else {
            length++;
        }
        if(length >= c) {
            count++;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
