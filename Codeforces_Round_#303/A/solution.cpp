#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> solution(n, 1);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int temp;
            std::cin >> temp;
            if(j > i) {
                switch(temp) {
                    case 1:
                        solution[i] = 0;
                        break;

                    case 2:
                        solution[j] = 0;
                        break;

                    case 3:
                    {
                        solution[i] = 0;
                        solution[j] = 0;
                    }
                        break;
                }
            }
        }
    }

    int count = std::count_if(solution.begin(), solution.end(), [](int val){
        return val == 1;
    });
    std::cout << count << std::endl;

    if(count) {
        for(int i = 0; i < n; i++) {
            if(solution[i]) {
                std::cout << (i + 1) << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
