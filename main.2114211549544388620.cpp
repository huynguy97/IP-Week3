#include <iostream>
#include <cmath>

using namespace std;

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

void inclusion(double e, double v)
    {
    double a = 0;
    double b = max(1.0, v);
    int i = 0;

    if ( a*a == v )
    {
    cout << "Inclusion square root of " << v << " is " << a << " The number of steps: " << i + 1 << endl;
    return;
    }
    if ( b*b == v )
    {
    cout << "Inclusion square root of " << v << " is " << b << " The number of steps: " << i + 1 << endl;
    return;
    }

    double x = ( a+b ) / 2;
    while ( abs ( x*x - v ) > e )
    {
        if ( x*x < v )
        {
        a = x;
        }
        else
        {
        b = x;
        }
    x = ( a + b ) / 2 ;
    i = i + 1;
    }

    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << "The number of steps: " << i << endl;

}

void test_inclusion ()
{
    cout << endl << "******** testing inclusion ********" << endl;
    double eps = 0.1 ;
    while ( eps >= 0.00001)
    {
    inclusion (eps, 0.0) ;
    inclusion (eps, 1.0) ;
    inclusion (eps, 0.6) ;
    inclusion (eps, 36.0) ;
    inclusion (eps, 333333.3333) ;
    eps = eps / 10 ;
    }

    cout << endl << "******** testing inclusion done ********" << endl ;
}

void newton_raphson(double e, double v)
{
    double x = max(v, 0.1);
    int i = 0;

    while( abs ( x*x - v ) > e )
    {
    x = x - ( x*x - v ) / ( 2*x ) ;
    i = i + 1;
    }

    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << "The number of steps: " << i <<endl ;
}

void test_newton_raphson ()
    {
    cout << endl << "******** testing newton_raphson ********" << endl;
    double eps = 0.1 ;
    while ( eps >= 0.00001)
    {
    newton_raphson (eps, 0.0) ;
    newton_raphson (eps, 1.0) ;
    newton_raphson (eps, 0.6) ;
    newton_raphson (eps, 36.0) ;
    newton_raphson (eps, 333333.3333) ;
    eps = eps / 10 ;
    }
    cout << endl << "******** testing newton-raphson done ********" << endl ;
}

int main()
{
    test_inclusion ();
    test_newton_raphson ();
    return 0;

}

//                                                                                                            

