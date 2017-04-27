#include <vector>
#include <iostream>
#include <algorithm>

struct item_t
{
    int count;
    std::string desc;
};

bool operator<(const item_t& i1, const item_t& i2)
{
    return i1.count < i2.count;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<item_t> array{ {0, "chest"}, {0, "biceps"}, {0, "back"} };
    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;

        const int index = i % 3;
        array[index].count += temp;
    }

    auto item = *std::max_element(array.begin(), array.end());
    std::cout << item.desc << std::endl;

    return 0;
}
