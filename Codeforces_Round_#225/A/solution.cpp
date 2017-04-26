#include <iostream>

void count_impl(int n)
{
    int count = 0;
    for(int y = 0; y < n; y++) {
        if(y % 2 == 0) {
            for(int x = 0; x < n; x++) {
                if(x % 2 == 0) {
                    count++;
                }
            }
        }
        else {
            for(int x = 0; x < n; x++) {
                if(x % 2 == 1) {
                    count++;
                }
            }
        }
    }
    std::cout << count << std::endl;
}

void print_impl(int n)
{
    for(int y = 0; y < n; y++) {
        if(y % 2 == 0) {
            for(int x = 0; x < n; x++) {
                if(x % 2 == 0) {
                    std::cout << 'C';
                }
                else {
                    std::cout << '.';
                }
            }
        }
        else {
            for(int x = 0; x < n; x++) {
                if(x % 2 == 1) {
                    std::cout << 'C';
                }
                else {
                    std::cout << '.';
                }
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    count_impl(n);
    print_impl(n);

    return 0;
}
