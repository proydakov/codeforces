#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int len = 1;
    int max_len = 1;

    int prev;
    std::cin >> prev;
    for(int i = 1; i < n; i++) {
        int val;
        std::cin >> val;

        if(val > prev) {
            len++;
        }
        else {
            max_len = std::max(max_len, len);
            len = 1;
        }
        prev = val;
    }
    max_len = std::max(max_len, len);

    std::cout << max_len << std::endl;

    return 0;
}
