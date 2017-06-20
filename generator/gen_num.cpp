#include <ctime>
#include <string>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[])
{
    std::ios::sync_with_stdio(false);

    if(argc != 2) {
        std::cerr << argv[0] << " <count>" << std::endl;
        return 1;
    }

    std::srand(unsigned(std::time(0)));
    const int num = std::stoi(argv[1]);

    for(int i = 0; i < num; i++) {
        int random_variable = std::rand();
        std::cout << random_variable << std::endl;
    }

    return 0;
}
