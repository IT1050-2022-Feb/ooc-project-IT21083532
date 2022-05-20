#include"User.h"
#include<cstring>
User::User()
{
      userId = 0;
      strcpy(firstName, "");
      strcpy(lastName, "");
      strcpy(Address, "");
      strcpy(pNo, "");
      strcpy(bloodType, "");
      quantity = 0;
}
User::User(int puserId, const char pfirstName[], const char plastName[],
const
      char pAddress[], const char ppNo[], const char pbloodType[], int
pquantity)
{
      userId = puserId;
      strcpy(firstName, pfirstName);
      strcpy(lastName, plastName);
      strcpy(Address, pAddress);
      strcpy(pNo, ppNo);
      strcpy(bloodType, pbloodType);
      quantity = pquantity;
}
void User::displayUserDetails()
{
}
User ::~User()
{
}
