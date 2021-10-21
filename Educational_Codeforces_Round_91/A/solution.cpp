#include <vector>
#include <cstdint>
#include <iostream>
#include <optional>
#include <algorithm>

void solve()
{
    long n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::optional<size_t> left, middle, right;
    right = vec.size() - 1;

    for(long i = 1; i < n - 1; i++)
    {
        left = std::nullopt;
        middle = std::nullopt;
        right = std::nullopt;

        middle = i;

        for(long j = i - 1; j >= 0; j--)
        {
            if (vec[j] < vec[i])
            {
                left = j;
                break;
            }
        }

        for(long j = i + 1; j < n; j++)
        {
            if (vec[j] < vec[i])
            {
                right = j;
                break;
            }
        }

        if (left && middle && right)
        {
            std::cout << "YES\n";
            std::cout << (left.value() + 1) << ' ' << (middle.value() + 1) << ' ' << (right.value() + 1) << '\n';
            return;
        }
    }

    std::cout << "NO\n";
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
