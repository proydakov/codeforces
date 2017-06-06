#include <map>
#include <cmath>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::map<std::string, int> map;

    for(int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;

        map[str]++;
    }

    int count = -1;
    std::string name;

    for(const auto& item : map) {
        if(item.second > count) {
            name = item.first;
            count = item.second;
        }
    }
    std::cout << name << std::endl;

    return 0;
}
