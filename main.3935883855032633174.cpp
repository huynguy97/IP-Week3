#include <iostream>
#include<math.h>
using namespace std;

//                      
//                      

/*
   
    
                                                                        
                    
    
                                                                           
                                                
                     
            
                    
                 
        
                  
               
              
                                                                             
                                                  
                              
*/

//   
void inclusion(double e, double v)
{
    double a = 0;
    double b = 1;
    int i = 0;          //                   
    if (v > 1)          //       
        b=v;
    double x = 0;
    cout << "i\ta\tx\tb\n"; //       
    while (fabs(x*x-v)>e)   //             
    {
        x = (a+b)/2;
        if (x*x<v)
            a=x;
        else
            b=x;
        cout << i << '\t' << a << '\t' << x << '\t' << b << endl; //                           
        i=i+1;
    }
    cout << "The inclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
}

void newton_raphson (double e, double v)
{
    double x=1;
    int i = 0;
    if (v>1)                //       
        x=v;
    cout << "i\tx\n";           //        
    while (fabs(x*x-v)>e)
    {
        x=x-((x*x-v)/(2*x));        //             
        cout << i << '\t' << x << endl; //       
        i=i+1;
    }
    cout << "The Newton-Raphson square root of " << v << " is " << x << " for epsilon " << e <<endl;
}

int main()
{
    cout << "Hello world!" << endl;
    double e,v;
    cout << "Enter a number you want the root of \n";
    cin >> v;
    cout << "Enter the precision of the approximation \n";
    cin >> e;
    inclusion(e,v);
    newton_raphson(e,v);
    return 0;
}

