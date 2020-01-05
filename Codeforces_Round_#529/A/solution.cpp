#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    for(int i = 0, step = 1; i < n; i += step, step++)
    {
        std::cout << str[i];
    }
    std::cout << std::endl;

    return 0;
}
