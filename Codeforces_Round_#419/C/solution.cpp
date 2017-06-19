#include <cmath>
#include <limits>
#include <vector>
#include <numeric>
#include <iostream>

typedef std::vector<std::vector<int>> matrix_t;

std::ostream& operator<<(std::ostream& os, const matrix_t& matrix)
{
    for(int hi = 0; hi < matrix.size(); hi++) {
        for(int wi = 0; wi < matrix[0].size(); wi++) {
            os << matrix[hi][wi] << ' ';
        }
        os << std::endl;
    }
    return os;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int h; int w;
    std::cin >> h;
    std::cin >> w;

    matrix_t matrix(h, std::vector<int>(w, 0));

    // load matrix
    for(int hi = 0; hi < h; hi++) {
        for(int wi = 0; wi < w; wi++) {
            std::cin >> matrix[hi][wi];
        }
    }

    // work w
    std::vector<int> min_w(w, 0);
    for(int wi = 0; wi < w; wi++) {
        int min = std::numeric_limits<int>::max();
        for(int hi = 0; hi < h; hi++) {
            min = std::min(min, matrix[hi][wi]);
        }
        min_w[wi] = min;
    }

    for(int hi = 0; hi < h; hi++) {
        for(int wi = 0; wi < w; wi++) {
            matrix[hi][wi] -= min_w[wi];
        }
    }

    // work h
    std::vector<int> min_h(h, 0);
    for(int hi = 0; hi < h; hi++) {
        int min = std::numeric_limits<int>::max();
        for(int wi = 0; wi < w; wi++) {
            min = std::min(min, matrix[hi][wi]);
        }
        min_h[hi] = min;
    }

    for(int hi = 0; hi < h; hi++) {
        for(int wi = 0; wi < w; wi++) {
            matrix[hi][wi] -= min_h[hi];
        }
    }

    // validate
    for(int wi = 0; wi < w; wi++) {
        for(int hi = 0; hi < h; hi++) {
            if(matrix[hi][wi] != 0) {
                std::cout << -1 << std::endl;
                return 0;
            }
        }
    }

    int summ = 0;
    summ = std::accumulate(min_h.begin(), min_h.end(), summ);
    summ = std::accumulate(min_w.begin(), min_w.end(), summ);

    std::cout << summ << std::endl;

    for(int hi = 0; hi < h; hi++) {
        for(int i = 0; i < min_h[hi]; i++) {
            std::cout << "row " << (hi + 1) << std::endl;
        }
    }

    for(int wi = 0; wi < w; wi++) {
        for(int i = 0; i < min_w[wi]; i++) {
            std::cout << "col " << (wi + 1) << std::endl;
        }
    }

    return 0;
}
