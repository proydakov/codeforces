#include <vector>
#include <iostream>
#include <algorithm>

int min_element(const std::vector<int>& vec)
{
    int min = 10;
    for(const auto item : vec) {
        if(item < min && item > 0) {
            min = item;
        }
    }
    return min;
}

std::vector<int> min_vec(const std::vector<int>& vec)
{
    std::vector<int> result(vec.size(), 0);
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] > 0) {
            result[i] = 1;
        }
    }
    return result;
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vec)
{
    bool out = false;
    for(const int item : vec) {
        if(item > 0) {
            out = true;
        }
        if(!out) {
            continue;
        }
        os << item;
    }
    return os;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> original;
    while(n) {
        const int temp = n % 10;
        n /= 10;
        original.push_back(temp);
    }

    std::reverse(original.begin(), original.end());
    std::vector< std::vector<int> > solution;

    int min = min_element(original);
    while(10 != min) {
        std::vector<int> vec = min_vec(original);
        for(int i = 0; i < min; i++) {
            solution.push_back(vec);
            for(int i = 0; i < original.size(); i++) {
                if(vec[i] > 0) {
                    original[i] = original[i] - 1;
                }
            }
        }
        min = min_element(original);
    }

    std::cout << solution.size() << std::endl;
    for(const auto vec : solution) {
        std::cout << vec << std::endl;
    }

    return 0;
}
