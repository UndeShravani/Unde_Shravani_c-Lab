#include<iostream>
#include<string>
using namespace std;
class Student{
  public:
  string name;
  int rollnumber;
  int age;
  void displayInfo(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number:"<<rollnumber<<endl;
    cout<<"Age:"<<age<<endl;
  }
};
int main()
{
  Student s1;
  Student s2;
  s1.name="Shyam";
  s1.rollnumber=101;
  s1.age=20;
  s2.name="Shree";
  s2.rollnumber=101;
  s2.age=18;
  cout<<"s1 Information:"<<endl;
  s1.displayInfo();
  cout<<endl;
  cout<<"s2 Information:"<<endl;
  s2.displayInfo();
  return 0;
}
