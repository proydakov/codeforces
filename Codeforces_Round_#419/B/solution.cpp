#include <cmath>
#include <vector>
#include <iostream>

void build_rsq(const std::vector<int>& origin, std::vector<int>& rsq, int v, int tl, int tr)
{
    if (tl == tr) {
        rsq[v] = origin[tl];
    }
    else {
        int tm = (tl + tr) / 2;
        build_rsq(origin, rsq, v * 2, tl, tm);
        build_rsq(origin, rsq, v * 2 + 1, tm + 1, tr);
        rsq[v] = rsq[v * 2] + rsq[v * 2 + 1];
    }
}

void build_rsq(const std::vector<int>& origin, std::vector<int>& rsq)
{
    build_rsq(origin, rsq, 1, 0, origin.size() - 1);
}

int sum_rsq(const std::vector<int>& rsq, int v, int tl, int tr, int l, int r)
{
    if (l > r) {
        return 0;
    }

    if (l == tl && r == tr) {
        return rsq[v];
    }

    int tm = (tl + tr) / 2;

    int s1 = sum_rsq(rsq, v * 2, tl, tm, l, std::min(r, tm));
    int s2 = sum_rsq(rsq, v * 2 + 1, tm + 1, tr, std::max(l, tm + 1), r);

    return s1 + s2;
}

int main()
{
    std::ios::sync_with_stdio();

    int n; int k; int q;

    std::cin >> n;
    std::cin >> k;
    std::cin >> q;

    std::vector<int> l_cache(200000, 0);
    std::vector<int> r_cache(200000, 0);

    for(int i = 0; i < n; i++) {
        int l; int r;
        std::cin >> l;
        std::cin >> r;

        --l;
        --r;

        l_cache[l]++;
        r_cache[r]++;
    }

    int items = 0;
    std::vector<int> cache(200000, 0);
    for(int i = 0; i < 200000; i++) {
        items += l_cache[i];

        if(items >= k) {
            cache[i] = 1;
        }

        items -= r_cache[i];
    }

    std::vector<int> rsq(200000 * 4, 0);
    build_rsq(cache, rsq);

    int osize = cache.size() - 1;
    for(int i = 0; i < q; i++) {
        int a; int b;
        std::cin >> a;
        std::cin >> b;

        --a;
        --b;

        int counter = sum_rsq(rsq, 1, 0, osize, a, b);
        std::cout << counter << std::endl;
    }

    return 0;
}
