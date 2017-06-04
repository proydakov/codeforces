#include <vector>
#include <iostream>

int calc_count(const std::vector<std::vector<char>>& matrix, int x, int y)
{
    int count = 0;
    {
        int tx = x - 1;
        int ty = y;
        if(tx >= 0 && matrix[ty][tx] == 'o') {
            count++;
        }
    }

    {
        int tx = x + 1;
        int ty = y;
        if(tx < matrix.size() && matrix[ty][tx] == 'o') {
            count++;
        }
    }

    {
        int tx = x;
        int ty = y - 1;
        if(ty >= 0 && matrix[ty][tx] == 'o') {
            count++;
        }
    }

    {
        int tx = x;
        int ty = y + 1;
        if(ty < matrix.size() && matrix[ty][tx] == 'o') {
            count++;
        }
    }
    return count;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;

    std::cin >> n;

    std::vector<std::vector<char>> matrix(n, std::vector<char>(n, ' '));
    for(int y = 0; y < n; y++) {
        for(int x = 0; x < n; x++) {
            std::cin >> matrix[y][x];
        }
    }

    bool error = false;
    for(int y = 0; y < n; y++) {
        for(int x = 0; x < n; x++) {
            int count = calc_count(matrix, x, y);
            if(count % 2 == 1) {
                error = true;
            }
        }
    }

    if(error) {
        std::cout << "NO" << std::endl;
    }
    else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}
