#include <vector>
#include <iostream>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> index;
    index.reserve(n);
    for(int i = 0; i < n; i++)
    {
        char c;
        std::cin >> c;
        if ('1' == c)
        {
            index.emplace_back(i);
        }
    }

    int result = 0;

    if(index.empty())
    {
        index.emplace_back(0);
        result++;
    }

    for(size_t i = 1; i < index.size(); i++)
    {
        auto const distance = index[i] - index[i - 1] - 1;
        if (distance >= k)
        {
            auto const delta = (distance - k) / (k + 1);
            result += delta;
        }
    }

    {
        auto const front_distance = index.front();
        if (front_distance > 0)
        {
            auto const delta = front_distance / (k + 1);
            result += delta;
        }
    }

    {
        auto const end_distance = n - index.back() - 1;
        if (end_distance > 0)
        {
            auto const delta = (end_distance) / (k + 1);
            result += delta;
        }
    }

    std::cout << result << '\n';
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
