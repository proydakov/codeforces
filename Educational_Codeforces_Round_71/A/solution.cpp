#include <iostream>
#include <algorithm>

struct descriptor
{
    int count;
    int price;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int t = 0;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int b;
        std::cin >> b;
        b /= 2;

        descriptor descriptors[2]{ {0, 0}, {0, 0} };
        std::cin >> descriptors[0].count;
        std::cin >> descriptors[1].count;
        std::cin >> descriptors[0].price;
        std::cin >> descriptors[1].price;

        std::sort(std::begin(descriptors), std::end(descriptors), [](auto d1, auto d2){
            return d1.price > d2.price;
        });

        int res = 0;
        for(auto d : descriptors)
        {
            int min = std::min(b, d.count);
            res += min* d.price;

            b -= min;
            if (b == 0)
            {
                break;
            }
        }
        std::cout << res << std::endl;
    }

    return 0;
}
