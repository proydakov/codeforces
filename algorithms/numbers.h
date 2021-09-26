#include <numeric>

template< class T>
constexpr T noc(T m, T n)
{
    return m * n / std::gcd(m, n);
}

