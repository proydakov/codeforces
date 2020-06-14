#include <iostream>

int main()
{
    long array[64] = { };
    array[1] = 1;
    array[2] = 1;
    for(int i = 3; i < 41; i++)
    {
        array[i] = array[i - 2] + array[i - 1];
    }

    std::cout << "long g_sum[] = {";
    long acc = 0;
    constexpr int gsize = 41;
    for(int i = 1; i < gsize; i++)
    {
        acc += array[i];
        std::cout << acc;
        if (i != gsize - 1)
            std::cout << ", ";
    }
    std::cout << "};\n";

    return 0;
}
