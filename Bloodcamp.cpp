#include"Bloodcamp.h"
#include<cstring>
#include "Donator.h"
Bloodcamp::Bloodcamp()
{
       donarId = 0;
       strcpy_s(bloodId, "");
       strcpy(campName, "");
       quantity = 0;
       strcpy(dateDonated, "");
}
Bloodcamp :: Bloodcamp(int pdonarId, const char pbloodId[], const char
pcampName[], int
14 | P a g e
pquantity, const char pdateDonated[])
{
        donarId = pdonarId;
        strcpy(bloodId,pbloodId);
        strcpy(campName, pcampName);
        quantity = pquantity;
        strcpy(dateDonated, pdateDonated);
}void Bloodcamp ::saveDonationDetails()
{
}
Bloodcamp::~Bloodcamp()
{
//Destructor
}
