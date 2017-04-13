#include <vector>
#include <iostream>

struct solution
{
    int val;

    int i;
    int j;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::vector<int> pre_cache(n + 1, 0);
    {
        int summ = 0;
        for(int i = 0; i < n; i++) {
            summ += data[i];
            pre_cache[i + 1] = summ;
        }
    }

    std::vector<int> post_cache(n + 1, 0);
    {
        int summ = 0;
        for(int i = n - 1; i >= 0; i--) {
            summ += data[i];
            post_cache[n - i] = summ;
        }
    }

    solution s{-1, 0, 0};

    for(int i = 0; i < n; i++) {
        int accamulator = 0;
        for(int j = i; j < n; j++) {
            const int pre = pre_cache[i];
            const int post = post_cache[n - j - 1];
            const int x = 1 - data[j];
            accamulator += x;
            const int val = pre + accamulator + post;

            if(val > s.val) {
                s.val = val;
                s.i = i;
                s.j = j;
            }
        }
    }

    std::cout << s.val << std::endl;

    return 0;
}
