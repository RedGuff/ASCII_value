#include <iostream>
#include <string>
using namespace std;

int main()
{    
    string CdC = "01234";
    clog << CdC[2] << endl; // 2. Ok.
    int c = 0;
    c =  CdC[2];// cast.
    clog << c << endl; // 50.   ??????????

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
