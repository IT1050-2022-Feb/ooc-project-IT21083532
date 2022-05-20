#include<iostream>
using namespace std;
class Donator
{
protected:
  int donarId;
  char firstName[20];
  char lastName[20];
  char Address[30];
  char pNo[10];
  char bloodType[3];
public:
  Donator();
  Donator(int pdonarId, const char pfirstName[], const char plastName[],
  const char pAddress[], const char ppNo[], const char pbloodType[]);
  void displayDetails();
  ~Donator();
};
