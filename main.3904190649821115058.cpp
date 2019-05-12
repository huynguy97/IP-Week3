#include <iostream>

using namespace std;

//          
//         

void inclusion (double eps, double v)
{
    double a=0;
    double b;
    //                     
    if (v < 1)
        b=1;
    else b=v;

    bool finished=false; //                                                                   
    int i = 0; //                                                         

    while (!finished)
    {
        double x = (a + b)/2;
        cout << ++i << '\t' << a << '\t' << x << '\t' << b << endl;
        if (a*a == v) //                                                                                
        {
            cout << "Inclusion square root of " << v << " is " << a << " for epsilon " << eps << endl;
            finished=true; //                                       
        }
        else if (b*b == v) //                                                                                    
        {
            cout << "Inclusion square root of " << v << " is " << b << " for epsilon " << eps << endl;
            finished=true; //                                       
        }
        else
        {
            double dif = x*x - v; //                                                               
            if (dif<0)
                dif = -dif; //                              
            if (dif<=eps) //                                                                                
            {
                cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << eps << endl;
                finished = true;
            }
            else
            {
                //                                                                
                if (x*x < v)
                    a = x; //                                   
                else
                    b = x; //                                   
            }
        }
    }
}

void newton_raphson(double eps, double v)
{
    double x;
    bool finished=false; //                                                                     
    int i = 0; //                                                         
    if (v == 0) //                   
    {
        cout << ++i << '\t' << v << endl;
        cout << "Newton_raphson square root of 0 is 0 for epsilon " << eps << endl;
        return; //                                                      
    }
    else
    {
        //                     
        if (v < 1)
            x=1;
        else
            x=v;
    }

    while (!finished)
    {
        cout << ++i << '\t' << x << endl; //                                                             
        double dif = x*x - v; //                                                                
        if (dif<0)
            dif=-dif; //                       
        if (dif <= eps) //                                                                      
        {
            finished = true;
            cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << eps << endl;
        }
        else
        {
            //                                                                  
            x -= dif/(2*x);
        }
    }
}

void test(double eps, double v)
{
    inclusion(eps, v);
    newton_raphson(eps, v);
    cout << endl << "----------------------------------------------------------" << endl;
}

int main()
{
    const double eps=0.1;
    test(eps, 0); //                                                                       
    test(eps, 1); //                                                                       
    test(eps, 0.5); //                                                                              
    test(eps, 4); //                                                                                                                                                     
    test(eps, 11); //                                                                                                                                                              
    return 0;

}

