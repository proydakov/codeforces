#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        int k;
        std::cin >> k;
        std::string line;
        std::cin >> line;
        int time = 0;
        while(true)
        {
            bool snow = false;
            for(int i = k - 2; i >= 0; i--)
            {
                if (line[i] == 'A' && line[i + 1] == 'P')
                {
                    snow = true;
                    line[i + 1] = 'A';
                }
            }
            if (snow)
            {
                time++;
            }
            else
            {
                break;
            }
        }
        std::cout << time << std::endl;
        
    }

    return 0;
}
