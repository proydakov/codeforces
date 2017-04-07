#include <string>
#include <iostream>
#include <sstream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    std::stringstream sstream;

    size_t index = 0;
    while (true) {
        const size_t temp_index = str.find("WUB", index);

        if (temp_index == std::string::npos) {
            if(index < str.size()) {
                sstream << str.substr(index);
                sstream << " ";
            }
            break;
        }

        if(temp_index - index > 0) {
            std::string temp = str.substr(index, temp_index - index);
            sstream << temp;
            sstream << " ";
        }

        index = temp_index + 3;
    }
    std::string ans = sstream.str();
    ans.resize(ans.size() - 1);

    std::cout << ans << std::endl;

    return 0;
}
