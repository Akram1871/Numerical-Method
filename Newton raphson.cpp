#include<bits/stdc++.h>
using namespace std;

float derive_function(float root)
{
    return (3+sin(root));/// 3+sin(x)
}
float functions(float root)
{
    return ((3*root)-cos(root)-1);/// 3x-cos(x)-1
}
float x_n1(float root)
{
    /// x_n+1 = x_n - (f(x_n)/f'(x_n))
    return (root - (functions(root)/derive_function(root)));
}
void Newton_raphson(float x)
{
  float current,temp;
  int hmn=0; ///how many time loop will run
  current =x_n1(x);
  while(1)
  {
      temp=x_n1(current);
       hmn++;
      if((current - temp)<0.001)
        break;
      current =temp;
  }
  cout<<"The root is :"<<temp<<endl;
  cout<<"You have to loop "<<hmn+1<<" times"<<endl;
}
int main()
{
  cout<<"The function is ( 3x-cos(x)-1 )"<<endl;
  Newton_raphson(0.1);
}
