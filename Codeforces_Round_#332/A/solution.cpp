#include <cmath>
#include <limits>
#include <vector>
#include <iostream>
#include <functional>

int main()
{
    std::ios::sync_with_stdio(false);

    int d1;
    int d2;
    int d3;

    std::cin >> d1;
    std::cin >> d2;
    std::cin >> d3;

    std::vector<std::function<int (int, int, int)>> paths;

    paths.push_back([](int d1, int d2, int d3){
        return d1 + d2 + d3;
    });
    paths.push_back([](int d1, int d2, int d3){
        return d1 + d1 + d2 + d2;
    });
    paths.push_back([](int d1, int d2, int d3){
        return d1 + d3 + d3 + d1;
    });
    paths.push_back([](int d1, int d2, int d3){
        return d2 + d3 + d3 + d2;
    });

    int min = std::numeric_limits<int>::max();

    for(size_t i = 0; i < paths.size(); i++) {
        const int temp = paths[i](d1, d2, d3);
        if(temp < min) {
            min = temp;
        }
    }

    std::cout << min << std::endl;

    return 0;
}
