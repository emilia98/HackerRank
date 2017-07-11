#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    string s;
    cin>>t;
    
    for(int i=1;i<=t;i++)
    {
        string s_odd="";
        string s_even="";
        int size_of_s;
        
        cin>>s;
        size_of_s = s.size();
        
        for(int j=0;j<size_of_s;j++)
        {
            if(j%2==0)
            {
                s_even += s[j];
            }
            else
            {
                s_odd += s[j];
            }
        }
        cout<<s_even<<" "<<s_odd<<endl;
    }
    return 0;
}
