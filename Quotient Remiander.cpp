#include <iostream>
using namespace std;

int main() 
{
    int divisor,dividend,quotient,remiander;
    cout<<"Enter dividend:";
    cin>>dividend;
    cout<<"Enter divisor:";
    cin>>divisor;
    quotient=dividend/divisor;
    remiander=dividend%divisor;
    cout<<"Quotient="<<quotient<<endl;
    cout<<"Remainder="<<remiander<<endl;
    return 0;
}