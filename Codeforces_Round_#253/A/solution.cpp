#include <set>
#include <array>
#include <string>
#include <iostream>

void build_filter(std::array<int, 256>& filter)
{
    filter.fill(0);
    for(int i = 'a'; i <= 'z'; i++) {
        filter[i] = 1;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int, 256> filter;
    build_filter(filter);

    std::set<char> set;

    std::string str;
    std::getline(std::cin, str);

    for(const char c : str) {
        if(filter[c]) {
            set.insert(c);
        }
    }
    std::cout << set.size() << std::endl;

    return 0;
}
