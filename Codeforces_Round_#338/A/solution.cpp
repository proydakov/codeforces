#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    std::vector<int> data(m + 1, 0);
    for(int i = 0; i < n; i++) {
        int count;
        std::cin >> count;
        for(int j = 0; j < count; j++) {
            int temp;
            std::cin >> temp;
            data[temp]++;
        }
    }

    int count = std::count(data.begin() + 1, data.end(), 0);
    if(count == 0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
