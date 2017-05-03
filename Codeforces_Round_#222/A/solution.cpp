#include <array>
#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b;
    std::cin >> a;
    std::cin >> b;

    std::array<int, 3> scores;
    scores.fill(0);

    for(int i = 1; i <= 6; i++) {
        int score_a = std::abs(a - i);
        int score_b = std::abs(b - i);
        if(score_a < score_b) {
            scores[0]++;
        }
        else if(score_b < score_a) {
            scores[2]++;
        }
        else {
            scores[1]++;
        }
    }
    for(const int item : scores) {
        std::cout << item << ' ';
    }
    std::cout << std::endl;

    return 0;
}
