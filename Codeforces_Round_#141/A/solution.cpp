#include <set>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::set<int> set;

    for(int i = 0; i < 4; i++) {
        int temp;
        std::cin >> temp;
        set.insert(temp);
    }

    std::cout << (4 - set.size()) << std::endl;

    return 0;
}
