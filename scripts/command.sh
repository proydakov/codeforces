alias ccode="clang++ -std=c++17 -m32 -O2 solution.cpp -o solution"

alias ccgen="clang++ -std=c++17 -O2 gen.cpp -o gen"

cround() {
    export ROUND="Codeforces_Round_#$1"
    if [ ! -d "$ROUND" ]; then
        mkdir $ROUND
    fi
    cd $ROUND
}

ctask() {
    export TASK="${1^^}"
    if [ ! -d "$TASK" ]; then
        mkdir $TASK
    fi
    cd $TASK
}

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

    export LEN=1
    if ! [ -z $1 ]; then
        export LEN=$1
    fi

    for (( i=1; i<=$LEN; i++ ))
    do
        touch input_$i.txt
    done;
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

    export LEN=1
    if ! [ -z $1 ]; then
        export LEN=$1
    fi

    for (( i=1; i<=$LEN; i++ ))
    do
        touch input_$i.txt
    done;
}
