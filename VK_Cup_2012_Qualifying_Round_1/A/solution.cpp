#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    int k;

    std::cin >> n;
    std::cin >> k;
    --k;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    const int val = std::max(data[k], 1);
    int count = std::count_if(data.begin(), data.end(), [val](int item) {
        return item >= val;
    });

    std::cout << count << std::endl;

    return 0;
}
