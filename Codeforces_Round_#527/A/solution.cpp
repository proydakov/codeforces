#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n; int k;
        std::cin >> n;
        std::cin >> k;

        for(int j = 0; j < n; j++)
        {
            std::cout << static_cast<char>((j % k) + 'a');
        }
        std::cout << std::endl;
    }

    return 0;
}
