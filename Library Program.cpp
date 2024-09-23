#include <iostream>
using namespace std;
int main() 
{
    string booktitle="Bal Ramayan";
    string author="Rajsekara";
    int yearofpublication=2006;
    double price=499.99;
    bool isAvailable=true;
    //Display result
    cout<<"Book Title : "<<booktitle<<endl;
    cout<<"Author : "<<author<<endl;
    cout<<"Year of Publication : "<<yearofpublication<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"Availability : "<<(isAvailable?"Yes":"No")<<endl;
    return 0;
}