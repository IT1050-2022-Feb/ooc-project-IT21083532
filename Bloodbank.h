#include<iostream>
using namespace std;
class Bloodbank
{
protected:
       int donarId;
       char bloodId;
       char campName[20];
       int quantity;
       char bloodType[4];
public:
       Bloodbank();
       Bloodbank(int pdonarId, const char pbloodId, const char pcampName[], int
pquantity , const char pbloodType[]);
       void updateDetails();
       void storeDetails();
       ~Bloodbank();
};
