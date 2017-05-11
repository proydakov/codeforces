#include <queue>
#include <vector>
#include <iostream>

struct point_t
{
    int x;
    int y;

    int val;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    const int size = n * 2 + 1;
    std::vector<std::vector<char>> matrix(size, std::vector<char>(size, ' '));

    std::queue<point_t> queue;
    queue.push(point_t{n, n, n});

    while(!queue.empty()) {
        auto point = queue.front();
        queue.pop();

        if(' ' == matrix[point.y][point.x]) {
            matrix[point.y][point.x] = std::to_string(point.val)[0];
        }
        if(point.val > 0) {
            queue.push(point_t{point.x + 1, point.y, point.val - 1});
            queue.push(point_t{point.x - 1, point.y, point.val - 1});
            queue.push(point_t{point.x, point.y + 1, point.val - 1});
            queue.push(point_t{point.x, point.y - 1, point.val - 1});
        }
    }

    for(int y = 0; y < size; y++) {
        bool has = false;
        std::cout << matrix[y][0];

        for(int x = 1; x < size; x++) {
            if('0' == matrix[y][x]) {
                has = true;
            }
            if(' ' == matrix[y][x] && has) {
                goto done;
            }
            std::cout << ' ' << matrix[y][x];
        }
done:
        std::cout << std::endl;
    }

    return 0;
}
