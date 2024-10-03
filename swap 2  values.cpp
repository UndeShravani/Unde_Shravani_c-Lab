#include<iostream>
using namespace std;
void swap(int &a, int &b){
  int temp=a;//Storet value of 'a' in a temporaryvariable
  a=b;
  b=temp;
}
int main(){
  int x,y;
  //Input two values from the user 
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
  //Display the values before swapping 
  cout<<"\n Before swapping :\n";
  cout<<"x="<<x<<",y="<<y<<endl;
  //Call the function
  swap(x,y);
  //Display the values after swapping 
  cout<<"\nAfter swapping :\n";
  cout<<"x="<<x<<",y"<<y<<endl;
  return 0;
}