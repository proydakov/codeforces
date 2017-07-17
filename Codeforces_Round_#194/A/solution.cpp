#include <deque>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int p = n * n;
    std::vector<int> all(p, 0);
    for(int i = 0; i < p; i++) {
        all[i] = i + 1;
    }

    std::vector<std::deque<int>> cache(n, std::deque<int>(n, 0));
    for(int i = 0; i < p; i++) {
        int node = i / n;
        int posn = i % n;
        cache[node][posn] = all[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n / 2; j++) {
            std::cout << cache[j].front() << ' ';
            cache[j].pop_front();
        }
        for(int j = n / 2; j < n; j++) {
            std::cout << cache[j].back() << ' ';
            cache[j].pop_back();
        }
        std::cout << std::endl;
    }

    return 0;
}
