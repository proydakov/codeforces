#include <stack>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::stack<char> stack;

    for(int i = 0; i < n; i++) {
        char c;
        std::cin >> c;
        if(stack.empty()) {
            stack.push(c);
        }
        else {
            if(stack.top() != c) {
                stack.push(c);
            }
        }
    }

    std::cout << n - stack.size() << std::endl;

    return 0;
}
