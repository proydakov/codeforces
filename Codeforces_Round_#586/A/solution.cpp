#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int one_cnt = 0;
    int zero_cnt = 0;
    for(int i = 0; i < n; i++)
    {
        char c;
        std::cin >> c;
        switch(c)
        {
            case 'n':
                one_cnt++;
                break;
             case 'z':
                 zero_cnt++;
                 break;
             default:
                 break;
        }
    }

    for(int i = 0; i < one_cnt; i++)
    {
        std::cout << "1 ";
    }
    for(int i = 0; i < zero_cnt; i++)
    {
        std::cout << "0 ";
    }
    std::cout << std::endl;

    return 0;
}
