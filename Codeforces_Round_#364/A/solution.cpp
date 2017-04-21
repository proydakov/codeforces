#include <vector>
#include <iostream>

struct item
{
    int value;
    int index;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<item> vec(n);
    for(int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        vec[i].index = i + 1;
        vec[i].value = val;
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        count += vec[i].value;
    }

    const int median = (count * 2 / vec.size());
    while(!vec.empty()) {
        const size_t size = vec.size();

        int front_value = vec.front().value;

        int i = 1;
        for(; i < size; i++) {
            if(front_value + vec[i].value == median) {
                std::cout << vec.front().index << ' ' << vec[i].index << std::endl;
                break;
            }
        }

        vec.erase(vec.begin() + i);
        vec.erase(vec.begin());
    }

    return 0;
}
