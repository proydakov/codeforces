#include <cstdint>
#include <iostream>
#include <unordered_map>

enum { max_data = 200000 };

struct pair_hash
{
public:
    template <typename T, typename U>
    std::size_t operator()(const std::pair<T, U>& x) const
    {
        return std::hash<T>()(x.first) ^ std::hash<U>()(x.second);
    }
};

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t n;
    std::cin >> n;

    std::unordered_map<int64_t, int64_t> x_map;
    x_map.reserve(max_data);

    std::unordered_map<int64_t, int64_t> y_map;
    y_map.reserve(max_data);

    std::unordered_map<std::pair<int64_t, int64_t>, int64_t, pair_hash> duplicate_map;
    duplicate_map.reserve(max_data);

    for(int64_t i = 0; i < n; i++) {
        int64_t x; int64_t y;
        std::cin >> x;
        std::cin >> y;

        x_map[x]++;
        y_map[y]++;
        duplicate_map[std::make_pair(x, y)]++;
    }

    int64_t accumulator = 0;

    for(const auto pair : x_map) {
        if(pair.second > 1) {
            int64_t value = pair.second * (pair.second - 1) / 2;
            accumulator += value;
        }
    }

    for(const auto pair : y_map) {
        if(pair.second > 1) {
            int64_t value = pair.second * (pair.second - 1) / 2;
            accumulator += value;
        }
    }

    for(const auto pair : duplicate_map) {
        if(pair.second > 1) {
            int64_t value = pair.second * (pair.second - 1) / 2;
            accumulator -= value;
        }
    }

    std::cout << accumulator << std::endl;

    return 0;
}
