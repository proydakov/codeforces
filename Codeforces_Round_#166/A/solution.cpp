#include <array>
#include <iostream>

bool check_unique(std::array<int, 4>& array)
{
    std::array<int, 10> cache;
    cache.fill(0);

    for(int item : array) {
        cache[item]++;
    }

    for(int item : cache) {
        if(item > 1) {
            return false;
        }
    }

    return true;
}

std::array<int, 4> to_array(int val)
{
    std::array<int, 4> array;

    for(int i = 3; i >= 0; i--) {
        int item = val % 10;
        val /= 10;
        array[i] = item;
    }

    return array;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int val;
    std::cin >> val;

    std::array<int, 4> array;

    do
    {
        ++val;
        array = to_array(val);
    }
    while(!check_unique(array));

    std::cout << val << std::endl;

    return 0;
}
