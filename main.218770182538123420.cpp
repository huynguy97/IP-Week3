#include <iostream>
#include <cmath>

//                             
//                           

using namespace std;

double inclusion(double e, double v)
{
    double a = 0;
    double b = max(1.0, v);
    double x = (a+b)/2;
    int counter = 0;

    if(a*a == v)
    {
        cout << "Inclusion square root of v is: " << a << endl;
        cout << "It took " << counter << " approximations" << endl;
        return 0;
    }

    if(b*b == v)
    {
        cout << "Inclusion square root of v is: " << b << endl;
        cout << "It took " << counter << " approximations" << endl;
        return 0;
    }

    while(abs(x*x-v) > e)
    {
        if(x*x < v)
        {
            a = x;
            b -= 0.000000001;
            x = (a+b)/2;
            counter++;
            cout << counter << "\t" << a << "\t" << x << "\t" << b << endl;
        } else
        {
            a += 0.000000001;
            b = x;
            x = (a+b)/2;
            counter++;
            cout << counter << "\t" << a << "\t" << x << "\t" << b << endl;
        }
    }
    if(abs(x*x-v)<= e)
    {
        cout << "Inclusion square root of v is x_i for epsilon e: " << x << endl;
        cout << "It took " << counter << " approximations" << endl;
        return 0;
    }
}

double newton_raphson(double e, double v)
{
    double x = max(1.0, v);
    int counter = 0;
    while(abs(x*x-v) > e)
    {
        x = x - ((x*x-v) / (x+x));
        counter++;
        cout << counter << "\t" << x << endl;
    }
    if(abs(x*x-v)<= e)
    {
        cout << "Newton raphson square root of v is x_n for epsilon e: " << x << endl;
        cout << "It took " << counter << " approximations" << endl;
        return 0;
    }
}

int main()
{
    double e;
    double v;
    cout << "Set e: ";
    cin >> e;
    cout << "Set v: ";
    cin >> v;
    inclusion(e, v);
    newton_raphson(e, v);
}

//                                                                      
//                                                                   
//                                                                         
//                                                                                
//                                                                                 

