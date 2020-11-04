#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::int64_t n;
    std::cin >> n;

    std::int64_t result = 1;
    for(;n != 1; n--)
    {
        result += 4 * (n - 1);
    }
    std::cout << result << std::endl;

    return 0;
}
