#include <tuple>
#include <cstdint>
#include <iostream>

std::tuple<int, int, int> split(int num)
{
    int count2 = 0;
    int count3 = 0;
    while(num % 3 == 0)
    {
        count3++;
        num /= 3;
    }
    while(num % 2 == 0)
    {
        count2++;
        num /= 2;
    }
    return {num, count2, count3};
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;
    auto const [n_num, n_count2, n_count3] = split(n);
    auto const [m_num, m_count2, m_count3] = split(m);

    if (m >= n and n_num == m_num and m_count2 >= n_count2 and m_count3 >= n_count3)
    {
        std::cout << ((m_count3 - n_count3) + (m_count2 - n_count2)) << std::endl;
    }
    else
    {
        std::cout << -1 << std::endl;
    }

    return 0;
}
