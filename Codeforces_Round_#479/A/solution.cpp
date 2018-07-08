#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    for(int i = 0; i < k; i++)
    {
        if(n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }

    std::cout << n << std::endl;

    return 0;
}
