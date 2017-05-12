#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::string phone;
    std::cin >> phone;

    std::vector<int> items;
    while(n) {
        if(0 == n % 2) {
            items.push_back(2);
            n -= 2;
        }
        else {
            items.push_back(3);
            n -= 3;
        }
    }

    int index = 0;

    for(int i = 0; i < items.size() - 1; i++) {
        const int index_max = index + items[i];
        for(; index < index_max; index++) {
            std::cout << phone[index];
        }
        std::cout << '-';
    }

    const int index_max = index + items.back();
    for(; index < index_max; index++) {
        std::cout << phone[index];
    }
    std::cout << std::endl;

    return 0;
}
