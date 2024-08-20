#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter a number:";
  cin>>a;
/*logic*/
  if(a%2==0){
    cout<<"The number is EVEN"<<endl;
  }else{
    cout<<"The number is ODD"<<endl;
  }
  return 0;
}