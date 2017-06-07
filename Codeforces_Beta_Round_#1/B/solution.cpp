#include <regex>
#include <string>
#include <iostream>

std::string from_excel(int val)
{
    std::string buffer;
    while(val > 0) {
        val -= 1;
        int ost = val % 26;
        val /= 26;
        buffer.push_back('A' + ost);
    }
    std::reverse(buffer.begin(), buffer.end());
    return buffer;
}

int to_excel(std::string excel)
{
    int result = 0;
    for(int i = excel.size() - 1, step = 1;  i >= 0; i--, step *= 26) {
        int val = excel[i] - 'A' + 1;
        result += val * step;
    }
    return result;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::regex regex("([0-9]+)", std::regex::optimize);

    for(int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;

        std::sregex_token_iterator iter(str.begin(), str.end(), regex, 1);
        std::sregex_token_iterator end;

        size_t distance = std::distance(iter, end);
        if(distance == 2) {
            std::vector<int> items;
            for ( ;iter != end; ++iter) {
                std::string match_str = *iter;
                items.push_back(std::stoi(match_str));
            }
            std::cout << from_excel(items[1]) << items[0] << std::endl;
        }
        else {
            std::size_t found = str.find_first_of("0123456789");
            std::string text1 = str.substr(0, found);
            std::string text2 = str.substr(found);
            std::cout << 'R' << text2 << 'C' << to_excel(text1) << std::endl;
        }
    }

    return 0;
}
