#include <iostream>
#include <cmath>

//                              
//                         

using namespace std;

int iteration_inclusion = 0;
int iteration_newton_raphson = 0;

void inclusion ( double e, double v )
{
    double a = 0;
    double b = max(1.0, v);

    if ( a * a  == v )
    {
        cout << "inclusion square root of" " " <<v<< " " "is" " " <<a << endl;
        return ;
    }

    if ( b * b  == v)
    {
        cout << "inclusion square root of" " " <<v<< " " "is"  " "<<b << endl;
        return ;
    }

    double x = (a + b) / 2 ;

    while (abs(x*x-v)>e)
    {

        if ( x * x < v )
        {
            a = x ;
        }

        else
        {
            b = x ;
        }

        x = (a + b) / 2;

        iteration_inclusion = iteration_inclusion + 1;

    }

    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << "calculated in "<< iteration_inclusion <<" iterations" << endl;

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

void newtonraphson (double e, double v)
{
    double x = max(1.0, v);

    while (abs(x * x - v) > e)
    {
        x = (x - (x*x - v) / (2*x) ) ;
        iteration_newton_raphson = iteration_newton_raphson + 1;
    }

    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << " calculated in " <<iteration_newton_raphson<< " iterations" <<endl ;
}

void test_newton_raphson ()
{
    cout << endl << "******** testing newton_raphson ********" << endl;
    double eps = 0.1 ;
    while ( eps >= 0.00001)
    {
        newtonraphson (eps, 0.0) ;
        newtonraphson (eps, 1.0) ;
        newtonraphson (eps, 0.6) ;
        newtonraphson (eps, 36.0) ;
        newtonraphson (eps, 333333.3333) ;

        eps = eps / 10 ;
    }
    cout << endl << "******** testing newton_raphson done ********" << endl ;
}

int main()
{
    test_inclusion();
    test_newton_raphson();
    return (0);
}

//                                                                                               
//                                                                   

//                                                                                                                          
//                                                              

