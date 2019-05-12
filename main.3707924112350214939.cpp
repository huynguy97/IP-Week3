#include <iostream>
#include <math.h>

//                              
//                              

using namespace std;

//                                                                                       
//                      
void inclusion(double epsilon, double v)
{
    int i = 0;
    if(v == 0.0)
    {
        std::cout << "Inclusion square root of " << v << " is 0.0" << endl;
    }
    else if(v == 1.0)
    {
        std::cout << "Inclusion square root of " << v << " is 1.0" << endl;
    }
    else
    {
        double a = 0.0;
        double b = 1.0;

        if(b < v)
            b = v;
        double x = (a + b) / 2.0;
        while(fabs(x * x - v) > epsilon)
        {
            if(x * x > v)
                b = x;
            else
                a = x;
            x = (a + b) / 2.0;
            std::cout << i << "\t" << a << "\t" << x << "\t" << b << "\t" << endl;
            i++;
        }
        std::cout << "Inclusion square root of  " << v << " is " << x << " for epsilon " << epsilon << endl;
    }
}

//                                                                                            
//                      
void newton_raphson(double epsilon, double v)
{
    int i = 0;
    double x = 1;
    if(v > x)
        x = v;
    while(fabs(x * x - v) > epsilon)
    {
        x = x - (x - v / x) / 2;
        std::cout << i << "\t" <<  x << "\t" << endl;
        i++;
    }
    std::cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << epsilon << endl;
}

int main()
{
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
    newton_raphson(0.00001, 0.0);
    //                             
    return 0;
}

//    
/*
          
                  

                  

           
                                  

        
                                

               
        
     
                             
              
                                     
                
                                         
                  

     
     
           

     
     
            
                           
            
                             
              
                                    
              
                                          
                
*/

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

