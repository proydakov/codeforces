#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int c; int money;
    std::cin >> c;
    std::cin >> money;

    int counter = 0;

    std::vector<int> ids;
    ids.reserve(c);

    for(int i = 1; i <= c; i++) {
        bool buy = false;

        int iterc;
        std::cin >> iterc;
        for(int j = 0; j < iterc; j++) {
            int temp_money;
            std::cin >> temp_money;

            if(money > temp_money) {
                buy = true;
            }
        }

        if(buy) {
            counter++;
            ids.push_back(i);
        }
    }
    std::cout << counter << std::endl;

    for(const auto id : ids) {
        std::cout << id << ' ';
    }
    std::cout << std::endl;

    return 0;
}
