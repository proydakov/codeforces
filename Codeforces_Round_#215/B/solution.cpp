#include <set>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;

    std::cin >> n;
    std::cin >> m;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::set<int> set;
    std::vector<int> cache(n, 0);

    for(int i = data.size() - 1; i >= 0; i--) {
        set.insert(data[i]);
        cache[i] = set.size();
    }

    for(int i = 0; i < m; i++) {
        int index;
        std::cin >> index;

        std::cout << cache[(index - 1)] << std::endl;
    }

    return 0;
}
