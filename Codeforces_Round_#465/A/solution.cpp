#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    int counter = 0;

    for (int i = 1; i < n / 2 + 1; i++)
    {
        int delta = n - i;
        if (delta % i == 0)
        {
            counter++;
        }
    }

    std::cout << counter << std::endl;

    return 0;
}
