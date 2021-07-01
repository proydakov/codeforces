#include <cstdint>
#include <iostream>
#include <algorithm>

std::int64_t const numbers[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9,
    11, 22, 33, 44, 55, 66, 77, 88, 99,
    111, 222, 333, 444, 555, 666, 777, 888, 999,
    1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999,
    11111, 22222, 33333, 44444, 55555, 66666, 77777, 88888, 99999,
    111111, 222222, 333333, 444444, 555555, 666666, 777777, 888888, 999999,
    1111111, 2222222, 3333333, 4444444, 5555555, 6666666, 7777777, 8888888, 9999999,
    11111111, 22222222, 33333333, 44444444, 55555555, 66666666, 77777777, 88888888, 99999999,
    111111111, 222222222, 333333333, 444444444, 555555555, 666666666, 777777777, 888888888, 999999999
};

void solve()
{
    std::int64_t n;
    std::cin >> n;

    auto it = std::upper_bound(std::begin(numbers), std::end(numbers), n);
    auto const res = std::distance(std::begin(numbers), it);

    std::cout << res << '\n';
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
