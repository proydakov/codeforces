#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t n; int64_t a; int64_t b; int64_t half = 0;
    std::cin >> n;
    std::cin >> a;
    std::cin >> b;

    int64_t counter = 0;

    for(int64_t i = 0; i < n; i++) {
        int64_t val;
        std::cin >> val;

        if(2 == val) {
            if(b > 0) {
                b--;
            }
            else {
                counter += val;
            }
        }
        else {
            if(a > 0) {
                a--;
            }
            else if(b > 0) {
                b--;
                half++;
            }
            else if(half > 0) {
                half--;
            }
            else {
                counter += val;
            }
        }
    }

    std::cout << counter << std::endl;

    return 0;
}
