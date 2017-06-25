#include <set>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::vector<size_t> stack;
    stack.reserve(400000);

    std::set<size_t> set;

    size_t n;
    std::cin >> n;
    n *= 2;

    size_t penalty = 0;

    size_t removed = 1;

    std::string command;
    for(size_t i = 0; i < n; i++) {
        std::cin >> command;
        switch(command[0]) {
            case 'a':
            {
                size_t val;
                std::cin >> val;

                stack.push_back(val);
                set.insert(val);
            }
                break;

            case 'r':
            {
                if(stack.back() == removed) {
                    stack.resize(stack.size() - 1);
                    set.erase(removed);
                }
                else {
                    stack.resize(0);
                    for(auto it = set.rbegin(), end_it = set.rend(); it != end_it; ++it) {
                        stack.push_back(*it);
                    }
                    penalty++;
                    stack.resize(stack.size() - 1);
                    set.erase(removed);
                }

                removed++;
            }
                break;
        }
    }

    std::cout << penalty << std::endl;

    return 0;
}
