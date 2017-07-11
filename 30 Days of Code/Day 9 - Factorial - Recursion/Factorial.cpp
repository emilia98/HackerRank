#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact = 1;

void factorial(int n)
{
    if(n==0)
    {
        return;
    }
    factorial(n-1);
    fact *= n;
}

int main(void) {
    int n;
    cin>>n;
    
    factorial(n);
    cout<<fact<<endl;
    return 0;
}
