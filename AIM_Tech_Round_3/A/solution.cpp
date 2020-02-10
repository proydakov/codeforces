#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, b, d;
    std::cin >> n >> b >> d;
    
    int result = 0;

    int current = 0;
    for(int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        if (val <= b)
        {
            current += val;
            if (current > d)
            {
                result++;
                current = 0;
            }
        }
    }

    std::cout << result << std::endl;

    return 0;
}
