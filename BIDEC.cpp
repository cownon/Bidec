#include<bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
long long binaryToDecimal(long long binarynum)
{
    long long decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

int main()
{
    long long binarynum;
    cin >> binarynum;

    cout << binaryToDecimal(binarynum);
}
