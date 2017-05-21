#include <iostream>

int round(double val)
{
    val += 0.5;
    return int(val);
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    double acc = 0;
    for(int i = 0; i < n; i++) {
        double temp;
        std::cin >> temp;
        acc += temp;
    }

    int counter = 0;
    while(true) {
        int test_k = round(acc / (n + counter));
        if(test_k >= k) {
            break;
        }
        acc += k;
        counter++;
    }
    std::cout << counter << std::endl;

    return 0;
}
