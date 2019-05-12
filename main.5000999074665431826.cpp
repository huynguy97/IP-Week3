#include <iostream>
#include <cmath>
using namespace std;

//                         
//                           

void inclusion (double eps, double v)
{
    double a = 0;
    double b = max(1.0, v);

    if (a*a==v)
    {
        cout << "Inclusion square root of v is " << a << "." << endl;
        return;
    }
    if (b*b==v)
    {
        cout << "Inclusion square root of v is " << b << "." << endl;
        return;
    }

    double x=(a+b)/2;

    int counter1= 0;

    while (abs(x*x-v)>eps)
    {
        if (x*x<v)
            a=x;
        else
            b=x;
        x=(a+b)/2;
        counter1= counter1 + 1;
    }
    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << eps << ". This was computed in "  << counter1 << " times." << endl;
}

void test_inclusion()
{
    inclusion ( 0.001, 0.0 );
    inclusion ( 0.001, 1.0 );
    inclusion ( 0.001, 9.0 );
    inclusion ( 0.001, 0.6 );
    inclusion ( 0.001, 30.0 );
}

void newton_raphson ( double e, double w )
{
    double y = max(1.0, w);

    int counter2 = 0;
    while( abs ( y*y - w ) > e )
    {
        y=y-(y*y-w)/(2*y);
        counter2=counter2+1;
    }
    cout << "Newton_raphson square root of " << w << " is " << y << " for epsilon " << e << ". This was computed in "  << counter2 << " times." << endl;
}

void test_NRM()
{
    newton_raphson ( 0.001, 0.0 );
    newton_raphson ( 0.001, 1.0 );
    newton_raphson ( 0.001, 0.6 );
    newton_raphson ( 0.001, 9.0 );
    newton_raphson ( 0.001, 30.0 );
}

int main()
{
    test_inclusion();
    test_NRM();
    return 0;
}
/*
                                                                                                                 
                                
                                
                                                                                      
                                                                                        
                                                                                       
                                                                                           
                                                                                     
                                                                                           
                                                                                           
                                                                                            
*/

