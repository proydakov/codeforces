#include <string>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    size_t n;
    std::cin >> n;

    std::string text;
    std::cin >> text;

    std::string result(n, '0');

    if (n % 2 == 1)
    {
        size_t middle = n / 2;
        result[middle] = text[0];
        size_t left_c = 1;
        size_t right_c = 1;
        for(size_t i = 1; i < n; i++)
        {
            if (i % 2 == 1)
            {
                result[middle - left_c] = text[i];
                left_c++;
            }
            else
            {
                result[middle + right_c] = text[i];
                right_c++;
            }
        }
    }
    else
    {
        size_t middle = n / 2 - 1;
        result[middle] = text[0];
        size_t left_c = 1;
        size_t right_c = 1;
        for(size_t i = 1; i < n; i++)
        {
            if (i % 2 == 1)
            {
                result[middle + right_c] = text[i];
                right_c++;
            }
            else
            {
                result[middle - left_c] = text[i];
                left_c++;
            }
        }
    }

    std::cout << result << std::endl;

    return 0;
}
