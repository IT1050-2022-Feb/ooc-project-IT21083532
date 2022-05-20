#include"Medicalperson.h"
#include<cstring>
Medicalperson::Medicalperson()
{
      empId = 0;
      strcpy(firstName, "");
      strcpy(lastName, "");
      strcpy(Address, "");
      strcpy(pNo, "000000000");
}
Medicalperson::Medicalperson(int pempId, const char pfirstName[], const char
plastName[],
      const char pAddress[], const char pNo[])
{
      empId = pempId;
      strcpy(firstName, pfirstName);
      strcpy(lastName, plastName);
      strcpy(Address, pAddress);
      strcpy(pNo, pNo);
}
void Medicalperson::saveMedDetails()
{
}
Medicalperson::~Medicalperson()
{
//Destructor
}
