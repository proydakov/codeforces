#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, q;
    std::cin >> n >> q;

    std::string word;
    std::cin >> word;

    std::vector<int16_t> iword(1, 0);
    iword.reserve(word.size() + 1);

    for(auto const s : word)
    {
        auto const v = static_cast<int>(s) - static_cast<int>('a') + 1;
        iword.emplace_back(static_cast<int16_t>(v));
    }

    std::vector<int32_t> sum(1, 0);
    sum.reserve(word.size() + 1);
    for(size_t i = 1; i < n + 1; i++)
    {
        auto const next = sum.back() + iword[i];
        sum.emplace_back(next);
    }

    for(size_t i = 0; i < q; i++)
    {
        size_t l, r;
        std::cin >> l >> r;
        std::cout << (sum[r] - sum[l - 1]) << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    {
        solve();
    }

    return 0;
}
