#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;
    n--;

    std::string buffer;
    buffer.reserve(1024);

    for(int val = 1; buffer.size() <= n; val++) {
        buffer.append(std::to_string(val));
    }

    std::cout << int(buffer[n] - '0') << std::endl;

    return 0;
}
