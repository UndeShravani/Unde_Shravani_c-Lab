#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector <int> numbers={12,7,9,4,20};
  int sum=0,evenCount=0,oddCount=0;
  for(int num:numbers){
    sum+=num;
    if(num%2==0){
      ++evenCount;
    }else{
      ++oddCount;
    }
  }
  double average=static_cast<double>(sum)/numbers.size();
  cout<<"list of numbers : ";
  for(int num:numbers){
    cout<<num<<"";
  }
  cout<<"\n\nAnalysis Results:"<<endl;
  cout<<"Sum:"<<sum<<endl;
  cout<<"Average"<<average<<endl;
  cout<<"Count of Even numbers : "<<evenCount<<endl;
  cout<<"Count of Odd numbers :"<<oddCount<<endl;
  return 0;
  
}
