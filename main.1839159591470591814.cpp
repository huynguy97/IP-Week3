#include <iostream>
#include <cmath>

//                                             

using namespace std;

//        
void inclusion (double e, double v)
{
    int i = 0;
    double a = 0;
    double b = max (1.0, v);
    if (a*a == v)
    {
        cout << "Inclusion square root of " << v << " is " << a << endl;
        return;
    }
    if (b*b == v)
    {
        cout << "Inclusion square root of " << v << " is " << b << endl;
        return;
    }
    double x = (a+b)/2;
    while ( abs(x*x-v)>e)
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
    }
    cout << " Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
    cout << "Number Iterations: " << i << endl;
}

void test_inclusion ()
    {
        cout << endl << " ******** testing inclusion *******" << endl;
        double e = 0.1 ;
        while ( e >= 0.00001)
        {
            inclusion (e, 0.0);
            inclusion (e, 1.0);
            inclusion (e, 0.6);
            inclusion (e, 36);
            inclusion (e, 77);

            e = e/10;
        }
        cout << endl << " ******** testing inclusion done *******" << endl;
    }

//         
void newton_raphson (double e, double v)
{
    int i = 0;
    double x = max (1.0, v);
    while (abs (x*x - v)> e)
    {
        i++;
        x = x - (x*x-v)/(2*x);
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e<< endl;
    cout << "Number Iterations: " << i << endl;
}
void test_newton_raphson ()
    {
        cout << endl << " ******** testing newton_raphson *******" << endl;
        double e = 0.1 ;
        while ( e >= 0.00001)
        {
            newton_raphson (e, 0.0);
            newton_raphson (e, 1.0);
            newton_raphson (e, 0.47);
            newton_raphson (e, 16);
            newton_raphson (e, 77);

            e = e/10;
        }
        cout << endl << " ******** testing newton_raphson done *******" << endl;
    }

int main()
{
    cout << "Hello world!" << endl;
    test_inclusion ();
    test_newton_raphson ();
    return 0;
}

//         
//                                                                                                                                                               

