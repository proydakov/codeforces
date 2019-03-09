#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    bool easy = true;
    for(int i = 0; i < n; i++)
    {
        int val = 0;
        std::cin >> val;
        if (1 == val)
        {
            easy = false;
        }
    }

    if (easy)
    {
        std::cout << "EASY" << std::endl;
    }
    else
    {
        std::cout << "HARD" << std::endl;
    }

    return 0;
}
