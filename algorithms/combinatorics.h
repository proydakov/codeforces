template<typename T>
T total_permutations(T n)
{
    T result(1);

    for(T i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}
