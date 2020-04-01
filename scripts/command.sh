alias ccode="clang++ -std=c++17 -m32 -O2 solution.cpp -o solution"

alias ccgen="clang++ -std=c++17 -O2 gen.cpp -o gen"

cinit() {
    export SOLUTION=solution.cpp

    echo "#include <cstdint>"                     > $SOLUTION
    echo "#include <iostream>"                   >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo "int main()"                            >> $SOLUTION
    echo "{"                                     >> $SOLUTION
    echo "    std::ios::sync_with_stdio(false);" >> $SOLUTION
    echo "    std::cin.tie(nullptr);"            >> $SOLUTION
    echo "    std::cout.tie(nullptr);"           >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo "    return 0;"                         >> $SOLUTION
    echo "}"                                     >> $SOLUTION

    if ! [ -z $1 ]; then
        for (( i=1; i<=$1; i++ ))
	do
            touch input_$i.txt
	done;
    fi
}

cinit2() {
    export SOLUTION=solution.cpp

    echo "#include <cstdint>"                     > $SOLUTION
    echo "#include <iostream>"                   >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo "void solve()"                          >> $SOLUTION
    echo "{"                                     >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo "}"                                     >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo "int main()"                            >> $SOLUTION
    echo "{"                                     >> $SOLUTION
    echo "    std::ios::sync_with_stdio(false);" >> $SOLUTION
    echo "    std::cin.tie(nullptr);"            >> $SOLUTION
    echo "    std::cout.tie(nullptr);"           >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo "    int t;"                            >> $SOLUTION
    echo "    std::cin >> t;"                    >> $SOLUTION
    echo "    for(int i = 0; i < t; i++)"        >> $SOLUTION
    echo "    {"                                 >> $SOLUTION
    echo "        solve();"                      >> $SOLUTION
    echo "    }"                                 >> $SOLUTION
    echo ""                                      >> $SOLUTION
    echo "    return 0;"                         >> $SOLUTION
    echo "}"                                     >> $SOLUTION

    if ! [ -z $1 ]; then
        for (( i=1; i<=$1; i++ ))
    do
            touch input_$i.txt
    done;
    fi
}
