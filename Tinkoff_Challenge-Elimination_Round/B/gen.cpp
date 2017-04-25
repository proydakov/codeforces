#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    const int size = 1000;

    const int s = size / 4;
    const int t = size / 4 * 3;

    std::vector<std::vector<char>> data(size, std::vector<char>(size, '.'));

    data[s][s] = 'S';
    data[t][t] = 'T';

    std::cout << size << ' ' << size << std::endl;

    for(int y = 0; y < size; y++) {
        for(int x = 0; x < size; x++) {
            std::cout << data[y][x];
        }
        std::cout << std::endl;
    }

    return 0;
}
