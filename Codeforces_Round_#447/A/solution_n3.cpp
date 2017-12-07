#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string buffer;
    std::getline(std::cin, buffer);

    size_t counter = 0;

    for(size_t i1 = 0; i1 < buffer.size(); i1++) {
        for(size_t i2 = i1 + 1; i2 < buffer.size(); i2++) {
            for(size_t i3 = i2 + 1; i3 < buffer.size(); i3++) {
                if('Q' == buffer[i1] && 'A' == buffer[i2] && 'Q' == buffer[i3]) {
                    counter++;
                }
            }
        }
    }

    std::cout << counter << std::endl;

    return 0;
}
