#include <iostream>

using namespace std;

bool check (int);


int main()
{

int age = 25;

bool human = true;


int *ageptr;

bool *humanptr;

ageptr = &age;

humanptr = &human;

cout<< age << "---->"<< ageptr<<endl;
cout<< human << "---->"<< humanptr<<endl;


cout<<"lets now check value stored by the variable by accessing it through pointer"<<endl;

cout<< age << "---->"<< *ageptr<<endl;           // *ageptr will show value stored in the memory location specified by the pointer
cout<< human << "---->"<< *humanptr<<endl;



return 0;


}

