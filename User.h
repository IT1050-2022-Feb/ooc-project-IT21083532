#include<iostream>
using namespace std;
class User
{
protected:
    int userId;
    char firstName[20];
    char lastName[20];
    char Address[30];
    char pNo[10];
    char bloodType[3];
    int quantity;
public:
    User();
    User(int puserId, const char pfirstName[], const char plastName[], const
    char pAddress[], const char ppNo[], const char pbloodType[]), int pquantity);
    void displayUserDetails();
    ~User();
};
