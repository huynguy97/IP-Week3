#include <iostream>
#include <cmath>

using namespace std;

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
void inclusion(double e, double v)
{
    double a = 0;
    double b = 1;

    if(v > b)
    {
        b = v;
    }

    double x = (a + b) / 2;

    while(fabs(x * x - v) > e)
    {
        if(a * a == v)
        {
            cout << "Inclusion square root of " << v << " is " << a << endl;
            return;
        }

        if(b * b == v)
        {
            cout << "Inclusion square root of " << v << " is " << b << endl;
            return;
        }

        x = (a + b) / 2;

        if(x * x < v)
        {
            a = x;
        }
        else
        {
            b = x;
        }
    }

    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
}

//         
//                                                                                            
void newton_raphson(double e, double v)
{
    double x = 1;
    if(v > x)
        x = v;

    while(fabs(x * x - v) > e)
    {
        x = x - (x * x - v) / (2 * x);
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e <<  endl;
}

int main()
{
    cout << "Enter a number to find the square root of:" << endl;
    double number;
    cin >> number;

    cout << "Enter a value for epsilon:" << endl;
    double epsilon;
    cin >> epsilon;

    inclusion(epsilon, number);
    newton_raphson(epsilon, number);
    return 0;
}

