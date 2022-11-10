#include <iostream>

using namespace std;
const int fib_0 = 0;
const int fib_1 = 1;



int fibFunction(int n)
{

    if (n <= 1 ) {
        return n;
    } else {
        return (fibFunction(n-1) + fibFunction(n-2));
    }
}

int main(int argc, char** argv)
{
    uint64_t num, ret;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> num;

    ret = fibFunction(num);

    cout << "Fibonati Number is: " << ret << endl;


    return 0;
}
