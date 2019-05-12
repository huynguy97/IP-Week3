//                                              

#include <iostream>
#include <cmath>

using namespace std;

void inclusion(double e, double v)
{
    double a = 0;
    double b = max (1.0, v);
    double x = (a + b) / 2;
    int i = 0;

    if (a * a == v)
    {
        cout << "Inclusion square root of " << v << " is " << a << endl;
        return;
    }

    if (b * b == v)
    {
        cout << "Inclusion square root of " << v << " is " << b << endl;
        return;
    }

    while (abs(x * x - v) > e)
    {
        if (x * x < v)
            a = x;
        else
            b = x;

        x = (a + b) / 2;
        i++;
    }

    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e <<
            "| Number of iterations = " << i << " with values a = " << a << " and b = " << b << endl;
}

void test_inclusion()
{
    cout << endl << "******** testing inclusion ********" << endl;

    double e = 0.1 ;

    while (e >= 0.00001)
    {
        inclusion (e, 0.0);
        inclusion (e, 1.0);
        inclusion (e, 0.6);
        inclusion (e, 36.0);
        inclusion (e, 333333.3333);
        e = e / 10;
    }

    cout << endl << "******** testing inclusion done ********" << endl;
}

void newton_raphson(double e, double v)
{
    double x = max (1.0, v);
    int i = 0;

    while(abs(x * x - v) > e)
    {
        x = x - (x * x - v) / (2 * x);
        i = i + 1;
    }

    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e <<
            "| Number of iterations = " << i << " with value x = " << x << endl;
}

void test_newton_raphson()
{
    cout << endl << "******** testing newton_raphson ********" << endl;

    double e = 0.1 ;

    while (e >= 0.00001)
    {
        newton_raphson (e, 0.0);
        newton_raphson (e, 1.0);
        newton_raphson (e, 0.6);
        newton_raphson (e, 36.0);
        newton_raphson (e, 333333.3333);
        e = e / 10;
    }

    cout << endl << "******** testing newton_raphson done ********" << endl;
}

int main()
{
test_inclusion();
test_newton_raphson();
return 0;
}

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

