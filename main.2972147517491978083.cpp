#include <iostream>
#include <cmath>

using namespace std;

//                                                        
void inclusion (double e, double v)
{
    double a = 0;
    double b = max ( 1.0, v );
    int i = 0 ;
    if ( a*a == v )
    {
        cout << "Inclusion square root of " << v << " is " << 0 << " and the number of iterations is " << i <<  endl;
        cout << "Value of a = " << a << "\t Value of b = " << b <<  "\t Value of i = " << i << endl;
        return ;
    }
    if ( b*b == v)
    {
        cout << "Inclusion square root of " << v << " is " << 1 << " and the number of iterations is " << i << endl;
        cout << "Value of a = " << a << "\t Value of b = " << b << "\t Value of i = " << i << endl;
        return ;
    }

    double x = ( a+b ) / 2 ;
    while ( abs( x*x - v ) > e )
    {
        if ( x*x < v )
            a = x ;
        else
            b = x ;
        x = ( a+b ) / 2;
        i = i + 1 ;
    }
    cout << "inclusion square root of " << v << " is " << x << " for epsilon " << e << " and the number of iterations is " << i << endl;
    cout << "Value of a = " << a << "\t Value of b = " << b << "\t Value of x = " << x << "\t Value of i = " << i << endl;
}

//                                                                                             
void test_inclusion ()
{
    cout << endl << "******** testing inclusion ********" << endl;
    double eps = 0.1 ;
    while ( eps >= 0.00001)
    {
        inclusion (eps, 0.0) ;
        inclusion (eps, 1.0) ;
        inclusion (eps, 0.4) ;
        inclusion (eps, 16.0) ;
        inclusion (eps, 40) ;
        eps = eps / 10 ;
}
    cout << endl << "******** testing inclusion done ********" << endl ;
}

//                                                                
void newtonraphson ( double e, double v )
{
    double x = max ( 1.0, v ) ;
    int i = 0 ;
    while( abs ( x*x - v ) > e )
    {
        x = x - ( x*x - v ) / ( 2*x ) ;
        i = i + 1 ;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon "  << e << " and the number of iterations is " << i <<  endl;
    cout << " Value of x = " << x << "\t Value of i = " << i << endl;
}

//                                                                                            
void test_newtonraphson ()
{
    cout << endl << "******** testing Newton_raphson ********" << endl;
    double eps = 0.1 ;
    while ( eps >= 0.00001 )
    {
        newtonraphson (eps, 0.0) ;
        newtonraphson (eps, 1.0) ;
        newtonraphson (eps, 0.4) ;
        newtonraphson (eps, 16.0) ;
        newtonraphson (eps, 40) ;
        eps = eps / 10 ;
}
    cout << endl << "******** testing Newton_raphson done ********" << endl ;
}

//                                        
int main ()
{
    //                                                             
    test_inclusion () ;
    //                                                                
    test_newtonraphson () ;
    return 0 ;
}

//                                                                                                                       

