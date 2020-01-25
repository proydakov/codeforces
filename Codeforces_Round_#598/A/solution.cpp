#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int q;
    std::cin >> q;

    for(int i = 0; i < q; i++)
    {
        std::int64_t a, b, n, S;
        std::cin >> a >> b >> n >> S;
        std::int64_t t = S / n;
        std::int64_t p = std::min(t, a);
        S -= p * n;
        if (b >= S)
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
