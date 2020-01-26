#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;
        if (val % 2 == 0)
        {
            val--;
        }
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    return 0;
}
