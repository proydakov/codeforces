#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    int res = 0;
    int xcounter = 0;
    for(auto c : str)
    {
        if ('x' == c)
        {
            xcounter++;
        }
        else
        {
            xcounter = 0;
        }

        if (xcounter > 2)
        {
            res++;
        }
    }
    std::cout << res << std::endl;

    return 0;
}
