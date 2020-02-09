#include <cstdint>
#include <array>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        std::string buffer;
        std::cin >> n;
        std::cin >> buffer;
    
        size_t index = 0;
        std::array<char, 2> result = {};
        for(size_t i = 0; i < n and index < 2; i++)
        {
            auto const c = static_cast<int>(buffer[i] - '0');
            if (c % 2 == 1)
            {
                result[index] = buffer[i];
                index++;
            }
        }

        if (index == 2)
        {
            std::cout << result[0] << result[1] << '\n';
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }
    std::cout.flush();

    return 0;
}
