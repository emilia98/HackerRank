#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    int i,j;
    int hourglassSum = 0;
    int maxSum = 0;
    for(i = 0;i< 6;i++){
       for(j = 0;j < 6;j++){
          cin >> arr[i][j];
       }
    }
    
    /*for(i = 1;i< 5;i++){
       for(j = 1;j < 5;j++){
          cout<<arr[i-1][j-1]<<" "<<arr[i-1][j]<<" "<<arr[i-1][j+1]<<endl;
          cout<<"  "<<arr[i][j]<<" "<<endl;
          cout<<arr[i+1][j-1]<<" "<<arr[i+1][j]<<" "<<arr[i+1][j+1]<<endl;
          cout<<endl;
       }
    }*/
    maxSum = arr[0][0] + arr[0][1]+ arr[0][2]
                + arr[1][1] +  arr[2][0]+ arr[2][1]
                + arr[2][2];
    for(i = 1;i< 5;i++){
       for(j = 1;j < 5;j++){
          hourglassSum = arr[i-1][j-1] + arr[i-1][j]+ arr[i-1][j+1]
                + arr[i][j] +  arr[i+1][j-1]+ arr[i+1][j]
                + arr[i+1][j+1];
          
          if(hourglassSum > maxSum)
          {
              maxSum = hourglassSum;
          }
       }
    }
    cout<<maxSum<<endl;
    return 0;
}
