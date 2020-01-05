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
