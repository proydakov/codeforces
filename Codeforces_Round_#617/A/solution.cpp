#include <cstdint>
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
        std::cin >> n;
        
        int sum = 0;
        bool has_even = false;
        bool has_odd = false;
        for(int j = 0; j < n; j++)
        {
            int val;
            std::cin >> val;
            sum += val;
            if (val % 2 == 0)
            {
                has_even = true;
            }
            else
            {
                has_odd = true;
            }
        }
        if ((sum % 2 == 1) or (has_even and has_odd))
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
