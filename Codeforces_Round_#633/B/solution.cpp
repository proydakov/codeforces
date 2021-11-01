#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());

    int64_t middle = vec.size() / 2;

    std::cout << vec[middle] << ' ';

    auto left = middle - 1;
    auto right = middle + 1;

    while(left >= 0 && right < static_cast<int64_t>(vec.size()))
    {
        std::cout << vec[left] << ' ' << vec[right] << ' ';
        left--;
        right++;
    }

    if (left >= 0)
    {
        std::cout << vec[left] << ' ';
    }

    if (right < static_cast<int64_t>(vec.size()))
    {
        std::cout << vec[right];
    }

    std::cout << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
