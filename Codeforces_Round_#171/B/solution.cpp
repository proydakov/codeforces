#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    size_t N; int64_t T;
    std::cin >> N;
    std::cin >> T;

    std::vector<int64_t> data(N, 0);
    for(size_t i = 0; i < N; i++) {
        std::cin >> data[i];
    }

    int64_t max_count = 0;

    int64_t time_acc = T;
    int64_t count_acc = 0;

    size_t index = 0;
    for(; time_acc >= 0 && index < N; index++) {
        count_acc++;
        time_acc -= data[index];
    }
    max_count = std::max(max_count, time_acc >= 0 ? count_acc : count_acc - 1);

    for(size_t i = index, j = 0; j < N; j++) {
        time_acc += data[j];
        count_acc--;
        for(; i < N && (time_acc - data[i]) >= 0; i++) {
            count_acc++;
            time_acc -= data[i];
        }
        max_count = std::max(max_count, count_acc);
    }

    std::cout << max_count << std::endl;

    return 0;
}
