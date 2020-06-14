#include <cstdint>
#include <iostream>

char category(int count)
{
    auto ost = count % 4;
    switch(ost)
    {
        case 1:
            return 'A';

        case 3:
            return 'B';

        case 2:
            return 'C';

        case 0:
            return 'D';
    }
    return 'Z';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    int delta = 0;
    char categ = category(n);

    {
        char test_categ = category(n + 1);
        if (test_categ < categ)
        {
            categ = test_categ;
            delta = 1;
        }
    }

    {
        char test_categ = category(n + 2);
        if (test_categ < categ)
        {
            categ = test_categ;
            delta = 2;
        }
    }

    std::cout << delta << ' ' << categ << std::endl;

    return 0;
}
