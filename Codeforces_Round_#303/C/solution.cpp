#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t n;
    std::cin >> n;

    std::vector<std::pair<int64_t, int64_t>> data(n);
    for(int64_t i = 0; i < n; i++) {
        std::cin >> data[i].first;
        std::cin >> data[i].second;
    }

    int64_t counter = 1;
    int64_t prev_position = data[0].first;
    int64_t prev_height  = data[0].second;

    for(int64_t i = 1; i < n - 1; i++) {
        int64_t current_position = data[i].first;
        int64_t current_height   = data[i].second;

        if(prev_position < current_position - current_height) {
            counter++;
            prev_position = current_position;
        }
        else if(current_position + current_height < data[i + 1].first) {
            counter++;
            prev_position = current_position + current_height;
        }
        else {
            prev_position = current_position;
        }
    }

    if(data.size() > 1) {
        counter++;
    }

    std::cout << counter << std::endl;

    return 0;
}
