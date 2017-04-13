#include <stack>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<std::stack<int>> cache(4);

    for(int i = 1; i <= n; i++) {
        int team;
        std::cin >> team;
        cache[team].push(i);
    }

    int s1 = cache[1].size();
    int s2 = cache[2].size();
    int s3 = cache[3].size();

    int min = std::min( std::min(s1, s2), s3 );

    std::cout << min << std::endl;
    if(min > 0) {
        for(int i = 0; i < min; i++) {
            for(int j = 1; j <= 3; j++) {
                int item = cache[j].top();
                cache[j].pop();
                std::cout << item << ' ';
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
