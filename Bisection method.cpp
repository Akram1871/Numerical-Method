#include<bits/stdc++.h>
#define tol 0.0001
using namespace std;

float F_x(float root)
{
    return ((root*root*root )-(2*root) -5);///  x^3-2x-5
}

void bisection_method(float low,float high)
{
    float mid,root,dif;
    int hmn=0;///how many time loop will run (-_-)
    dif = high - low;

   while(dif>tol)
   {
     mid = ((low+high)/2*1.0) ;
     cout<<mid<<endl;
     hmn++;
     root =F_x(mid);
     if(root>0)
        high = mid;
     else
        low =mid;
    dif = high - low;

   }
   cout<<"The root is : "<<mid<<endl;
   cout<<"You have to loop "<<hmn<<" times"<<endl;

}

int main()
{
    cout<<"the function is \b(x^3-2x-5)"<<endl;
    bisection_method(2,3);
}
