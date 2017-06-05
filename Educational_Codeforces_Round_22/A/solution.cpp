#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t n;
    std::cin >> n;

    int64_t acc = 0;
    for(int64_t i = 0; i < n; i++) {
        int64_t temp;
        std::cin >> temp;

        acc += temp;
    }

    int64_t m;
    std::cin >> m;

    int64_t result = -1;
    for(int64_t i = 0; i < m; i++) {
        int64_t b; int64_t d;
        std::cin >> b;
        std::cin >> d;

        if(acc >= b && acc <= d) {
            result = acc;
        }
        else if(b >= acc && -1 == result) {
            result = b;
        }
    }
    std::cout << result << std::endl;

    return 0;
}
