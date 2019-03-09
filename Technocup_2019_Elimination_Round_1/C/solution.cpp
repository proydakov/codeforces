#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::size_t size = 0;
    std::cin >> size;

    int sum = 0;

    std::string str;
    std::cin >> str;

    std::vector<int> data(size, 0);
    for (std::size_t i = 0; i < size; i++)
    {
        data[i] = str[i] - '0';
        sum += data[i];
    }

    for(std::size_t j = 2; j <= size; j++)
    {
        if ( (sum % j) == 0)
        {
            int const etalon_sum = sum / j;
            int test_sum = 0;
            int index = 0;

            //std::cout << "test: num[" << j << "] sum[" << etalon_sum << "]" << std::endl;

            for(std::size_t i = 0; i < size; i++)
            {
                test_sum += data[i];
                if (etalon_sum == test_sum)
                {
                    test_sum = 0;
                    index++;
                }
                else if(test_sum > etalon_sum)
                {
                    break;
                }
            }

            if (0 == test_sum && index == j)
            {
                std::cout << "YES" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "NO" << std::endl;

    return 0;
}
