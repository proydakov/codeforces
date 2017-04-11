#include <stack>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int head;
    std::cin >> head;

    std::stack<int> stack;
    stack.push(head);

    int land = 1;
    for(int i = 1; i < n; i++) {
        int temp;
        std::cin >> temp;
        if(stack.top() != temp) {
            land++;
        }
        stack.push(temp);
    }
    std::cout << land << std::endl;

    return 0;
}
