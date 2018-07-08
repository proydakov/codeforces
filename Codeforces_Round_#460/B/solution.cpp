#include <iostream>

int sum(int num)
{
    int res = 0;
    for(; num; num /= 10)
    {
        res += num % 10;
    }
    return res;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int k;
    std::cin >> k;

    int i = 10;
    while(k)
    {
        i++;
        if(10 == sum(i))
        {
            k--;
        }
    }
    std::cout << i << std::endl;

    return 0;
}
