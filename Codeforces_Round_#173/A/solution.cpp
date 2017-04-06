#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int commands;
    std::cin >> commands;

    int x = 0;
    std::string cmd;
    for(int i = 0; i < commands; i++) {
        std::cin >> cmd;
        switch(cmd[1]) {
            case '-':
                --x;
                break;

            case '+':
                ++x;
                break;
        }
    }

    std::cout << x << std::endl;

    return 0;
}
