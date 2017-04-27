#include <iostream>

enum { RED_RANG = 2400 };

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    bool yes = false;
    for(int i = 0; i < n; i++) {
        std::string name;
        int before;
        int after;

        std::cin >> name;
        std::cin >> before;
        std::cin >> after;

        if(before >= RED_RANG && after > before) {
            yes = true;
        }
    }
    std::cout << (yes ? "YES" : "NO") << std::endl;

    return 0;
}
