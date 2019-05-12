#include <iostream>
#include <cmath>

using namespace std;

void inclusion (double v, double e);
void newton_raphson(double v, double e);

//                                              
//                                          

//                  
//                                      
//                                      
//                                            
//                                            
//                                             

//                      
//                                      
//                                      
//                                           
//                                             
//                                              

int main()
{
    double v, e;
    cout << "Input v and then epsilon" <<endl;
    cin >> v >> e;
    inclusion(v,e);
    newton_raphson(v,e);
}

void inclusion (double v, double e)
{
    double a1 = 0, b1, x = 0;
    int i1 = 0;
    if (v < 1)
    {
        b1 = 1;
    }
    else
    {
        b1 = v;
    }
    x = (a1+b1)/2;
    if(a1*a1 == v)
    {
        cout << "Inclusion square root of "<< v << " is " << a1<<endl;
    }
    else if(b1*b1 == v)
    {
        cout << "Inclusion square root of "<< v << " is " << b1<<endl;
    }
    else
    {
        while(abs(x*x-v) > e)
        {
            if((x*x) > v)
            {
                b1 = x;
            }
            else
            {
                a1 = x;
            }
            x = (a1+b1)/2;
            i1++;
            cout << i1 << "\t" << a1 << "\t" << x << "\t" << b1 <<endl;
        }
        cout << "Inclusion square root of "<< v << " is " << x <<endl;
    }
}

void newton_raphson(double v, double e)
{
    double x=1;
    if(v<1)
    {
        x=v;
    }
int i1=0;
    while(abs(x*x-v)>e)
        {
            x=x-((x*x-v)/(2*x));
            i1++;
            cout << i1 << "\t" << x <<endl;
        }

    cout << "Newton_raphson square root of " << v << " is " << x <<  " for epsilon "  << e << endl;

}

