#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,string> phonebook;
    
    for(int i = 1; i <=n; i++)
    {
       string name, number;
       cin>>name;
       cin>>number;
       
       //if(phonebook.find(name) == phonebook.end())
      // {
           //not found
           phonebook[name] = number;
       //}
    }
    int queries = n;
    
    for(int i = 1; i <= queries; i++)
    {
       string nameToFind;
       cin>>nameToFind;
       
        if((phonebook.find(nameToFind) == phonebook.end()))
        {
            cout<<"Not found"<<endl;
        }
        else
        {
            cout<<nameToFind<<"="<<phonebook[nameToFind]<<endl;
        }
    }
    return 0;
}
