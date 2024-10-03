#include<iostream>
using namespace std;
int add(int a, int b){
  return a+b;
}
double add(double a, double b){
  return a+b;
}
int main(){
  int intResult=add(10,20);
  cout<<"Sum of integers 10 and 20:"<<intResult<<endl;
  double doubleResult=add(5.5,7.8);
  cout<<"Sum of doubles 5.5 and 7.8:"<<doubleResult<<endl;
  return 0;
}

  