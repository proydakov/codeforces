#include <cmath>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::int64_t counter = 0;
    std::int64_t zero_counter = 0;
    std::int64_t negative_counter = 0;

    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::int64_t val;
        std::cin >> val;

        if (val == 0)
        {
            counter++;
            zero_counter++;
        }
        else
        {
            if (val < 0)
            {
                negative_counter++;
            }
            val = std::abs(val);
            counter += val - 1;
        }
    }

    if ((negative_counter % 2 == 1) and (zero_counter == 0))
    {
        counter += 2;
    }

    std::cout << counter << std::endl;

    return 0;
}
