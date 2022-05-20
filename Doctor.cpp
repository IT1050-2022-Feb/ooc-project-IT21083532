#include"Doctor.h"
#include<cstring>
Doctor::Doctor()
{
    docId = 0;
    strcpy(firstName, "");
    strcpy(lastName, "");
    strcpy(email, "");
    strcpy(pNo, "");
}

Doctor::Doctor(int pdocId, const char pfirstName[], const char plastName[],
const

char pemail[], const char ppNo[])
{
    docId = pdocId;
    strcpy(firstName, pfirstName);
    strcpy(lastName, plastName);
    strcpy(email, pemail);
    strcpy(pNo, ppNo);
}
    
void Doctor::displayDetails()
    {
  
    }

Doctor::~Doctor()
    {
  
    }
