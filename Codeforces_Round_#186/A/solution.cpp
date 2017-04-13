#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int val;
    std::cin >> val;

    if(val < 0) {
        std::string str = std::to_string(val);
        if(str.size() == 2) {
            val = 0;
        }
        else {
            const size_t str_size = str.size();
            int last = str[str_size - 1];
            int prev = str[str_size - 2];
            if(last > prev) {
                str.resize(str_size - 1);
            }
            else {
                std::swap(str[str_size - 1], str[str_size - 2]);
                str.resize(str_size - 1);
            }
            val = std::stoi(str);
        }
    }

    std::cout << val << std::endl;

    return 0;
}
