#include <stack>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    uint64_t val;
    std::cin >> val;

    std::stack<int> stack;

    while(val) {
        const int temp = val % 10;
        val /= 10;
        stack.push(temp);
    }

    int top = stack.top();
    stack.pop();

    if(top != 9 && top > 4) {
        top = 9 - top;
    }
    std::cout << top;

    while(!stack.empty()) {
        int temp = stack.top();
        stack.pop();
        if(temp > 4) {
            temp = 9 - temp;
        }
        std::cout << temp;
    }
    std::cout << std::endl;

    return 0;
}
