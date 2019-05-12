//                                                

# include <cmath>
#include <iostream>

using namespace std;

void inclusion ( double e, double v)
{
double a = 0;
double b = max (1.0 ,v);
if ( a*a == v)
{
cout << "inclusion square root of v is" << a << endl;
return ;
}
if ( b*b == v)
{
cout << "inclusion square root of v is" << b << endl;
return ;
}
double x = ( a+b )/2 ;
while ( abs(x*x-v)>e)
{
    if ( x*x<v )
    {
        a=x;
    }
    else
    {
        b=x;
    }
    x= (a+b)/2;
}
cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
void test_inclusion ()
{
cout << endl << " testing inclusion " << endl;
double e = 0.1 ;
int i=0;
while ( e >= 0.00001)
{
inclusion (e, 0.0) ;
inclusion (e, 1.0) ;
inclusion (e, 0.6) ;
inclusion (e, 36.0) ;
inclusion (e, 333333.3333) ;
e = e / 10 ;
i=i+1;
}
cout << i << "" << endl;
cout << endl << " testing inclusion done " << endl ;
}

void newton_raphson ( double e, double v )
{
double x= max ( 1.0 ,v);
while( abs ( x*x - v ) > e )
{
    x = x - ( x*x - v ) / (2*x) ;
}
cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl ;
}
void test_newton_raphson ()
{
cout << endl << " testing newton_raphson " << endl;
double e = 0.1 ;
int i=0;
while ( e >= 0.00001)
{
newton_raphson (e, 0.0) ;
newton_raphson (e, 1.0) ;
newton_raphson (e, 0.6) ;
newton_raphson (e, 36.0) ;
newton_raphson (e, 333333.3333) ;
e = e / 10 ;
i=i+1;
}
cout << i << "" <<endl;
cout << endl << " testing newton-raphson done " << endl ;
}

