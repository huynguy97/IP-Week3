#include <iostream>
#include <cmath>

using namespace std;
double teller_newton = 0;
double teller_inclusion = 0;

/*                                         
        
                                                                                                                            
                                                                                                                 
        
                                                                                                                            
                                                                                                                            
                                                   
                                         
                                             
          
                                            
                                              
         
                                               
                                               

                                                                                                                                                                 
    */

void inclusion(double e, double v)
{
    double a = 0;
    double b = max(v,1.0);
    if (a * a == v)
    {
        teller_inclusion = 1.0;
        cout << "The inclusion square root of " << v << " is " << a << " with  1 iteration " << endl;
        cout << "The value of a0 : " << a << " and the value of b0 : " << b << endl;
        return;
    }
    else if(b*b == v)
    {
        teller_inclusion = 1.0;
        cout<< "The inclusion square root of " << v <<  " is " << b << " with 1 iteration " << endl;
        cout << "The value of a0 : " << a << " and the value of b0 : " << b << endl;
        return;
    }
    else
    {
        double x;
        while( abs(x*x - v) > e )
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
            ++teller_inclusion;

        }
        cout << "The inclusion square root of " << v << " is " << x << " for epsilon " << e << " with " << teller_inclusion << " iteration(s)" << endl;
        cout << "The value of a0 : " << a << " and the value of b0 : " << b << endl;
        return;
    }

}
void newton_rhapson(double v, double e)
{
    double x = max(v,1.0);
    while (abs(x*x - v) > e)
    {
        x = (x-(x*x - v))/ (2*x);
        ++teller_newton;
    }
    cout << "The newton_raphson square root of " << v << " is " << abs(x) << " for epsilon " << e << " with " << teller_newton << " iteration(s)";
    return;
}
int main()
{
    double v;
    double e;
    cout << "What square root do you want to calculate using the inclusion method? "<< endl;
    cin >> v;
    cout << "How precisely? (Choose a number very close to 0, but not 0)" << endl;
    cin >> e;
    inclusion(e,v);
    double v1, e1;
    cout << "What square root do you want to calculate using newtons method? " << endl;
    cin >> v1;
    cout << "How precisely? (Choose a number very close to 0, but not 0)" << endl;
    cin >> e1;
    newton_rhapson(v1,e1);
    return 0;
}

