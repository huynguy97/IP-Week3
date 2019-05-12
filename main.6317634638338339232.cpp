#include <iostream>
//                   
#include <cmath>
using namespace std;
/*
        
                    
                      
                              
                       
                                                                        
                      
                              
                       
                                                                        
                        
                                                                   
            
                                                      
                 
                                                                   
             
                                                             
                    
                                                                                          
                            
                        
                                                                   
             
                                                       
                   
                                                                         
             
                                                       
                   
                                                                         
              
                                                         
                     
                                                                          
               
                                                           
                     
                                                                      
              
                                                         
                      
                                                                        
              
                                                         
                      
                                                                     
             
                                                       
                     
                                                                      
             
                                                       
                     
                                                                     
               
                                                            
                      
                                                                           
                
                                                           
                       
                                                                            
                    
                        
                                                                    
           
                
          
               
            
                 
             
                   
              
                    
               
                         
                
                          
                
                            
                
                            
                         
             
                                                              
            
                                                             
            
                                                                       
                      
             
                                                            
                      
               
                                                              
             
                                                                          
                  
               
                                                         
           
                                                         
                
                                                                 
                
                                                                 
                
                                                                  
                
                                                                             
                  
              
                                                        
             
                                                               
               
                                                                   
                
                                                                  
                
                                                                          
                  
*/
//                                                                                                                                 
int functionCall;
//                                                                                                   
double e;
//                                                                                                                                  
double v;

void inclusion(double e, double v)
{
    double a = 0;
    double b = 1;
    double x = 0;
    int i = 0;
    if (v>1) //                                     
        b = v;
    if(a*a == v || b*b == v) //                                 
    {
        if (a*a == v)
            cout << endl << "Inclusion square root of v is " << a;
        else
            cout << endl << "Inclusion square root of v is " << b;
        return; //                          
    }
    do //                                                                  
    {
        i++;
        cout << i << "\t" << a << "\t" << x << "\t" << b << endl;//                                          
        x = (a+b)/2;
        if (x*x < v)//                                    
            a = x;
        else//                                    
            b = x;

    }
    while (abs((x*x)-v) > e);//                                      
    i++;
    cout << i << "\t" << a << "\t" << x << "\t" << b << endl;//                                             
    cout << "Inclusion square root of v is " << x << " for epsilon " << e << endl;
}

void newton_raphson (double e, double v)
{
    double x = 1;
    int i = 0;
    if (v>1)//                                    
        x = v;
    while(abs(((x*x)-v) > e))//                                            
    {
        i++;
        cout << i << "\t" << x << endl;//                                                    
        x = (x - (((x*x)-v)/(2*x)));//                             
    }
    i++;
    cout << i << "\t" << x << endl;//                                                       
    cout << "Newton_raphson square root of v is " << x << " for epsilon " << e << endl;
}
void choose_a_function()
{
    do//                                           
    {
        cout << "Please choose an algorithm you want to try (1 for inclusion or 2 for Newton-Raphson)" << endl;
        cin >> functionCall;
    }
    while (functionCall != 1 && functionCall != 2);//                                                                
}

void choose_e()
{
     do//                                           
    {
        cout << endl << "Please give a value for epsilon such that it is 0<e<<1 " << endl;
        cin >> e ;
    }
    //                                                                             
    while (e >= 1 || e <= 0);//                                                                
}

void choose_v()
{
    do//                                           
    {
        cout << endl << "Please choose a nonnegative number you want the square root of " << endl;
        cin >> v;
    }
    while(v < 0);//                                                                
}

int main()
{
    choose_a_function();
    choose_e();
    choose_v();
    switch(functionCall)//                                                 
    {
        case 1: inclusion(e, v); break;
        case 2: newton_raphson(e, v); break;
    }
    return 0;
}
/*
   
                                                                                                   
                            
                                                                                  
                                                                                                   
                            
                                                                                                
                                                   
                                   
                                                   
                                   
                                                   
                                   

                                                                                     
*/

