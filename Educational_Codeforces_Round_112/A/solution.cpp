#include <array>
#include <limits>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

template<typename K, typename V>
struct pair
{
    constexpr pair() : k(0), v(0)
    {
    }

    constexpr pair(K ik, V iv) : k(ik), v(iv)
    {
    }

    constexpr pair& operator=(const pair& other)
    {
        k = other.k;
        v = other.v;
        return *this;
    }

    K k;
    V v;
};

constexpr auto build_small_solution()
{
    std::array<pair<size_t, std::uint64_t>, 3> map{};
    map[0] = {6, 15};
    map[1] = {8, 20};
    map[2] = {10, 25};

    size_t constexpr size = 100;
    std::array<std::uint64_t, size> vec{};
    for(size_t i = 0; i < size; i++)
    {
        vec[i] = std::numeric_limits<std::uint64_t>::max();
    }

    for(auto const& [offset, score] : map)
    {
        vec[offset] = score;
    }

    for(size_t i = 0; i < size; i++)
    {
        if (vec[i] != std::numeric_limits<std::uint64_t>::max())
        {
            for(auto const& [offset, score] : map)
            {
                auto const index = i + offset;
                if (index < size)
                {
                    vec[index] = std::min(vec[index], vec[i] + score);
                }
            }
        }
    }

    return vec;
}

auto const small = build_small_solution();


std::uint64_t find_small(size_t i)
{
    while(small[i] == std::numeric_limits<std::uint64_t>::max())
    {
        i++;
    }
    return small[i];
}

void solve()
{
    std::uint64_t n;
    std::cin >> n;

    auto ost = n / 10;
    auto delta = n - ost * 10;
    if (ost > 2)
    {
        ost -= 2;
        delta += 20;
        std::cout << find_small(delta) + (ost * std::uint64_t{25})  << '\n';
    }
    else
    {
        delta = n;
        std::cout << find_small(delta) << '\n';
    }
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
