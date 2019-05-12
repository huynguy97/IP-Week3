#include <iostream>
#include <cmath>
using namespace std;

//                                              
//                                             

//           
void iterate (double a, double b, double v, double epsilon)
{
    double x = 1;
    int itnum = 0;

    while (abs((x*x)-v) > epsilon)
    {
        x = ((a+b)/2);
        cout << "i = " << itnum << "\tx" << itnum << " = " << x << "\ta" << itnum << " = " << a << "\tb" << itnum << " = " << b << endl;
        if (x * x < v)
        {
            a = x;
        }
        else if (x * x > v)
        {
            b = x;
        }
        itnum++;
    }

    cout << "INCLUSION square root of " << v << " is " << x << endl;
    cout << "number of iterations is " << itnum << endl << endl;
}

//                                                                                    
void check_ab(double epsilon, double v, int a, double b)
{
    double x = ((a+b)/2);
    if(a*a == v)
    {
        cout << "i = 0" << "\tx0 = " << x << "\ta0 = " << a << "\tb0 = " << b << endl;
        cout << "INCLUSION square root of " << v << " is " << a << endl;
        cout << "number of iterations is " << "1" << endl << endl;
    }
    else if(b*b == v)
    {
        cout << "i = 0" << "\tx0 = " << x << "\ta0 = " << a << "\tb0 = " << b << endl;
        cout << "INCLUSION square root of " << v << " is " << b << endl;
        cout << "number of iterations is " << "1" << endl << endl;
    }
    else
    {
        iterate(a, b, v, epsilon);
    }
}

void inclusion(double epsilon, double v)
{
    int a = 0;
    double b = max(1.0, v);;
    check_ab(epsilon, v, a, b);
}

//                
void approx_x(double epsilon, double v, double x)
{
    int itnum = 1;
    cout << "i = " << itnum - 1 << "\tx" << itnum - 1 << " = " << x << endl;
    while(abs((x*x)-v) > epsilon)
    {
        x= x-((x*x)-v)/(2*x);
        cout << "i = " << itnum << "\tx" << itnum << " = " << x << endl;
        itnum++;
    }
    cout << "NEWTON_RAPHSON square root of " << v << " is " << x << endl;
    cout << "number of iterations is " << itnum << endl;
}

void newton_raphson(double epsilon, double v)
{
    double x = max(v, 1.0);
    approx_x(epsilon, v, x);
}

int main()
{
    /*                                        
                                                                                                                       
                                                                                                                    
                                                                                                                                    
                                                                                                                         
                                                                                                                                  
    */
    double v;
    double epsilon;
    cout << "give a number" << endl;
    cin >> v;
    cout << "give epsilon" << endl;
    cin >> epsilon;
    cout << endl;
    inclusion(epsilon, v);
    newton_raphson(epsilon, v);
    /*                                    
                                                                                               
                                                                                             
                                                                                                        
                                                                                                   
                                                                                                          
    */
    //         
}

