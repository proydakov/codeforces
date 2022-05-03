#include <cstdint>
#include <iostream>

void solve()
{
    int rating;
    std::cin >> rating;

    if (rating <= 1399)
    {
        std::cout << "Division 4\n";
    }
    else if(1400 <= rating && rating <= 1599)
    {
        std::cout << "Division 3\n";
    }
    else if(1600 <= rating && rating <= 1899)
    {
        std::cout << "Division 2\n";
    }
    else if(1900 <= rating)
    {
        std::cout << "Division 1\n";
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
