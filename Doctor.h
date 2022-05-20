#include<iostream>
using namespace std;
class Doctor
{
protected:
int docId;
char firstName[20];
char lastName[20];
char email[50];
char pNo [10];
public:
Doctor();
Doctor(int pdocId, const char pfirstName[], const char plastName[], const
char pemail[], const char ppNo[]);
void displayDetails();
~Doctor();
};
