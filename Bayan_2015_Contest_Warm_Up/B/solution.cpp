#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int w; int h;
    std::cin >> w;
    std::cin >> h;

    std::string horz;
    std::string vert;
    std::cin >> horz;
    std::cin >> vert;

    if(horz.front() == '<' && horz.back() == '>' && vert.front() == 'v' && vert.back() == '^') {
        std::cout << "YES" << std::endl;
        return 0;
    }

    if(horz.front() == '>' && horz.back() == '<' && vert.front() == '^' && vert.back() == 'v') {
        std::cout << "YES" << std::endl;
        return 0;
    }

    std::cout << "NO" << std::endl;

    return 0;
}
