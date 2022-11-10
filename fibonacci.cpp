#include <iostream>

using namespace std;


int fibFunction(uint64_t previousNum, uint64_t fibNum, int n)
{
    uint64_t ret;
    uint64_t nextNum;
    cout << "F: " << " = " << previousNum << endl;

    if (n <= 1 ) {
        return previousNum;
    } else {
        ret = fibFunction(fibNum, previousNum + fibNum, n -1);
    }

    return ret;
}

int main(int argc, char** argv)
{
    uint64_t num, ret;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> num;

    ret = fibFunction(0, 1, num);

    cout << "Fibonati Number is: " << ret << endl;


    return 0;
}
