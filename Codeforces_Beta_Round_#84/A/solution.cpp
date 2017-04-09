#include <vector>
#include <cstdint>
#include <iostream>

std::vector<int> fill()
{
    std::vector<int> data{ 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };
    return data;
}

int main()
{
    std::ios::sync_with_stdio(false);

    uint64_t val;
    std::cin >> val;

    std::cout << "val: " << val << std::endl;

    std::vector<int> data = fill();

    int nums = 0;
    while(val) {
        nums++;
        val /= 10;
    }

    bool luck = false;
    for(int d : data) {
        int temp = nums / d;
        temp *= d;
        if(nums == temp) {
            luck = true;
            break;
        }
    }

    std::cout << "nums: " << nums << std::endl;

    if(luck) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
