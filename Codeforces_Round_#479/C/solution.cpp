#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::size_t n; int k;
    std::cin >> n;
    std::cin >> k;

    std::vector<int> data(n);
    for(std::size_t i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    std::sort(data.begin(), data.end());

    int ans;

    if (k == 0) {
        ans = data.front() - 1;
    }
    else {
        ans = data[k - 1];
    }

    int cnt = std::count_if(data.begin(), data.end(), [=](int i){
        return i <= ans;
    });

    if (cnt != k || !(1 <= ans))
    {
        std::cout << -1 << std::endl;
        return 0;
    }

    std::cout << ans << std::endl;

    return 0;
}
