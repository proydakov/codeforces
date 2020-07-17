#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    size_t size;
    std::cin >> size;

    std::string text;
    std::cin >> text;

    auto pos = text.find("10");
    if (std::string::npos == pos)
    {
        std::cout << text << "\n";
        return;
    }

    size_t zero = 1;
    for(size_t i = 0; i < size and text[i] == '0'; i++)
    {
        zero++;
    }
    
    size_t one = 0;
    for(long i = size - 1; i >= 0 and text[i] == '1'; i--)
    {
        one++;
    }

    std::cout << std::string(zero, '0') << std::string(one, '1') << "\n";
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
