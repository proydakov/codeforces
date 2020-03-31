#include <array>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int64_t, 4> s;
    s.fill(0);

    for (int i = 0; i < 4; i++)
        std::cin >> s[i];

    std::sort(s.begin(), s.end());

    int64_t c = s[3] - s[0];
    int64_t b = s[3] - s[1];
    int64_t a = s[3] - s[2];

    std::cout << a << ' ' << b << ' ' << c << std::endl;

    return 0;
}
