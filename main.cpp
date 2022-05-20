#include"Donator.h"
#include"Bloodcamp.h"
#include "Doctor.h"
#include"Medicalperson.h"
#include"Bloodbank.h"
#include"User.h"
#include<iostream>
using namespace std;
int main()
{
Donator* d1 = new Donator(0001, "Kasun", "Kalhara","No 12, Samagi
mawatha, Panniptitiya", "0702064535", "B+");
Donator* d2 = new Donator(0002, "Saman", "Shantha","No 12, Salmal
mawatha, Nittabuwa", "0702034545", "O+");
Bloodcamp *camp1 = new Bloodcamp (0001, "B001", "APEKSHA", 300,
"04/25/2022");
Bloodcamp* camp2 = new Bloodcamp(0002, "B002", "SUMITURA", 400,
"04/05/2022");
Bloodbank *bank1 = new Bloodbank(0001, "B001", "APEKSHA", 300, "B+ ");
Bloodbank *bank2 = new Bloodbank(0002, "B002", "SUMITURA", 400, "O+ ");
Doctor *doc1 = new Doctor(2001, "Pradeep", "Rangana",
"pradeep@gmail.com", "0702062585");
Doctor* doc2 = new Doctor(2050, "Amal", "Perera", "amal@gmail.com",
"0702062875");
Medicalperson *med1 =new Medicalperson(11001, "Nuwan", "Jayasignha",
"No 23, Hospital Road, Ratnapura", "0702733872");
Medicalperson* med2 = new Medicalperson(11003, "Dilina", "Guruge", "No
43, Malwatta Road, Kandy", "0702839870");
User *user1 = new User(12001, "Oshan", "Amantha", "No32, Wihara
mawatha, Pannala", "07288774567", "O+", 300);
User* user2 = new User(12001, "Dulith", "Gamage", "No43, School lane,
Ja-ela", "0725476667", "O+", 400);
return 0;
}
