g++ -c -o missing.o missing.cc 
g++ -c -o missing2.o missing2.cc 
g++ -o test test.cc missing.o missing2.o

for i in 10 100 1000 10000; do
        ./test $i 
        ./test $i "rec" 
done

