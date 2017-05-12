#include <vector>
#include <iostream>

typedef std::vector<std::vector<char>> matrix_t;

void dump(const matrix_t& matrix, int maxx, int maxy)
{
    for(int y = 0; y < maxy; y++) {
        for(int x = 0; x < maxx; x++) {
            std::cout << matrix[y][x];
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int maxy; int maxx;
    std::cin >> maxy;
    std::cin >> maxx;

    matrix_t matrix(maxy, std::vector<char>(maxx, '.'));
    for(int y = 0; y < maxy; y++) {
        for(int x = 0; x < maxx; x++) {
            char c;
            std::cin >> c;
            matrix[y][x] = c;
        }
    }

    int acc = 0;

    for(int y = 0; y < maxy; y++) {
        bool has = false;
        for(int x = 0; x < maxx; x++) {
            if('S' == matrix[y][x]) {
                has = true;
            }
        }
        if(has) {
            continue;
        }
        for(int x = 0; x < maxx; x++) {
            if('.' == matrix[y][x]) {
                acc++;
            }
            matrix[y][x] = '*';
        }
    }

    for(int x = 0; x < maxx; x++) {
        bool has = false;
        for(int y = 0; y < maxy; y++) {
            if('S' == matrix[y][x]) {
                has = true;
            }
        }
        if(has) {
            continue;
        }
        for(int y = 0; y < maxy; y++) {
            if('.' == matrix[y][x]) {
                acc++;
            }
            matrix[y][x] = '*';
        }
    }

    std::cout << acc << std::endl;

    return 0;
}
