#include <iostream>

int main()
{
    int w;
    std::cin >> w;

    std::string res("NO");
    if(w > 3 && w % 2 == 0) {
        res = "YES";
    }

    std::cout << res << std::endl;

    return 0;
}
