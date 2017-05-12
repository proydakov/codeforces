#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string buffer;
    std::cin >> buffer;

    if('1' != buffer[0]) {
        goto no;
    }

    for(int i = 0; i < buffer.size();) {
        if("144" == buffer.substr(i, 3)) {
            i += 3;
        }
        else if("14" == buffer.substr(i, 2)) {
            i += 2;
        }
        else if('1' == buffer[i]) {
            i += 1;
        }
        else {
            goto no;
        }
    }

    std::cout << "YES" << std::endl;

    return 0;

no:
    std::cout << "NO" << std::endl;

    return 0;
}
