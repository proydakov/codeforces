#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; std::string of; std::string item;
    std::cin >> n;
    std::cin >> of;
    std::cin >> item;

    if("week" == item) {
        if(5 == n || 6 ==n) {
            std::cout << 53 << std::endl;
        }
        else {
            std::cout << 52 << std::endl;
        }
    }
    else {
        if(31 == n) {
            std::cout << 7 << std::endl;
        }
        else if(30 == n) {
            std::cout << 11 << std::endl;
        }
        else {
            std::cout << 12 << std::endl;
        }
    }

    return 0;
}
