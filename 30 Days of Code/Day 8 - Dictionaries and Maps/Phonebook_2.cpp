#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> phonebook;
    
    for(int i = 1; i <= n; i++)
    {
       string name;
       int number;
       cin>>name;
       cin>>number;
       phonebook[name] = number;
    }
    string nameToFind;
    while(cin>>nameToFind)
    {
        if(phonebook.find(nameToFind) == phonebook.end())
        {
            cout<<"Not found"<<endl;
        }
        else
        {
            cout<<nameToFind<<"="<<phonebook[nameToFind]<<endl;
            //cout<<nameToFind<<"="<<phonebook.find(nameToFind)->second<<endl;
        }
    }    
    return 0;
}
