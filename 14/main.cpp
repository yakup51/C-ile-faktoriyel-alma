#include <iostream>

using namespace std;

int main()
{
    int sayi1;
    for(int i=1; i<=2; i++)
    {
   cout<<"Lutfen faktoriyel almak istediginiz sayilari giriniz..."<<endl;
        cin>> sayi1;
        int fakt=1;
        for(int i=1; i<=sayi1; i++)
        {
            fakt=fakt*i;
        }

     cout<<sayi1<<"! =="<<fakt<<endl;
    }
return 0;
}
