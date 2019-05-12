#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//                               
using namespace std;
//        
//                                 
//                                                                                                          
//                                                                                                                            
//                                                                                                                                                                                                                         
//                                                                                                                                                                                                                                   
//                                                                                                                                                                                                                           

    void inclusion (double e, double v)
    {
    double a0 = 0, xi=0, ai=0, bi=max(v, double(1)), b0 = max(v, double(1)); //                                
    int i=0; //                                        
    cout << "i" << "\t" << "ai" << "\t" << "xi" << "\t" << "bi" <<endl; //                             
    if (a0*a0 == v) //                                                                               
    {
        i=1;
        cout << i << "\t" << ai << "\t" << xi << "\t" << bi <<endl;
        cout << "Inclusion square root of " << v<< " is " << a0 << endl;
        return;
    }
    if (b0*b0 == v) //                                                                                      
    {
        i=1;
        cout << i << "\t" << ai << "\t" << xi << "\t" << bi <<endl;
        cout << "Inclusion square root of " << v << " is " << b0 << endl;
        return;
    }
    while (abs(xi * xi - v) >= e) //                                                                                                                           
    {
        xi=(ai+bi)/2;
        i=i+1;
        cout << i << "\t" << ai << "\t" << xi << "\t" << bi <<endl;
        if (abs(xi * xi - v) <= e) //                                                                                                           
        {
            cout << "Inclusion square root of " << v << " is " << xi << " for epsilon " << e << endl;
            return;
        }
        else if ((xi*xi)<v) //                                                                                                                                      
        {
            ai=xi;
        }
        else //                                                                                                                                               
        {
            bi=xi;
        }
    }
    }

    void newton_raphson (double e, double v) //                                                       
    {
        double xi= max(v,double(1)), funct=0 , funct_der=0; //                                
        int i=0; //                                
        cout << "i" << "\t" << "xi" << endl; //                                 
        if (v==0) //                                                                               
        {
            i=1;
            cout << i << "\t" << xi << endl;
            cout << "Newton_raphson square root of " << v << " is " << v << endl;
            return;
        }
        if (v==1) //                                                                                      
        {
            i=1;
            cout << i << "\t" << xi << endl;
            cout << "Newton_raphson square root of " << v << " is " << v << endl;
            return;
        }
        while (abs(xi * xi - v) >= e) //                                                       
        {
            i=i+1; //                            
            funct=xi*xi-v; //            
            funct_der=double(2)*xi; //                                   
            xi=xi-(funct/funct_der); //                          
            cout << i << "\t" << xi << endl; //                                                
        }
        cout << "Newton_raphson square root of " << v << " is " << xi << " for epsilon " << e << endl;
    }

int main()
{
    double v=0;
    double e=0;

    cout << "Enter value for v: " <<endl;
    cin >> v;
    cout << "Enter value for e: " <<endl;
    cin >> e;
    inclusion(e,v); //                                                                    
    newton_raphson (e,v); //                                                                          
}

