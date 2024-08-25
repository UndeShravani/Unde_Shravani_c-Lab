#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a number:";
  cin>>num;
  if(num>=10&&num<=20){
    cout<<"The number"<< num <<"is in between 10 and 20./n";
  }else{
    cout<<"The number"<< num <<"is not in between 10 and 20./n";
  }
  return 0;
}