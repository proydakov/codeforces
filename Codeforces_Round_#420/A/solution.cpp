#include <vector>
#include <iostream>

bool is_ok(const std::vector<std::vector<int>>& matrix, int xx, int yy)
{
    int item = matrix[yy][xx];

    std::vector<int> h_line(matrix[yy]);

    std::vector<int> v_line;
    for(int y = 0; y < matrix.size(); y++) {
        v_line.push_back(matrix[y][xx]);
    }

    for(const int item1 : h_line) {
        for(const int item2 : v_line) {
            if(item1 + item2 == item) {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    for(int y = 0; y < n; y++) {
        for(int x = 0; x < n; x++) {
            std::cin >> matrix[y][x];
        }
    }

    for(int y = 0; y < n; y++) {
        for(int x = 0; x < n; x++) {
            if( 1 == matrix[y][x] ) {
                continue;
            }

            if(!is_ok(matrix, x, y)) {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "Yes" << std::endl;

    return 0;
}
