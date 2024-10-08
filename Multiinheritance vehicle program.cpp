#include<iostream>
using namespace std;
//Base class vehicle
class Vehicle{
  public:
  void vehicle(){
  cout<<"I am a vehicle"<<endl;
}
};
//class Fourwheeler derived from vehicle
class Fourwheeler:public Vehicle{
  public:
  void fourwheeler(){
    cout<<"I have four wheels"<<endl;
  }
};
//class car derived from class Fourwheeler
class Car:public Fourwheeler{
  public:
  void car(){
    cout<<"I am a car"<<endl;
  }
};
int main(){
  Car myCar;
  myCar.car();
  myCar.fourwheeler();
  myCar.vehicle();
  return 0;
}