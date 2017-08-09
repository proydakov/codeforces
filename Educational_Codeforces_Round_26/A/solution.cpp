#include <array>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int, 256> check;
    check.fill(0);

    for(int i = 'A'; i <= 'Z'; i++) {
        check[i] = 1;
    }

    size_t max_read = 0;
    std::cin >> max_read;

    size_t max_ans = 0;

    size_t read = 0;
    while(max_read >= read) {
        std::string str;
        std::cin >> str;

        read += str.size() + 1;

        size_t ans = 0;
        for(char c : str) {
            ans += check[c];
        }
        max_ans = std::max(max_ans, ans);
    }
    std::cout << max_ans << std::endl;

    return 0;
}
