#include <cmath>
#include <vector>
#include <iostream>
#include <functional>

int main()
{
    std::ios::sync_with_stdio(false);

    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::vector<std::function<int(int, int, int)>> expressions;
    expressions.push_back([](int a, int b, int c){
        return a + b + c;
    });
    expressions.push_back([](int a, int b, int c){
        return a * b * c;
    });
    expressions.push_back([](int a, int b, int c){
        return a + b * c;
    });
    expressions.push_back([](int a, int b, int c){
        return a * b + c;
    });
    expressions.push_back([](int a, int b, int c){
        return (a + b) * c;
    });
    expressions.push_back([](int a, int b, int c){
        return a * (b + c);
    });

    int max = 0;
    for(int i = 0; i < expressions.size(); i++) {
        const int temp = expressions[i](a, b, c);
        if(temp > max) {
            max = temp;
        }
    }

    std::cout << max << std::endl;

    return 0;
}
