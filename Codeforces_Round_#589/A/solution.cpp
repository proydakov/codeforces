#include <iostream>

bool is_simple(int test)
{
    int digits[10] = {};
    while(test > 0)
    {
        auto const ost = test % 10;
        test /= 10;
        if (digits[ost])
        {
            return false;
        }
        digits[ost] = 1;
    }
    return true;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int l, r;
    std::cin >> l;
    std::cin >> r;

    for(int i = l; i <= r; i++)
    {
        if (is_simple(i))
        {
            std::cout << i << std::endl;
            return 0;
        }
    }

    std::cout << -1 << std::endl;

    return 0;
}
