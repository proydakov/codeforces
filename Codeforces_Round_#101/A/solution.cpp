#include <set>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::multiset<char> origin;

    std::string s1, s2;
    std::cin >> s1;
    std::cin >> s2;

    for(const char c : s1) {
        origin.insert(c);
    }

    for(const char c : s2) {
        origin.insert(c);
    }

    std::string s3;
    std::cin >> s3;

    std::multiset<char> trash;
    for(const char c : s3) {
        trash.insert(c);
    }

    if(origin == trash) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
