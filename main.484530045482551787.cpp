#include <cmath>
#include <iostream>

//                            
//                                 

using namespace std;

void inclusion ( double e, double v)
{
    double a = 0;
    double b = max(1.0,v);
    int iteration_inclusion = 0;

    if (v == a*a)
    {
        cout<< "Inclusion square root of " << v << " is " << a <<endl;
        return;
    }

    if (v == b*b)
    {
        cout<< "Inclusion square root of " << v << " is " << b <<endl;
        return;
    }

    double x = ((a + b)/2);

    while(abs(x*x-v) > e)
    {
        if(x*x<v)
        {
            a = x;
        }
        else
        {
            b = x;
        }
        x = (a+b)/2;

        iteration_inclusion = iteration_inclusion + 1;

    }

    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
    cout << "The number of iterations for inclusion method is " << iteration_inclusion << endl;
    cout << "" << endl;
}

void test_inclusion()
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

        e = e / 10;
    }
    cout<<endl<<"***********testing inclusion done***********" << endl;
}

void newton_raphson (double e, double v)
{
    double x = max(1.0, v);
    int iteration_newton = 0;

    while(abs(x*x-v)> e)
    {
        x = x - (((x*x)-v)/(2*x));
        iteration_newton = iteration_newton + 1;
    }

    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl ;
    cout << "the number of iterations for Newton Raphson method is " << iteration_newton << endl;
    cout << "" << endl;
}

void test_newton_raphson()
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

//                                                                                                                                                           
//                                                                                                                                               
//                                                                                                                                    
//                                                                                                                                  
//                                                                                                                                          

int main()
{

    test_inclusion();
    test_newton_raphson();
    return 0;

}

