#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int c1 = 0;
    int c2 = 0;

    for(int i = 0; i < n; i++) {
        int t1; int t2;

        std::cin >> t1;
        std::cin >> t2;

        if(t1 > t2) {
            c1++;
        }
        else if(t2 > t1) {
            c2++;
        }
    }

    if(c1 > c2) {
        std::cout << "Mishka" << std::endl;
    }
    else if(c2 > c1) {
        std::cout << "Chris" << std::endl;
    }
    else {
        std::cout << "Friendship is magic!^^" << std::endl;
    }

    return 0;
}
