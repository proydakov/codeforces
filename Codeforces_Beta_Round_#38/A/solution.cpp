#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n - 1);
    for(int i = 0; i < data.size(); i++) {
        std::cin >> data[i];
    }

    int a; int b;

    std::cin >> a;
    std::cin >> b;

    int count = 0;
    for(int i = a - 1; i < b - 1; i++) {
        count += data[i];
    }
    std::cout << count << std::endl;

    return 0;
}
