#include <vector>
#include <iomanip>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<std::vector<int>> table(n, std::vector<int>(n, 0));
    for(int i = 0; i < n; i++) {
        table[0][i] = 1;
        table[i][0] = 1;
    }

    for(int h = 1; h < n; h++) {
        for(int w = 1; w < n; w++) {
            table[h][w] = table[h - 1][w] + table[h][w - 1];
            table[w][h] = table[w - 1][h] + table[w][h - 1];
        }
    }

/*
    for(int h = 0; h < n; h++) {
        for(int w = 0; w < n; w++) {
            std::cout << std::setw(5) << table[h][w] << " ";
        }
        std::cout << std::endl;
    }
*/

    n--;

    std::cout << table[n][n] << std::endl;

    return 0;
}
