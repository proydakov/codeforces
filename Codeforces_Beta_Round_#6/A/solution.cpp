#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::vector<int> lines(4, 0);
    for(int i = 0; i < 4; i++) {
        std::cin >> lines[i];
    }
    std::sort(lines.begin(), lines.end());

    std::string result("IMPOSSIBLE");
    for(int i = 1; i < 3; i++) {
        const int test = lines[i + 1];
        const int summ = lines[i - 1] + lines[i];

        if( summ > test ) {
            result = "TRIANGLE";
            break;
        }
        else if( summ == test ) {
            result = "SEGMENT";
        }
    }
    std::cout << result << std::endl;

    return 0;
}
