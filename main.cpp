#include <iostream>
using namespace std;
// Creating Class and Objects within that Class, outlining the data types and that the information should be public
class Employee{
  public:
  string Name; 
  int YearJoined; 
  int Salary;
  string Address;
};
// Creating Main() function to store the Objects relating to the class, in this case the employees details incl. name, year joining, salary and address
int main(){
  Employee empl1;
  empl1.Name = "Robert";
  empl1.YearJoined = 2018;
  empl1.Salary = 25000;
  empl1.Address = "64C  London  Street";

  Employee empl2;
  empl2.Name = "Farah";
  empl2.YearJoined = 2015;
  empl2.Salary = 35000;
  empl2.Address = "68D  Bristol Road";

  Employee empl3;
  empl3.Name = "Satinder";
  empl3.YearJoined = 2019;
  empl3.Salary = 32500;
  empl3.Address = "26B  Salt Street";
// Printing header columns then the Objects of all employee details entered into the Class above. */ 
  cout<<"Name     Year Joined   Salary    Address"<<"\n";
  cout<<"-------------------------------------------"<<"\n";
  cout<<empl1.Name<<"     "<<empl1.YearJoined<<"        £"<< empl1.Salary<<"     "<<empl1.Address<<"\n";
  cout<<empl2.Name<<"      "<<empl2.YearJoined<<"        £"<< empl2.Salary<<"     "<<empl2.Address<<"\n";
  cout<<empl3.Name<<"   "<<empl3.YearJoined<<"        £"<< empl3.Salary<<"     "<<empl3.Address<<"\n";
  return 0;
}
