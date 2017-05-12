#include <queue>
#include <iostream>

struct child_t
{
    int index;
    int candys;
    int limits;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    std::queue<child_t> items;
    for(int i = 1; i <= n; i++) {
        int limits;
        std::cin >> limits;
        items.push(child_t{i, 0, limits});
    }

    int index = -1;
    while(!items.empty()) {
        auto item = items.front();
        items.pop();

        index = item.index;

        item.candys += m;
        if(item.candys < item.limits) {
            items.push(item);
        }
    }
    std::cout << index << std::endl;

    return 0;
}
