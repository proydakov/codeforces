#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    int data[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    int f = 0;
    int l = n - 1;

    int acc = 0;
    for(; f <= l; f++)
    {
        if(data[f] <= k)
        {
            acc++;
        }
        else
        {
            break;
        }
    }

    for(; l >= f; l--)
    {
        if(data[l] <= k)
        {
            acc++;
        }
        else
        {
            break;
        }
    }

    std::cout << acc << std::endl;

    return 0;
}
