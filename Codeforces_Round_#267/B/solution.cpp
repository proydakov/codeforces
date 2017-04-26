#include <vector>
#include <cstdint>
#include <iostream>

int HammingWeight(uint32_t i)
{
     i = i - ((i >> 1) & 0x55555555);
     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
     return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m; int k;
    std::cin >> n;
    std::cin >> m;
    std::cin >> k;

    std::vector<uint32_t> data(m);
    for(int i = 0; i < m; i++) {
        std::cin >> data[i];
    }

    uint32_t hero;
    std::cin >> hero;

    int count = 0;
    for(const int e : data) {
        int diff = HammingWeight(e | hero) - HammingWeight(e & hero);
        if(diff <= k) {
            count++;
        }
        /*
        std::cout << hero << " : " << e;
        std::cout << " &: " << HammingWeight(e & hero);
        std::cout << " |: " << HammingWeight(e | hero);
        std::cout << std::endl;
        */
    }

    std::cout << count << std::endl;

    return 0;
}
