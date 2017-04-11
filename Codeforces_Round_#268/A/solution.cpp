#include <vector>
#include <iostream>
#include <algorithm>

void fill(std::vector<int>& data)
{
    int m;
    std::cin >> m;
    for(int i = 0; i < m; i++) {
        int index;
        std::cin >> index;
        data[index] = 1;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n + 1, 0);

    fill(data);
    fill(data);

    const auto it = std::find(data.begin() + 1, data.end(), 0);
    if(it == data.end()) {
        std::cout << "I become the guy." << std::endl;
    }
    else {
        std::cout << "Oh, my keyboard!" << std::endl;
    }

    return 0;
}
