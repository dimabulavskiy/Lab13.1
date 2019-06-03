#include "math.h"
#include <iostream>
#include <conio.h>


using namespace std;



int main(void)
{
   cout<<"Размерность: ";
   int n;cin>>n;
   double* a=new double[n];
   for(int i=0; i<=n; i++)
   {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
   }
   double s=1.0;
   for(int i=0; i<n; i+=2)
      s*=a[i];
   cout<<"Ответ="<<s;
   getch();
   return 0;
   }
