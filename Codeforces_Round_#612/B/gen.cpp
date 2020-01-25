#include <iostream>

int main()
{
    std::cout << 1500 << ' ' << 30 << std::endl;
    for(int i = 0; i < 1500; i++)
    {
        for(int j = 0; j < 30; j++)
        {
            std::cout << 'S';
        }
        std::cout << "\n";
    }
    return 0;
}
