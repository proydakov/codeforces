#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int size;
    std::cin >> size;

    int count = 0;

    std::vector<int> data;
    data.reserve(size);

    for(size_t i = 0; i < size; i++) {
        int temp;
        std::cin >> temp;
        if (temp == 4) {
            ++count;
        }
        else {
            data.push_back(temp);
        }
    }

    size -= count;
    std::sort(data.begin(), data.end());

    for(int i = 0, j = size - 1; i <= j;) {
        int item = data[j];

        --j;

        do {
            item += data[i];
            if(item <= 4) {
                ++i;
            }
            else {
                item -= data[i];
                break;
            }
        }
        while(i <= j);

        ++count;
    }

    std::cout << count << std::endl;

    return 0;
}
