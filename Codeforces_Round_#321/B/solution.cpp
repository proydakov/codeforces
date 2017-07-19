#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    size_t size;
    std::cin >> size;

    int64_t d;
    std::cin >> d;

    std::vector<std::pair<int64_t, int64_t>> data;
    data.reserve(size);
    for(size_t i = 0; i < size; i++) {
        int64_t m; int64_t s;
        std::cin >> m;
        std::cin >> s;

        data.push_back(std::make_pair(m, s));
    }

    std::sort(data.begin(), data.end());

    int64_t count = 1;
    size_t from_index = 0;
    int64_t accumulator = data[0].second;
    int64_t max_accumulator = accumulator;

    for(size_t i = 1; i < size; i++) {
        accumulator += data[i].second;

        for(; data[i].first - data[from_index].first >= d; from_index++) {
            accumulator -= data[from_index].second;
        }
        max_accumulator = std::max(max_accumulator, accumulator);
    }
    std::cout << max_accumulator << std::endl;

    return 0;
}
