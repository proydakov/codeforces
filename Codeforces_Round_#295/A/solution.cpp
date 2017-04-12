#include <set>
#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    std::set<char> set;

    for(const char c : str) {
        set.insert(c);
    }

    if(set.size() == 26) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
