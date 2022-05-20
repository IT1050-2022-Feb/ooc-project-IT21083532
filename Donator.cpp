#include"Donator.h"
#include<cstring>
Donator::Donator()
{
    donarId = 0;
    strcpy(firstName, "");
    strcpy(lastName, "");
    strcpy(Address, "");
    strcpy(pNo, "000000000");
    strcpy(bloodType, "");
}
Donator::Donator(int pdonarId, const char pfirstName[], const char
plastName[], const char pAddress[], const char phNo[], const char
pbloodType[])
{
    donarId = pdonarId;
    strcpy(firstName, pfirstName);
    strcpy(lastName, plastName);
    strcpy(Address, pAddress);
    strcpy(pNo, phNo);
    strcpy(bloodType, pbloodType);
}
void Donator::displayDetails()
{
}
Donator::~Donator()
{
//Destructor
}
