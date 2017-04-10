#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

std::vector<int> fill_digits()
{
    std::vector<int> data{ 4, 7 };
    return data;
}

std::vector<int> fill_nums()
{
    std::vector<int> data{ 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };
    return data;
}

int main()
{
    std::ios::sync_with_stdio(false);

    uint64_t val;
    std::cin >> val;

    int count = 0;

    const std::vector<int> digits = fill_digits();

    while(val) {
        const int temp = val % 10;
        val /= 10;
        if(std::find(digits.begin(), digits.end(), temp) != digits.end()) {
            count++;
        }
    }

    const std::vector<int> nums = fill_nums();

    const bool luck = std::find(nums.begin(), nums.end(), count) != nums.end();

    if(luck) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
