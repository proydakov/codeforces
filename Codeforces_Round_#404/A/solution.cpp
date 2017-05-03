#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++) {
        std::string temp;
        std::cin >> temp;
        switch(temp[0]) {
            case 'T':
                count += 4;
                break;

            case 'C':
                count += 6;
                break;

            case 'O':
                count += 8;
                break;

            case 'D':
                count += 12;
                break;

            case 'I':
                count += 20;
                break;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
