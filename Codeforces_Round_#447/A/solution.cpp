#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string buffer;
    std::getline(std::cin, buffer);

    std::vector<int> prefix(buffer.size(), 0);
    {
        if('Q' == buffer.front()) {
            prefix.front()++;
        }
        for(int i = 1; i < buffer.size(); i++) {
            prefix[i] = prefix[i - 1];
            if('Q' == buffer[i]) {
                prefix[i]++;
            }
        }
    }

    std::vector<int> postfix(buffer.size(), 0);
    {
        if('Q' == buffer.back()) {
            postfix.back()++;
        }
        for(int i = buffer.size() - 2; i >= 0; i--) {
            postfix[i] = postfix[i + 1];
            if('Q' == buffer[i]) {
                postfix[i]++;
            }
        }
    }

    size_t counter = 0;

    for(int i = 1; i < buffer.size() - 1; i++) {
        if('A' == buffer[i]) {
            counter += prefix[i - 1] * postfix[i + 1];
        }
    }

    std::cout << counter << std::endl;

    return 0;
}
