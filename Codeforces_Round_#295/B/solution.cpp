#include <queue>
#include <stack>
#include <iostream>

struct solution_t
{
    int val;
    int iter;
};

int main()
{
    int n; int m;
    std::cin >> n;
    std::cin >> m;

    int i = 0;
    for(; n != m; i++) {
        if(m > n) {
            if(m % 2 == 0) {
                m /= 2;
            }
            else {
                m++;
            }
        }
        else {
            m++;
        }
    }
    std::cout << i << std::endl;

    return 0;
}
