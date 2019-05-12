#include <iostream>

using namespace std;
#include<math.h>

void inclusion(double v);
void newton(double v);

int main()
{
    double v;
    inclusion(v);
    newton(v);

    //                                                    
    //                                              
}

void inclusion(double v)
{
    double check_varible = 0.1;
    double a = 0, b, x;
    int counting = 1;

    //     
    cout << "Please enter the number you wish to take square root of: ";
    cin >> v;

    //                                        
    if (v > 1)
    {
        b = v;
    }
    else
    {
        b = 1;
    }
    x = (a+b)/2.0;

    //         
    if ((a*a == v) || (b*b == v))
        {
            cout << "Inclusion square root of v is " << v<< '\t'<<"number of steps(i): "<<counting<<'\t'<< "a: "<<a<<'\t'<<"b: "<<b <<endl;
        }
    else
        {
            while (fabs(x*x - v) > check_varible)
            {
                if ((x*x - v) < 0)
                {
                    a = x;
                }
                else
                {
                    b = x;
                }
                x =(a+b)/2.0;
                counting = counting + 1;
            }

    //                               
            if (((x - int(x)) < 0.0099) || ((x- int(x))> 0.98))
            {
                x = round(x);
            }

    //      
            cout << "Inclusion square root of v is " << x << '\t'<< "number of steps(i): "<< counting<< '\t'<<"a: "<<a<<'\t'<< "b: "<< b <<endl;
}
        /*
                             
                                 
                                 
                                   
                               
                                                  
        */
}
void newton(double v)
{
    double check_varible = 0.1;
    double x = 0;
    int counting = 1;
    //          
    cout << "Please enter the number you wish to take square root of: ";
    cin >> v;

    //                        
    if (v < 1 && v != 0)
        {
            x = 1;
        }
    else
        {
            x = v;
        }

    //         
    while (fabs(x*x - v) > check_varible)
        {
            x = x - ((x*x - v)/ (2*x));
            counting = counting + 1;
        }

    //                                
    if (((x - int(x)) < 0.0099) || (x - int(x)>0.98))
        {
            x = round(x);
        }

    //      
    cout << "Newton_raphson square root of v is " << x<< '\t' << "number of steps(i): "<< counting <<  endl;

        /*
                          
                           
                           
                               
                           
                                 
                                                         
        */
}

