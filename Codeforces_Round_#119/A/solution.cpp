#include <set>
#include <array>
#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int a; int b; int c;
    std::cin >> n;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::set<int> items;
    items.insert(a);
    items.insert(b);
    items.insert(c);

    std::array<int, 10000> array;
    array.fill(0);

    for(const int item : items) {
        array[item] = 1;
    }

    for(int i = 1; i <= n; i++) {
        if(array[i] > 0) {
            for(const int item : items) {
                int max_next_item = array[i] + 1;
                array[item + i] = std::max(array[item + i], max_next_item);
            }
        }
    }
    std::cout << array[n] << std::endl;

    return 0;
}
