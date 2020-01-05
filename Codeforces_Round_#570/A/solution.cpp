#include <iostream>

bool summ_4(int n)
{
    int summ = 0;
    while(n > 0)
    {
        summ += n % 10;
        n /= 10;
    }
    return summ % 4 == 0;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    for(;not summ_4(n); n++);

    std::cout << n << std::endl;

    return 0;
}
