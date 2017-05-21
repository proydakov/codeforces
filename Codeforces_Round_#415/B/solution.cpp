#include <cmath>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

struct value_t
{
    uint64_t kx1;
    uint64_t kx2;
    uint64_t l;
    uint64_t kx1margine;
    uint64_t kx2margine;
    uint64_t delta_margine;
};

std::ostream& operator<<(std::ostream& os, const value_t& value)
{
    std::cout << "k: " << value.kx1 << " l: " << value.l;
    return os;
}

bool operator<(const value_t& value1, const value_t& value2)
{
    return value1.delta_margine < value2.delta_margine;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int f;
    std::cin >> n;
    std::cin >> f;

    std::vector<value_t> data(n);
    for(int i = 0; i < n; i++) {
        uint64_t ki; uint64_t li;
        std::cin >> ki;
        std::cin >> li;
        value_t value{ki, ki * 2, li, std::min(ki, li), std::min(ki * 2, li), std::min(ki * 2, li) - std::min(ki, li)};
        data[i] = value;
    }

    std::sort(data.rbegin(), data.rend());

    uint64_t acc = 0;
    int index = 0;
    for(; index < f; index++) {
        acc += data[index].kx2margine;
    }

    for(; index < n; index++) {
        acc += data[index].kx1margine;
    }
    std::cout << acc << std::endl;

    return 0;
}
