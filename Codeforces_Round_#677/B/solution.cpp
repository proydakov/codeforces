#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    int size;
    std::string str;

    std::cin >> size;
    str.resize(size);
    for(int i = 0; i < size; i++)
    {
        std::cin >> str[i];
    }
    
    int min_one = 0;
    int max_one = size - 1;

    for(int i = 0; i < size; i++)
    {
        if (str[i] == '1')
        {
            min_one = i;
            break;
        }
    }

    for(int i = size - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            max_one = i;
            break;
        }
    }

    size_t ans = 0;
    for(int i = min_one; i <= max_one; i++)
    {
        if (str[i] == '0')
        {
            ans++;
        }
    }

    std::cout << ans << "\n";
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
