#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealCost;
    int tipPercent,taxPercent;
    double totalCost=0;
    
    cin>>mealCost;
    cin>>tipPercent;
    cin>>taxPercent;
    
    totalCost = mealCost + mealCost*(tipPercent*1.0/100) +
                mealCost * (taxPercent*1.0/100);
    totalCost = round(totalCost);
    
    cout<<"The total meal cost is "<<totalCost<<" dollars."<<endl;
    
    return 0;
}
