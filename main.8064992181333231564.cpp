#include <iostream>
#include <cmath>

using namespace std;

void inclusion (double e, double v)
{
    double a  = 0;

    double b = max ( 1.0, v);
    //                                                                                       
    //                                                                                           
    //                                         

    //                                                                                                                 

    //                                                                                                             
    //                                                                             
    //                                                                             

    if (a*a == v)
    {
        cout << "Inclusion square root of " << v << " is " << a << " for epsilon " << e << endl;
        return;
    }
    if (b*b == v)
    {
        cout << "Inclusion square root of " << v << " is " << b << " for epsilon " << e << endl;
        return;
    }
    int counter = 0;
    double x = (a+b)/2;
    while (abs ( x*x - v) > e)
    {
        if (x*x < v)
        {
            a = x;
        }
        else
        {
            b = x;
        }
    x = (a + b) / 2;
    counter ++;
    }

cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
cout << "Counted iteration i " << counter << " times" << endl;
}

void test_inclusion ()
{
cout << endl << "******** testing inclusion ********" << endl;
double e = 0.1 ;
while ( e >= 0.00001)
{
inclusion (e, 0.0) ;
inclusion (e, 1.0) ;
inclusion (e, 0.6) ;
inclusion (e, 36.0) ;
inclusion (e, 333333.3333) ;

e = e / 10 ;
}
cout << endl << "******** testing inclusion done ********" << endl ;
}

void newtonraphson ( double e, double v )
{
    int counter = 0;
    double x = max ( 1.0, v);
    while( abs ( x*x - v ) > e )
    {
        x = x - ((x*x - v) / (2*x));
        counter ++;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl ;
    cout << "Counted iteration i " << counter << " times" << endl;
}

void test_newtonraphson ()
{
cout << endl << "******** testing Newton_raphson ********" << endl;
double e = 0.1 ;
while ( e >= 0.00001)
{
newtonraphson (e, 0.0) ;
newtonraphson (e, 1.0) ;
newtonraphson (e, 0.6) ;
newtonraphson (e, 36.0) ;
newtonraphson (e, 333333.3333) ;

e = e / 10 ;
}
cout << endl << "******** testing Newton_raphson done ********" << endl ;
}

int main()
{
test_inclusion() ;
test_newtonraphson ();
return 0;
}

//                                                                                                                                   

