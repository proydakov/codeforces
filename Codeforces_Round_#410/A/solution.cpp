#include <string>
#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;

    int count = 0;
    for(int i = 0, j = str.size() - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            count++;
        }
    }

    if(count == 1 || (str.size() % 2 == 1 && count == 0)) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
