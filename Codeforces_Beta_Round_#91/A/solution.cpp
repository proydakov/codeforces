#include <vector>
#include <iostream>

std::vector<int> fill()
{
    std::vector<int> data{ 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };
    return data;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int val;
    std::cin >> val;

    std::vector<int> data = fill();

    bool luck = false;
    for(int d : data) {
        int temp = val / d;
        temp *= d;
        if(val == temp) {
            luck = true;
            break;
        }
    }

    if(luck) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
