#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    auto it1 = std::find(data.begin(), data.end(), 1);
    auto itn = std::find(data.begin(), data.end(), n);

    const int distance = std::abs(std::distance(it1, itn));

    auto it_min = it1;
    auto it_max = itn;

    if(it_min > it_max) {
        std::swap(it_min, it_max);
    }

    const int begin_dist = std::distance(data.begin(), it_min);
    const int end_dist = std::distance(it_max, data.end()) - 1;

    const int result_distance = std::max(begin_dist, end_dist) + distance;
    std::cout << result_distance << std::endl;

    return 0;
}
