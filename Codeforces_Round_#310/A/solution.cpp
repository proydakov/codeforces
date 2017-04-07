#include <stack>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::stack<int> stack;

    int size;
    std::cin >> size;

    for(int i = 0; i < size; i++) {
        char c;
        std::cin >> c;
        const int val = c - '0';

        if(stack.empty()) {
            stack.push(val);
        }
        else {
            if(stack.top() != val) {
                stack.pop();
            }
            else {
                stack.push(val);
            }
        }
    }

    std::cout << stack.size() << std::endl;

    return 0;
}
