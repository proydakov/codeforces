#include <cmath>
#include <vector>
#include <numeric>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int s; int t;
    std::cin >> s;
    std::cin >> t;

    --s; --t;

    if(s > t) {
        std::swap(s, t);
    }

    int sum1 = 0;
    for(int i = s; i < t; i++) {
        sum1 += data[i];
    }

    int sum2 = std::accumulate(data.begin(), data.end(), 0) - sum1;
    int solution = std::min(sum1, sum2);

    std::cout << solution << std::endl;

    return 0;
}
