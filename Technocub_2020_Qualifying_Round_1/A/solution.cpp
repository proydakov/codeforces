#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int q;
    std::cin >> q;

    for(int i = 0; i < q; i++)
    {
        int n;
        std::cin >> n;
        auto const res = n == 2 ? 2 : (n % 2 == 0 ? 0 : 1);
        std::cout << res << std::endl;
    }

    return 0;
}
