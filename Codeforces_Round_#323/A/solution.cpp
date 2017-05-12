#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> vert(n + 1, 0);
    std::vector<int> horz(n + 1, 0);

    int size = n * n;

    for(int i = 1; i <= size; i++) {
        int v; int h;
        std::cin >> v;
        std::cin >> h;

        if(0 == vert[v] && 0 == horz[h]) {
            vert[v] = 1;
            horz[h] = 1;
            std::cout << i << std::endl;
        }
    }

    return 0;
}
