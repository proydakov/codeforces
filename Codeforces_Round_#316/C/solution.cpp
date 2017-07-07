#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int q;
    std::cin >> n;
    std::cin >> q;

    std::vector<char> data(n + 2, '0');
    for(int i = 1; i <= n; i++) {
        std::cin >> data[i];
    }

    int c = 0;
    int l = 0;

    bool line_flag = false;
    for(int i = 0; i < data.size(); i++) {
        if('.' == data[i]) {
            l++;
            line_flag = true;
        }
        else {
            if(line_flag) {
                c++;
            }
            line_flag = false;
        }
    }

    for(int i = 0; i < q; i++) {
        int index; char val;
        std::cin >> index;
        std::cin >> val;

        switch(val) {
            case '.':
            {
                if( '.' != data[index]) {
                    if('.' != data[index - 1] && '.' != data[index + 1]) {
                        c++;
                        l++;
                    }
                    else if('.' == data[index - 1] && '.' == data[index + 1]) {
                        c--;
                        l++;
                    }
                    else {
                        l++;
                    }
                    data[index] = '.';
                }
            }
                break;

            default:
            {
                if( '.' == data[index] ) {
                    if('.' != data[index - 1] && '.' != data[index + 1]) {
                        // noop
                    }
                    else if('.' == data[index - 1] && '.' == data[index + 1]) {
                        c++;
                        l--;
                    }
                    else {
                        l--;
                    }
                    data[index] = val;
                }
            }
                break;
        }

        std::cout << l - c << std::endl;
    }

    return 0;
}
