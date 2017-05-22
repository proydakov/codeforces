#include <vector>
#include <iostream>

size_t dump(std::vector<char>& cache, size_t index)
{
    while(cache[index]) {
        std::cout << index << ' ';
        cache[index] = 0;
        index--;
    }
    std::cout << std::endl;
    return index;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<char> cache(n + 1, 0);
    size_t next_index = n;

    for(int i = 0; i < n; i++) {
        int temp_index;
        std::cin >> temp_index;
        cache[temp_index] = 1;
        if(next_index == temp_index) {
            next_index = dump(cache, temp_index);
        }
        else {
            std::cout << std::endl;
        }
    }

    return 0;
}
