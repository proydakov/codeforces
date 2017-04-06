#include <string>
#include <iostream>

enum { limit = 7 };

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    int item = str[0];
    int count = 1;

    const size_t size = str.size();
    for(int i = 1; i < size && count < limit; i++) {
        if(str[i] == item) {
            count++;
        }
        else {
            item = str[i];
            count = 1;
        }
    }

    if(count == limit) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
