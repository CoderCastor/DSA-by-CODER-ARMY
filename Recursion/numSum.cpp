#include <iostream>
using namespace std;

void printOnetoN(int N){

    // base case
    if (N == 1)
    {
        cout << 1 << endl;
        return;
    }

    printOnetoN(N - 1);
    cout << N << endl;
}

void printOneToN(int num, int N)
{

    if (num == N)
        return;

    cout << num << endl;

    printOneToN(num + 1, N);
}

void printOnlyEven(int num, int N)
{

    if (num == 1)
        num = 2;

    // base case
    if (num > N)
        return;

    cout << num << " ";
    printOnlyEven(num + 2, N);
}

int findFactorial (int N){
    //base case
    if(N <= 1) return 1;
    return N*findFactorial(N-1);
}

int powerOfNumber(int num,int pow){
    //base case 
    if(pow == 1) return num;
    return num*powerOfNumber(num,pow-1);
}



int main()
{

    // printOnetoN(5);

    // printOneToN(1, 5);

    // printOnlyEven(1, 100);

    // int ans = findFactorial(5);

    // int ans = powerOfNumber(5,3);

    int ans = sumOfNNumbers(1,5);

    cout<<ans;

    return 0;
}