#include <array>
#include <iostream>

std::array<int, 256> fill_white()
{
    std::array<int, 256> data;
    data.fill(0);

    data['Q'] = 9;
    data['R'] = 5;
    data['B'] = 3;
    data['N'] = 3;
    data['P'] = 1;
    data['K'] = 0;

    return data;
}

std::array<int, 256> fill_black()
{
    std::array<int, 256> data;
    data.fill(0);

    data['q'] = 9;
    data['r'] = 5;
    data['b'] = 3;
    data['n'] = 3;
    data['p'] = 1;
    data['k'] = 0;

    return data;
}

int main()
{
    std::ios::sync_with_stdio(false);

    const std::array<int, 256> white_table = fill_white();
    const std::array<int, 256> black_table = fill_black();

    int white = 0;
    int black = 0;

    for(int h = 0; h < 8; h++) {
        for(int w = 0; w < 8; w++) {
            char c;
            std::cin >> c;

            white += white_table[c];
            black += black_table[c];
        }
    }

    if(white > black) {
        std::cout << "White" << std::endl;
    }
    else if(white < black) {
        std::cout << "Black" << std::endl;
    }
    else {
        std::cout << "Draw" << std::endl;
    }

    return 0;
}
