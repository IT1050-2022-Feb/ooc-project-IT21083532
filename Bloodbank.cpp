#include"Bloodbank.h"
#include"Donator.h"
#include<cstring>
Bloodbank::Bloodbank()
{
       donarId = 0;
       strcpy_s(bloodId, "");
       strcpy_s(campName, "");
       quantity = 0;
       strcpy_s(bloodType, "");
}
Bloodbank::Bloodbank(int pdonarId, const char pbloodId, const char
pcampName[], int
       pquantity, const char pbloodType[])
{
       donarId = pdonarId;
       strcpy(bloodId, pbloodId);
       strcpy(campName, pcampName);
       strcpy(bloodType, pbloodType);
       quantity = pquantity;
}
void Bloodbank::updateDetails()
{
}
void Bloodbank::storeDetails()
{
}
Bloodbank ::~Bloodbank()
{
}
