#include <array>
#include <limits>
#include <string>
#include <iostream>
#include <algorithm>

void calc_info(const std::string& str, std::array<int, 256>& info)
{
    info.fill(0);
    for(const char c : str) {
        info[c]++;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    str.reserve(100000);
    std::cin >> str;

    std::array<int, 256> str_info;
    calc_info(str, str_info);

    std::string original("Bulbasaur");
    std::array<int, 256> original_info;
    calc_info(original, original_info);

    int result = std::numeric_limits<int>::max();
    for(int i = 0; i < 256; i++) {
        if(original_info[i] > 0) {
            result = std::min(str_info[i] / original_info[i], result);
        }
    }
    std::cout << result << std::endl;

    return 0;
}
