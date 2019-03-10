#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::vector<int> const coins{
        100, 20, 10, 5, 1
    };

    int n = 0;
    std::cin >> n;

    int count = 0;
    for (auto const coin : coins)
    {
        auto const cnt =  n / coin;
        count += cnt;
        n -= cnt * coin;
    }

    std::cout << count << std::endl;

    return 0;
}
