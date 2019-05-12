#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int inclusion(double epsilon, double v)
{
    double a = 0;
    double b = max(1.0, v);
    double x = (a + b) / 2;
    int i = 0;

    if (a * a == v)
    {
        cout << "Inclusion square root of v is " << a << "\n";
    }
    else if (b * b == v)
    {
        cout << "Inclusion square root of v is " << b << "\n";
    }
    else
    {
        while (!(abs(x * x - v) <= epsilon))
        {
            if (x * x < v)
            {
                a = x;
            }
            else
            {
                b = x;
            }
            i++;
            x = (a + b) / 2;
        }
        cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << epsilon << " with " << i << " iterations. Numbers: " << i << "\t" << a << "\t" << x << "\t" << b << "\n";
    }
    return 0;
}

void newton_raphson(double epsilon, double v)
{
    double x = max(1.0, v);
    int i = 0;

    while (!(abs(x * x - v) <= epsilon))
    {
        x = x - ((x * x - v) / (2 * x));
        i++;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << epsilon << " with " << i << " iterations. Numbers: " << i << "\t" << x << "\n";
}

int main()
{
    double epsilon;
    double v;

    cout << "Please input epsilonx: ";
    cin >> epsilon;
    cout << "Please input v: ";
    cin >> v;

    inclusion(epsilon, v);

    newton_raphson(epsilon, v);
    return 0;
}

/*
                                   
         
                        
                                

         
                        
                             

            
                            
                                 

            
                              
                                   

             
                              
                                   
*/

