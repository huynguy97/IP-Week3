#include <iostream>
#include <cmath>

using namespace std;

//                                 
//                                 

void inclusion (double e, double v)
{
    double a = 0;                   //              
    double b;

    if (v >= 1)                     //                          
        b = v;
    else
        b = 1;

    if(a*a==v)                      //              
    {
        cout <<"Inclusion square root of " << v << " is " << a << " for epsilon " << e <<  endl;
        return ;
    }

    if(b*b == v)                    //              
    {
        cout <<"Inclusion square root of " << v << " is " << b << " for epsilon " << e <<  endl;
        return ;
    }

    double x =(a+b)/2;              //         

    for (int i=1; abs(x*x - v) >= e; i++)       //                                                                                                                               
    {
        if (x*x<v)
            a = x;
        else
            b = x;
        x =(a+b)/2;
        cout << i << "\t" << a << "\t" << x << "\t" << b << endl; //                          
    }
    cout <<"Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl; //                  
    return ;

}

void newton_raphson ( double e, double v)
{
    double x;       //         
    if (v >= 1)     //                     
        x = v;
    else
        x = 1;

    for (int i=1; abs(x*x-v) >= e; i++)     //                  
    {
        x = x - (x*x-v)/(2*x);              //                                      
        cout<< i << "\t" << x << endl;      //                          
    }
    cout << "Newton_raphson square root of " << v << " is " << x <<  " for epsilon " << e << endl; //       
    return;

}

int main()
{   //                                                             
    inclusion(0.1,1);               //                    
    inclusion(0.1,0);               //                    
    inclusion(0.1,0.666);           //                    
    inclusion(0.1,9);               //                    
    inclusion(0.1,69);              //                     
    newton_raphson(0.1,1);          //                    
    newton_raphson(0.1,0);          //                    
    newton_raphson(0.1,0.666);      //                    
    newton_raphson(0.1,9);          //                    
    newton_raphson(0.1,69);         //                    

    return 0;
}

