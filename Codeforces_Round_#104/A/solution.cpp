#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; std::string str;
    std::cin >> n;
    std::cin >> str;

    for(int i = 0; i < n; i++) {
        if(str[i] != '4' && str[i] != '7') {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }

    size_t s1{0};
    for(int i = 0; i < n / 2; i++) {
        s1 += str[i];
    }
    size_t s2{0};
    for(int i = n / 2; i < n; i++) {
        s2 += str[i];
    }
    if(s1 != s2) {
        std::cout << "NO" << std::endl;
    }
    else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}
