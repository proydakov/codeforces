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
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            int a = 0;
            std::cin >> a;
            sum += a;
        }
        int const new_price = sum / n + (sum % n == 0 ? 0 : 1);
        std::cout << new_price << std::endl;
    }

    return 0;
}
