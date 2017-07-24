#include <cmath>
#include <stack>
#include <vector>
#include <iostream>
#include <unordered_map>

// point_t

struct point_t
{
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& os, const point_t point)
{
    os << "[" << point.x << ", " << point.y << "]";
    return os;
}

// matrix_t

typedef std::vector<std::vector<char>> matrix_t;

std::ostream& operator<<(std::ostream& os,const matrix_t& matrix)
{
    for(int y = 0; y < 9; y++) {
        for(int x = 0; x < 8; x++) {
            os << matrix[y][x];
        }
        os << std::endl;
    }
    return os;
}

// cache_t

typedef std::unordered_map<int, matrix_t> cache_t;

// code

std::vector<point_t> get_neighbors(const cache_t& cache, point_t hero_point, int iter)
{
    std::vector<point_t> neighbors;
    neighbors.reserve(9);

    const int min_x = std::max(0, hero_point.x - 1);
    const int max_x = std::min(7, hero_point.x + 1);

    const int min_y = std::max(0, hero_point.y - 1);
    const int max_y = std::min(7, hero_point.y + 1);

    for(int y = min_y; y <= max_y; y++) {
        for(int x = min_x; x <= max_x; x++) {
            if('S' == cache.at(iter)[y][x] || 'S' == cache.at(iter + 1)[y][x]) {
                continue;
            }
            neighbors.push_back(point_t{x, y});
        }
    }

    return neighbors;
}

bool search(const cache_t& cache, point_t hero_point)
{
    std::stack< std::pair<int, point_t> > stack;
    stack.push(std::make_pair(0, hero_point));

    while(!stack.empty()) {
        auto stack_item = stack.top();

        if(stack_item.first == 7) {
            break;
        }

        stack.pop();

        const int curr_iter = stack_item.first;
        const int next_iter = stack_item.first + 1;

        std::vector<point_t> neighbors = get_neighbors(cache, stack_item.second, curr_iter);
        for(const auto item : neighbors) {
            stack.push(std::make_pair(next_iter, item));
        }
    }

    return !stack.empty();
}

void simulate(matrix_t& matrix)
{
    for(int y = 7; y >= 0; y--) {
        for(int x = 0; x < 8; x++) {
            if('S' == matrix[y][x]) {
                matrix[y][x] = '.';
                matrix[y + 1][x] = 'S';
            }
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    matrix_t matrix(9, std::vector<char>(8, '.'));
    for(int y = 0; y < 8; y++) {
        for(int x = 0; x < 8; x++) {
            char c;
            std::cin >> c;
            matrix[y][x] = c;
        }
    }

    cache_t cache;
    matrix_t copy(matrix);
    for(int i = 0; i < 10; i++) {
        cache[i] = copy;
        simulate(copy);
    }

    point_t hero_point{0, 7};

    const bool result = search(cache, hero_point);
    if(result) {
        std::cout << "WIN" << std::endl;
    }
    else {
        std::cout << "LOSE" << std::endl;
    }

    return 0;
}
