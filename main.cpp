#include <iostream>
#include<string>
using namespace std;

int main()
{
string CdC="01234";
cout << CdC[2] << endl; // Test.

if (CdC[2] == 2)
{
   cout << "=" << endl;
}
else
{
    cout << "!=" << endl;
}
    return 0;
}
