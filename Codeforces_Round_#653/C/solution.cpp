#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    size_t size;
    std::cin >> size;

    std::string text;
    std::cin >> text;

    size_t result{};
    size_t open{};

    for(auto const c : text)
    {
        if (')' == c)
        {
            if (open == 0)
            {
                result++;
            }
            else
            {
                open--;
            }
        }
        else
        {
            open++;
        }
    }

    std::cout << result << '\n';
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
