#include <iostream>
#include <cstdint>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    if (n % 2 == 0)
    {
        std::cout << "Mahmoud" << std::endl;
    }
    else
    {
        std::cout << "Ehab" << std::endl;
    }

    return 0;
}
