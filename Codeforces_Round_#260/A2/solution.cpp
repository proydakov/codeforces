#include <vector>
#include <iostream>
#include <algorithm>

struct item_t
{
    int a;
    int b;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<item_t> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i].a;
        std::cin >> data[i].b;
    }

    std::sort(data.begin(), data.end(), [](item_t i1, item_t i2){
        return i1.a < i2.a;
    });

    for(int i = 1; i < n; i++) {
        if(data[i].b < data[i - 1].b) {
            std::cout << "Happy Alex" << std::endl;
            return 0;
        }
    }

    std::cout << "Poor Alex" << std::endl;

    return 0;
}
