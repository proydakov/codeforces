#include <cstdint>
#include <iostream>

void solve()
{
    std::string str;
    std::cin >> str;

    for(size_t i = 0; i < str.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (str[i] != 'a')
            {
                str[i] = 'a';
            }
            else
            {
                str[i] = 'b';
            }
        }
        else
        {
            if (str[i] != 'z')
            {
                str[i] = 'z';
            }
            else
            {
                str[i] = 'y';
            }
        } 
    }
    std::cout << str << "\n";
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
