#include <iostream>
#include <cmath>
#include <assert.h>

using namespace std;

//                        

void inclusion(double e, double v)
{
    //              
    assert (v >= 0 && e > 0);
    //                
    //                                                              
    //                                                       

    double a = 0;
    double b = max(v, 1.0);
    double x = (a+b)/2;
    if(a * a == v)
    {
        cout << "Inclusion square root of " << v << " is " << a << endl;
        return;
    }
    else if(b * b == v)
    {
        cout << "Inclusion square root of " << v << " is " << b << endl;
        return;
    }
    else
    {
        int i = 0;
        while(abs(x*x - v) > e)
        {
            cout << i << "\t" << a << "\t" << x << "\t" << b << endl;
            if(x*x < v)
            {
                a = x;
            }
            else b = x;
            x = (a+b)/2;
            i++;
        }
        cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
        return;
    }
}

void newton_raphson(double e, double v)
{
    //              
    assert (v >= 0 && e > 0);
    //                
    //                                                              
    //                                                            

    double x = max(v, 1.0);
    int i = 0;
    while(abs(x*x - v) > e)
    {
        cout << i << "\t" << x << endl;
        x = x - ((x*x - v)/(2*x));
        i++;
    }
    cout << "Newton-Raphson square root of " << v << " is " << x << " for epsilon " << e << endl;
}

int main()
{
    inclusion(0.0001, 5);
    newton_raphson(0.0001, 5);
    return 0;
}

