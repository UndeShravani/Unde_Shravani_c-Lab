#include <iostream>
using namespace std;
//Iterative funtion to calculate factorial
unsigned long long factorialIterative(int n){
  unsigned long long result = 1;//Start with 1 ,as factorial of 0 is 1 
  for (int i=1;i<n;++i){//loop from 1 to n 
  result*=i;   //multiply result by the loop index
}
return result; //return the computed factorial
}
//Recursive function to ca;culate  factorial
unsigned long long factorialRecursive(int n){
  if(n<=1){
    return 1;  //Base case factorial of 0 or 1 is 1 
  }
  else{
    return n*factorialRecursive(n-1);//Recursive case
  }
}
int main() 
{
  int number;
  //input
  cout<<"Enter a non-negative integer:";
  cin>>number;
  //Check if the input is valid 
  if(number<0){
    cout<<"factorial is not defined for negative numbers."<<endl;
    return 1;//Exit with erroe code
  }
  //Calculate factorial using iterative method
  unsigned long long iterativeResult=factorialIterative(number);
  cout<<"Iterative factorial of "<<number<<"is:"<<iterativeResult<<endl;
  //Calculate factorial using recursive method
  unsigned long long recursiveResult=factorialRecursive(number); 
  cout<<"Recursive factorial of "<<number<<"is:"<<recursiveResult<<endl;
  
    return 0;
}