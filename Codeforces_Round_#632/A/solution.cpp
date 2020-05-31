#include <cstdint>
#include <iostream>

void solve()
{
    int a, b;
    std::cin >> a >> b;
    
    auto size = a * b;
    if (size % 2 == 1)
    {
        bool black = true;
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                std::cout << (black ? 'B' : 'W');
                black = !black;
            }
            std::cout << '\n';
        }
    }
    else
    {
        int accum = 0;
        bool begin_black = true;
        for(int i = 0; i < a; i++)
        {
            bool black = begin_black;
            begin_black = !begin_black;
            for(int j = 0; j < b; j++)
            {
                accum++;
                if(accum == size - 1)
                {
                    goto last;
                }
                std::cout << (black ? 'B' : 'W');
                black = !black;
            }
            std::cout << '\n';
        }
last:
        std::cout << 'B' << 'B' << '\n';
    }
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
