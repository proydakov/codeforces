#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int h;
    std::cin >> h;

    char c;
    std::cin >> c;

    int m;
    std::cin >> m;

    int counter = 0;
    while(true) {
        std::string strh = std::to_string(h);
        std::string strm = std::to_string(m);

        if(strh.size() == 1) {
            strh = "0" + strh;
        }

        if(strm.size() == 1) {
            strm = "0" + strm;
        }

        std::reverse(strm.begin(), strm.end());
        if(strh == strm) {
            break;
        }

        m++;
        if(60 == m) {
            m = 0;
            h++;
        }

        if(24 == h) {
            h = 0;
        }

        counter++;
    }
    std::cout << counter << std::endl;

    return 0;
}
