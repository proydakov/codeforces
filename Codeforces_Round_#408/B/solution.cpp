#include <cmath>
#include <limits>
#include <vector>
#include <iostream>

int g_item_position = 1;  // позиция косточки
std::vector<int> g_holes; // позиции отверстий

class cup
{
public:
    cup() :
        item_(false)
    {
    }

    void put()
    {
        item_ = true;
    }

    void move(int position)
    {
        if(item_) {
            g_item_position = position;
            if(g_holes[position]) {
                item_ = false;
            }
        }
    }

private:
    bool item_;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n, m, k;
    std::cin >> n; // стаканы
    std::cin >> m; // отверстия
    std::cin >> k; // перестановки

    g_holes.resize(n + 1);
    std::fill(g_holes.begin(), g_holes.end(), 0);

    for(int i = 0; i < m; i++) {
        int index;
        std::cin >> index;
        g_holes[index] = 1;
    }

    std::vector<cup> cups(n + 1, cup());

    cups[1].put();
    cups[1].move(1);

    for(int i = 0; i < k; i++) {
        int from; int to;

        std::cin >> from;
        std::cin >> to;

        cups[from].move(to);
        cups[to].move(from);

        std::swap(cups[from], cups[to]);
    }

    std::cout << g_item_position << std::endl;

    return 0;
}
