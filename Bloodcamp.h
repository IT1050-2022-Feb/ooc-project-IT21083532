#include<iostream>
using namespace std;
class Bloodcamp
{
protected:
       int donarId;
       char bloodId;
       char campName[20];
       int quantity;
       char dateDonated;
public:
    Bloodcamp();
    Bloodcamp(int pdonarId, const char pbloodId, const char pcampName[], int
pquantity, const char pdateDonated);
     void saveDonationDetails();
~Bloodcamp();
};
