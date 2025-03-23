#include <bits/stdc++.h>
using namespace std;
int getSum(int a, int b)
{
    int c = 1;
    while (c)
    {
        c = a & b;
        a = a ^ b;
        b = (c) << 1;
    }
    return a;
}
int main()
{
    cout << getSum(2, 3) << endl;
}