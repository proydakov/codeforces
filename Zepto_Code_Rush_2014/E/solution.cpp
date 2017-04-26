#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

struct item
{
    int value;
    int level;
};

struct desc
{
    int a;
    int b;
    int level;
};

bool operator<(const item& i1, const item& i2)
{
    if(i1.value == i2.value) {
        return i1.level < i2.level;
    }
    return i1.value < i2.value;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int w;
    std::cin >> n;
    std::cin >> w;

    std::vector<desc> cache(n + 1);

    std::vector<item> data;
    data.reserve(n * 2);
    for(int i = 1; i <= n; i++) {
        int a; int b;
        std::cin >> a;
        std::cin >> b;

        data.push_back({a, i});
        data.push_back({b, i});

        cache[i] = {a, b, i};
    }

    std::sort(data.begin(), data.end());

    std::vector<int> solution(n + 1, 0);

    uint64_t t = 0;
    int cw = 0;
    for(int index = 0; cw != w; index++) {
        int ivalue = data[index].value;
        int ilevel = data[index].level;
        switch(solution[ilevel]) {
            case 0:
            {
                t += uint64_t(ivalue);
                solution[ilevel] = 1;
            }
                break;

            case 1:
            {
                t += uint64_t(ivalue);
                t -= uint64_t(cache[ilevel].a);
                solution[ilevel] = 2;
            }
                break;

            default:
                throw std::runtime_error("invalid input");
                break;
        }
        cw += 1;
    }

    std::cout << t << std::endl;
    for(int i = 1; i <= n; i++) {
        std::cout << solution[i];
    }
    std::cout << std::endl;

    return 0;
}
