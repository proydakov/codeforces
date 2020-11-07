#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    size_t size;
    std::string str;
    std::cin >> size >> str;

    bool bottom = false;

    std::string r1;
    std::string r2;
    r1.reserve(size);
    r2.reserve(size);

    for(auto const c : str)
    {
        if(bottom)
        {
            r1.push_back('0');
            r2.push_back(c);
        }
        else
        {
            if ('2' == c)
            {
                r1.push_back('1');
                r2.push_back('1');
            }
            else if('1' == c)
            {
                bottom = true;
                r1.push_back('1');
                r2.push_back('0');
            }
            else
            {
                r1.push_back('0');
                r2.push_back('0');
            }
        }
    }
    std::cout << r1 << "\n" << r2 << "\n";
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
