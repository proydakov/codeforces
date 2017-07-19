#include <string>
#include <iostream>
#include <unordered_set>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    std::unordered_set<std::string> map;
    for(int i = 0; i <= str.size(); i++) {
        for(char c = 'a'; c <= 'z'; c++) {
            std::string temp(str);
            temp.insert(i, &c, 1);
            map.insert(temp);
        }
    }

    std::cout << map.size() << std::endl;

    return 0;
}
