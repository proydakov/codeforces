#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    uint64_t a; uint64_t b;
    std::cin >> a;
    std::cin >> b;

    uint64_t s = a + b;

    std::string resa = std::to_string(a);
    std::string resb = std::to_string(b);
    std::string ress = std::to_string(s);

    resa.erase(std::remove(resa.begin(), resa.end(), '0'), resa.end());
    resb.erase(std::remove(resb.begin(), resb.end(), '0'), resb.end());
    ress.erase(std::remove(ress.begin(), ress.end(), '0'), ress.end());

    uint64_t fa = std::stol(resa);
    uint64_t fb = std::stol(resb);

    uint64_t fs = fa + fb;
    std::string resfs = std::to_string(fs);
    if(resfs == ress) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
