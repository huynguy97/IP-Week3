#include <iostream>
#include <cmath>
using namespace std;
//                                            
int g;
int h;

//                    

void inclusion (double e, double v)
{
    double a = 0;
    double b = max(1.0,v);

    if (a*a==v)
{
     cout <<"Square root of "<<v<< " is "<<a<<endl;
     return;
}
     if (b*b==v)
{
      cout <<"Square root of "<<v<<" is "<<b<<endl;
      return;
}
     double x = (a+b)/2;
     while( abs (x*x-v) > e)
{

        if (x*x<v)
            {
              a=x;
            }
        else
            {
              b=x;
            }
        x = (a+b)/2;
g=g+1;
}
cout<<"Inclusion square root of "<<v<<" = "<<x<<" for epsilon "<<e<<endl;
}
void test_inclusion()
{

cout<<endl<<"***testing inclusion***"<<endl;
double e = 0.1;
while (e>=0.1)
{
    inclusion(e,0.0);
    inclusion(e,1.0);
    inclusion(e,0.5);
    inclusion(e,64.0);
    inclusion(e,33.3333);
    e=e/10;

}
cout<<endl<<"***testing inclusion done***"<<endl;
}

//                         

void newtonraphson (double e, double v)
{
    double x=max(1.0,v);
    while(abs(x*x-v)>e)
    {
         h = h+1;
        x = x-(x*x-v)/(2*x);
    }
    cout<<"Newton_raphson square root of "<<v<<" is "<<x<<" for epsilon "<<e<<endl;
    return;
}
void test_newtonraphson()
{

cout<<endl<<"***testing Newton_raphson***"<<endl;
double e = 0.1;
while (e>=0.1)
{
    newtonraphson(e,0.0);
    newtonraphson(e,1.0);
    newtonraphson(e,0.5);
    newtonraphson(e,64.0);
    newtonraphson(e,33.33333);
    e=e/10;

}
cout<<endl<<"***testing Newton_raphson done***"<<endl;
}

int main()
{
  test_inclusion();
  test_newtonraphson();
  cout<<"The result for inclusion function is "<<g<<endl;
  cout<<"The result for newtonraphson function is "<<g<<endl;
  //                                 
  //                                                                                                   
  //                                                                  
  //                                                                                     
    return 0;
}

