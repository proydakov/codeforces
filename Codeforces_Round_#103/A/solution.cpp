#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);

    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    auto max_it = std::max_element(data.begin(), data.end());
    auto min_it = std::min_element(data.rbegin(), data.rend());

    int max_delta = max_it - data.begin();
    int min_delta = min_it - data.rbegin();

    int index_max = max_delta;
    int index_min = n - min_delta - 1;

    int delta = max_delta + min_delta;
    if(index_max > index_min) {
        --delta;
    }

    std::cout << delta << std::endl;

    return 0;
}
