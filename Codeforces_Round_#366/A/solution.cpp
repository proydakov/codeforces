#include <sstream>
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::stringstream sstream;

    for(int i = 0; i < n; i++) {
        if(i != 0) {
            sstream << "that ";
        }
        if(i % 2 == 0) {
            sstream << "I hate ";
        }
        else {
            sstream << "I love ";
        }
    }
    sstream << "it";

    std::cout << sstream.str() << std::endl;

    return 0;
}
