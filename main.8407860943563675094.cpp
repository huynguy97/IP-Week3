#include <iostream>
#include <cmath>
//                     
//                             

/*                                              
              
              
                  
                 
                 

                                          
          
                            
                            
                             
                             
                              

              
                             
                             
                             
                             
                             
*/
using namespace std;

void inclusion (double e, double v)
{
    double a = 0;
    double b = max ( 1.0 , v );
    if (a*a==v)
    {
        cout << "Inclusion square root of " << v << " is " << a << endl;
        return;
    }
    if (b*b==v)
    {
        cout << "Inclusion square root of " << v << " is " << b << endl;
        return;
    }
    double x = (a+b)/2;
    int counter = 0;
    while (abs (x*x-v)>e)
    {
        if (x*x < v)
        {
            a = x;
        }
        else
        {
            b = x;
        }
        x = (a+b)/2;
        counter++;
    }
    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
    cout << "The value for i, a and b is " << counter <<'\t'<<  a <<'\t'<< b << endl;

}

void test_inclusion ()
    {
    cout << endl << "******** testing inclusion ********" << endl;
    double e = 0.1 ;
    while ( e >= 0.00001)
    {
        inclusion (e, 0.0) ;
        inclusion (e, 1.0) ;
        inclusion (e, 0.4) ;
        inclusion (e, 25.0) ;
        inclusion (e, 77.777) ;
        e = e / 10 ;
    }
    cout << endl << "******** testing inclusion done ********" << endl ;
}

void newtonraphson (double e, double v)
{
    double x = max (1.0 , v);
    int counter = 1;
    while (abs (x*x-v)>e)
    {
        x = x-(x*x-v)/(2*x);
        counter++;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl ;
    cout << "The i for counter is " << counter << endl;
}

void test_newtonraphson ()
    {
    cout << endl << "******** testing newtonraphson ********" << endl;
    double e = 0.1 ;
    while ( e >= 0.00001)
    {
        newtonraphson (e, 0.0) ;
        newtonraphson (e, 1.0) ;
        newtonraphson (e, 0.4) ;
        newtonraphson (e, 25.0) ;
        newtonraphson (e, 77.777) ;
        e = e / 10 ;
    }
    cout << endl << "******** testing newtonraphson done ********" << endl ;
}

int main()
{
    test_inclusion();
    test_newtonraphson();
    return 0;
}

