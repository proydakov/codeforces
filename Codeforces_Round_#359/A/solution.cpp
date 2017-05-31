#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int64_t count;
    std::cin >> n;
    std::cin >> count;

    int people = 0;

    for(int i = 0; i < n; i++) {
        char c; int64_t val;
        std::cin >> c;
        std::cin >> val;

        if(c == '-') {
            int64_t test_count = count - val;
            if(test_count > -1) {
                count = test_count;
            }
            else {
                people++;
            }
        }
        else {
            count += val;
        }
    }
    std::cout << count << ' ' << people << std::endl;

    return 0;
}
