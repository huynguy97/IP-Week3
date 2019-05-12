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

void inclusion (double e, double v)
{
    double a_i = 0;
    double b_i = 1;
    if(v>1)
        b_i = v;
    double x_i=(a_i+b_i)/2.0;

    if(a_i*a_i==v)
        cout<<"Inclusion square root of v is "<<a_i<<endl;
    else if(b_i*b_i==v)
        cout<<"Inclusion square root of v is "<<b_i<<endl;
    cout<<"Approximation 1: x_0 = "<<x_i<<"\t"<<"a_0 = "<<a_i<<"\t"<<"b_0 = "<<b_i<<endl;
    for(int i=1; fabs((x_i*x_i)-v) > e; i++)
    {
        if(x_i*x_i<v)
            a_i=x_i;
        else
            b_i=x_i;
        x_i=(a_i+b_i)/2.0;
       cout<<"Approximation "<<i<<": x_"<<i<<" = "<<x_i<<"\t"<<"a_"<<i<<" = "<<a_i<<"\t"<<"b_"<<i<<" = "<<b_i<<endl;
    }
    cout<<"Inclusion square root of v is "<<x_i<<" for e = "<<e<<endl;
}

//                                                                  

void newton_raphson (double e, double v)
{
    double x_i=1;
    if(v>1)
        x_i = v;
    double f = (x_i*x_i) - v;
    double f_deriv = 2*x_i;
    cout<<"Approximation 1: "<<"x_0 = "<<x_i<<"\t"<<"i = 0"<<endl;
    for(int i=1; fabs((x_i*x_i)-v) > e; i++)
    {
        x_i=x_i-(f/f_deriv);
        f = (x_i*x_i) - v;
        f_deriv = 2*x_i;
        cout<<"Approximation "<<i+1<<": "<<"x_"<<i<<" = "<<x_i<<"\t"<<"i = "<<i<<endl;
    }
    cout<<"Newton_Rhapson square root of v is "<<x_i<<" for e = "<<e<<endl;
}

//                                   
//
//                                                                                                                                   
//                                                                                                            
//                                                                     

int main()
{
    double v;
    cout<<"Choose a number: ";
    cin>>v;
    cout<<endl;
    inclusion(0.1, v);
    cout<<endl;
    newton_raphson(0.1, v);
    return 0;
}

