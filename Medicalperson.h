#include<iostream>
using namespace std;
class Medicalperson
{
protected:
       int empId;
       char firstName [20];
       char lastName[20];
       char Address [30];
       char pNo [10];
public:
       Medicalperson();
       Medicalperson(int pempId, const char pfirstName[], const char plastName[],
const char pAddress[], const char ppNo[]);
      void saveMedDetails();
      ~Medicalperson();
};
