#include <string>
#include <iostream>

bool test(const std::string& str, std::string s1, std::string s2)
{
    const size_t index1 = str.find(s1);
    if(std::string::npos == index1) {
        return false;
    }
    const size_t index2 = str.find(s2, index1 + 2);
    if(std::string::npos == index2) {
        return false;
    }
    return true;
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    if(test(str, "AB", "BA") || test(str, "BA", "AB")) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
