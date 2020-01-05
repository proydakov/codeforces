#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

int main()
{
    std::ios::sync_with_stdio(false);

    int n = 0;
    int m = 0;

    std::cin >> n;
    std::cin >> m;

    std::vector<std::string> nstr(n);

    for(int i = 0; i < n; i++)
    {
        std::cin >> nstr[i];
    }

    std::vector<std::string> mstr(m);

    for(int i = 0; i < m; i++)
    {
        std::cin >> mstr[i];
    }

    int q = 0;
    std::cin >> q;

    for(int i = 0; i < q; i++)
    {
        std::uint64_t year = 0;
        std::cin >> year;
        year -= 1;

        std::uint64_t nc = year % n;
        std::uint64_t mc = year % m;

        std::cout << nstr[nc] << mstr[mc] << std::endl;
    }


    return 0;
}
