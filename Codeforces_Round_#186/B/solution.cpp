#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string buffer;
    std::cin >> buffer;

    std::vector<int> cache(buffer.size() + 1, 0);

    for(size_t i = 0; i < buffer.size() - 1; i++) {
        cache[i + 1] = (buffer[i] == buffer[i + 1]) ? 1 : 0;
    }

    for(size_t i = 1; i < cache.size(); i++) {
        cache[i] += cache[i - 1];
    }

    size_t n;
    std::cin >> n;

    for(size_t i = 0; i < n; i++) {
        int l; int r;
        std::cin >> l;
        std::cin >> r;

        l--;
        r--;

        int s = cache[r] - cache[l];
        std::cout << s << std::endl;
    }

    return 0;
}
