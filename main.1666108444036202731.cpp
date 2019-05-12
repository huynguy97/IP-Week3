#include <iostream>
#include <cmath>
using namespace std;

//                                                    

//                                                                              
//                                                                 
void inclusion (double v,double e)
{
double a0=0;
double b0;

if (v>1)
{
    b0=v;
}
else
{
    b0=1;
}

double A=a0*a0;
double B=b0*b0;

if (A==v)
{
    cout << "Inclusion square root of v is " << a0;
}
else if (B==v)
{
    cout << "Inclusion square root of v is " << b0;
}

double x0=(a0+b0)/2;
double Xv=abs(x0*x0-v);
double X=x0*x0;
double i=0;

cout << "\nValues ai, bi and xi\n";
while (Xv>=e)
{
    if (X<v)
    {
        a0=x0;
    }
    else
    {
        b0=x0;
    }
    x0=(a0+b0)/2;
    Xv=abs(x0*x0-v);
    X=x0*x0;
    i=i+1;
    cout << " ai: " << a0;
    cout << " \t\t bi: " << b0;
    cout << " \t\t xi: " << x0 << "\n";
}
cout << "\nInclusion square root of v is " << x0 << " for epsilon " << e << " and the number of approximations is " << i;
}

//                                                                     
//                                                                     
void newton_raphson (double v,double e)
{

double x0;

if (v>1)
{
    x0=v;
}
else
{
    x0=1;
}

double fx=x0*x0-v;
double afx=2*x0;
double Xv=abs(x0*x0-v);
double i=0;

cout << "\nValues xi:";
while (Xv>=e)
{
    x0=x0-(fx/afx);
    fx=x0*x0-v;
    afx=2*x0;
    Xv=abs(x0*x0-v);
    i=i+1;
    cout << "\t" << x0;
}
cout << "\nNewton_raphson square root of v is " << x0 << " for epsilon " << e << " and the number of approximations is " << i;
}

//                                                                                         
int main()
{
cout << "Hello user,"  ;
cout << "\n \nEnter the number from which you want to know the square root of: ";
double v ;
cin >> v ;
cout << "v: " << v << endl ;
double e;
cout << "Enter epsilon: ";
cin >> e;
cout << "epsilon: " << e << endl;

inclusion(v,e);
newton_raphson(v,e);

cout << "\n\nThank you for using our program";
}

//                           
//                                              
//                                              
//                                                                 
//                                                      
//                                                        
//                                                   
//                                                                                 
//                                                                        
//                                                            
//                                                                         
//                                                         

//                               
//                                     
//                                                     
//                
//                                                  
//                                       
//                                                     
//                                                                
//                                                        
//                                                                         
//                                                      

