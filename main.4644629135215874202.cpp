#include <iostream>
#include <cmath>

using namespace std;

//                                               
//                                                     

/*
                                            

         
                                                     
                                                     
                                                     
                                                     
                                                        

              
                             
                             
                                
                             
                             
*/

//                                                    
void inclusion()
{
    double v;
    double e;
    double x;
    double a = 0;
    double b;

//                                      
    cout << "\n Function inclusion";
    cout << "\n insert a V: ";
    cin >> v;
    cout << "insert an E: ";
    cin >> e;

//                             
    while(v < 0)
    {
        cout << "V needs to be positive!\n";
        cout << "insert a V: ";
        cin >> v;
    }

    while(e <= 0)
    {
        cout << "E needs to be positive!\n";
        cout << "insert a E: ";
        cin >> e;
    }

//                                                           
    if(v > 1)
    {
        b = v;
    }
    else
    {
        b = 1;
    }

//                                                                            
    if((a*a) == v)
    {
        cout << "Inclusion square root of v is " << a;

    }
    else if((b*b) == v)
    {
         cout << "Inclusion square root of v is " << b;

    }

//                                                                                           
    else
    {
        x = (a+b)/2;
        while( abs((x*x)-v) >= e)
        {
            if((x*x) < v)
            {
                a = x;
            }
            else
            {
                b = x;
            }

            x = (a+b)/2;
        }

//                                              
        cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e;
    }
}

//                                                         
void newton_raphson()
{
    double v;
    double e;
    double x;

//                                      
    cout << "\n Function newton_raphson";
    cout << "\n insert a V: ";
    cin >> v;
    cout << "insert an E: ";
    cin >> e;

//                             
    while(v < 0)
    {
        cout << "V needs to be positive!\n";
        cout << "insert a V: ";
        cin >> v;
    }

    while(e <= 0)
    {
        cout << "E needs to be positive!\n";
        cout << "insert a E: ";
        cin >> e;
    }

//                                                                
    if(v > 1)
    {
        x = v;
    }
    else
    {
        x = 1;
    }

//                                                             
    while(abs((x*x)-v) >= e)
    {
        x = x-(((x*x)-v)/(2*x));
    }

//                                              
    cout <<  "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e;
}

//                               
int main()
{
    inclusion();
    newton_raphson();
    return(0);

}

