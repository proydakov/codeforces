#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        std::cin >> data[i];
    }

    std::vector<int> solution(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        solution[ data[i] ] = i;
    }

    for(int i = 1; i <= n; i++) {
        std::cout << solution[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
