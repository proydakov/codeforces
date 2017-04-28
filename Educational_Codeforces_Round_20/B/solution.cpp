#include <limits>
#include <vector>
#include <iostream>

void back_mark(int index, const std::vector<int>& data, std::vector<int>& solution)
{
    solution[index] = 0;

    for(int i = index - 1, length = 1; i >= 0; i--, length++) {
        if(length < solution[i]) {
            solution[i] = length;
        }
        else {
            break;
        }
    }
}

void front_mark(int index, const std::vector<int>& data, std::vector<int>& solution)
{
    for(int i = index + 1, length = 1; i < data.size(); i++, length++) {
        if(0 == data[i]) {
            break;
        }
        if(length < solution[i]) {
            solution[i] = length;
        }
        else {
            break;
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::vector<int> solution(n, std::numeric_limits<int>::max());
    for(int i = 0; i < n; i++) {
        if(0 == data[i]) {
            back_mark(i, data, solution);
            front_mark(i, data, solution);
        }
    }

    for(int i = 0; i < n; i++) {
        std::cout << solution[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
