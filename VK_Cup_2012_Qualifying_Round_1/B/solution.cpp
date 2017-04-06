#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    size_t size;
    std::cin >> size;

    std::vector<int> data(size, 0);
    for(size_t i = 0; i < size; i++) {
        std::cin >> data[i];
    }
    std::sort(data.begin(), data.end());

    size_t step = 0;
    int count = 0;
    for(int i = 0, j = size - 1; i <= j;) {
        ++step;
        int item = data[j];
        --j;
        while(i <= j) {
            if((item + data[i]) <= 4) {
                item += data[i];
                ++i;
            }
            else {
                break;
            }
        }
        ++count;
    }

    std::cout << count << std::endl;

    return 0;
}
