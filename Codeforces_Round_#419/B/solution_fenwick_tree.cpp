#include <cmath>
#include <bitset>
#include <vector>
#include <iostream>

template<class T>
void update_fenwick_tree(std::vector<T>& tree, int64_t i, T delta)
{
    for (; i < tree.size(); i = (i | (i + 1))) {
        tree[i] += delta;
    }
}

template<class T>
std::vector<T> init_fenwick_tree(const std::vector<T>& src_data)
{
    std::vector<T> tree(src_data.size(), 0);
    for (int64_t i = 0; i < src_data.size(); i++) {
        update_fenwick_tree(tree, i, src_data[i]);
    }
    return tree;
}

template<class T>
T sum_fenwick_tree(std::vector<T>& tree, int64_t r)
{
    T result(0);
    for (; r >= 0; r = (r & (r + 1)) - 1) {
        result += tree[r];
    }
    return result;
}

template<class T>
T sum_fenwick_tree(std::vector<T>& tree, int64_t l, int64_t r)
{
    return sum_fenwick_tree(tree, r) - sum_fenwick_tree(tree, l - 1);
}

enum { cache_max = 200000 };

int main()
{
    std::ios::sync_with_stdio();

    int64_t n; int64_t k; int64_t q;
    std::cin >> n;
    std::cin >> k;
    std::cin >> q;

    std::vector<int> l_cache(cache_max, 0);
    std::vector<int> r_cache(cache_max, 0);

    for(int64_t i = 0; i < n; i++) {
        int l; int r;
        std::cin >> l;
        std::cin >> r;

        --l;
        --r;

        l_cache[l]++;
        r_cache[r]++;
    }

    int accum = 0;
    std::vector<int> cache(cache_max, 0);
    for(int64_t i = 0; i < cache_max; i++) {
        accum += l_cache[i];

        if(accum >= k) {
            cache[i] = 1;
        }

        accum -= r_cache[i];
    }

    std::vector<int> fenwick_tree = init_fenwick_tree(cache);

    for(int64_t i = 0; i < q; i++) {
        int64_t a; int64_t b;
        std::cin >> a;
        std::cin >> b;

        --a;
        --b;

        std::cout << sum_fenwick_tree(fenwick_tree, a, b) << std::endl;
    }

    return 0;
}
