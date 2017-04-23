#include <string>
#include <iostream>
#include <unordered_map>

int main()
{
    int n;
    std::cin >> n;

    std::unordered_map<int, std::string> cache;

    cache[0] = "zero";
    cache[1] = "one";
    cache[2] = "two";
    cache[3] = "three";
    cache[4] = "four";
    cache[5] = "five";
    cache[6] = "six";
    cache[7] = "seven";
    cache[8] = "eight";
    cache[9] = "nine";
    cache[10] = "ten";
    cache[11] = "eleven";
    cache[12] = "twelve";
    cache[13] = "thirteen";
    cache[14] = "fourteen";
    cache[15] = "fifteen";
    cache[16] = "sixteen";
    cache[17] = "seventeen";
    cache[18] = "eighteen";
    cache[19] = "nineteen";
    cache[20] = "twenty";
    cache[30] = "thirty";
    cache[40] = "forty";
    cache[50] = "fifty";
    cache[60] = "sixty";
    cache[70] = "seventy";
    cache[80] = "eighty";
    cache[90] = "ninety";

    auto it = cache.find(n);
    if(it != cache.end()) {
        std::cout << it->second << std::endl;
    }
    else {
        int l = n % 10;
        int h = n - l;
        std::cout << cache[h] << '-' << cache[l] << std::endl;
    }

    return 0;
}
