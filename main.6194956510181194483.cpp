//            
//                                       

#include <iostream>
#include <cmath> //                                        

using namespace std;

/*
         

         
                     
                       
                            
                       
                           

              
                        
                       
                            
                           
                           
*/

double nu;
double epsilon;

void inclusion (double epsilon, double nu)
{
    double a = 0;
    double b = 1;
    double x;
    int i = 0;

    if (nu >= 1)
        b = nu;

    if (a*a == nu) //                                      
        cout <<  "Inclusion square root of " << nu << " is " << a << endl;
    else if (b*b == nu)
        cout <<  "Inclusion square root of " << nu << " is " << b << endl;
    else
    {
        x = (a+b)/2;
        while( abs(x*x - nu) >= epsilon) //                                                               
        {
            cout << i << "\t" << a << "\t" << x << "\t" << b << endl; //                        
            i++;
            if( x*x< nu )
            {
                a=x;b=b;
            }
            else
            {
                a=a;b=x;
            }
            x = (a+b)/2;
        }
        cout << i << "\t" << a << "\t" << x << "\t" << b << endl; //                        
        cout <<  "Inclusion square root of " << nu << " is " << x << " for epsilon " << epsilon << endl;
    }
    return;
}

void NewtonRapson (double epsilon, double nu)
{
     double x = 1;
     int i = 0;
     if (nu >= 1)
        x = nu;

    while( abs(x*x - nu) >= epsilon ) //                                                     
    {
        cout << i << "\t" << x << endl; //                        
        i++;
        x = x - (x*x - nu)/(2*x);
    }
    cout << i << "\t" << x << endl; //                            
    cout <<  "Newton-Rapson square root of " << nu << " is " << x << " for epsilon " << epsilon << endl;
    return;
}

int main()
{
    cout << "Enter the value you want to know the square root of...." << endl;
    cin >> nu;
    cout << "Enter the precision of the approximation epsilon..." << endl;
    cin >> epsilon;
    inclusion( epsilon , nu );
    NewtonRapson( epsilon , nu );
}

/*
         
                                                                                           
                                       
                                                                
                                                                                                              
                                                                                                         
*/

