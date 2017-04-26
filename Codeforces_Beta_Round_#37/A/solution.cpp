#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(1001, 0);

    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        data[temp]++;
    }

    int count = std::count_if(data.begin(), data.end(), [](int item){
        return item > 0;
    });
    
    int max = *std::max_element(data.begin(), data.end());

    std::cout << max << ' ' << count << std::endl;

    return 0;
}
