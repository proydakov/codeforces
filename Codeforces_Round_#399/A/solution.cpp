#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> cache(n);
    for(int i = 0; i < n; i++) {
        std::cin >> cache[i];
    }

    std::sort(cache.begin(), cache.end());

    int min = cache.front();
    int max = cache.back();

    int counter = 0;
    for(int i = 1; i < n - 1; i++) {
        if(cache[i] > min && cache[i] < max) {
            ++counter;
        }
    }
    std::cout << counter << std::endl;

    return 0;
}
