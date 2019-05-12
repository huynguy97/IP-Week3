#include <iostream>
#include <cmath>
/*
         

                    

                         
                
                                                                    
              

                         
                
                                                                    
                                                             
                                   
              

                            
                
                                                                            
                                                                         
                                                                  
              

                       
                
                                                                         
                                                                        
                                                                      
                                    
              

                          
                
                                                                               
                                                                                              
                                                                                                
                                                                                                  
                                                                                                                 
                                                                                                                  
                      
                                         
              
*/
using namespace std;

void inclusion (double e, double v, int t)
{
    double a = 0;
    double b = max(v,1.0);

    if (a * a == v)
        {
        cout << " Inclusion square root of " << v << " is " << a << endl;
        cout << "i: " << t << "\t" << "a: " << a << "\t" <<"x: " << a << "\t" <<"b: " << b << endl;
        return;
        }
        if (b * b == v)
            {
            cout << " Inclusion square root of " << v << " is " << b << endl;
            cout <<"i: " << t << "\t" <<"a: " << a << "\t" <<"x: " << b << "\t" <<"b: " << b << endl;
        return;
        }
         double x = ((a + b)/2);
         while (abs(x * x - v) > e)
         {
                if(x * x < v)
                {
                    a = x;
                }
                else
                {
                    b = x;
                }
                x = ((a+b)/2);
         }
         cout << " Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
         cout << "i: " <<t << "\t" <<"a: " << a << "\t" <<"x: " << x << "\t" <<"b: " << b << endl;
         }
void test_inclusion ()
{
    cout << endl << "**********testing inclusion**********" << endl;
    double e = 0.1;
    int t = 1;
    while (e >= 0.00001)
    {
        inclusion(e,37.0, t);
        //                   
        //                   
        //                    
        //                           
        t++;
        e = e / 10;
        }
        cout << endl << "**********testing inclusion done**********" << endl;
}

void newton_raphson ( double e, double v, int t)
{
    double x = max(v,1.0);
    while(abs(x * x - v) > e)
    {
        x = x - (x * x - v)/(2 * x);
    }
    cout << "Newton_raphson square root of " << v << " is " << x <<" for epsilon " << e << endl;
    cout <<"i: " << t << "\t" <<"x: " << x << endl;
}

void test_newtonraphson()
{
    cout << endl << "**********testing newton_raphson**********" << endl;
    double e = 0.1 ;
    int t = 1;
    while (e >= 0.00001)
    {
        //                        
        newton_raphson(e,37.0,t);
        //                        
        //                         
        //                                
        t++;
        e = e / 10;
    }
    cout << endl << "**********testing newton_raphson done**********" << endl;
}

int main()
{
    test_inclusion();
    test_newtonraphson();
    return 0;
}

/*              
     
                                
                         
                                
                         
                                
                         
                                
                         
                                
                         

                                          

                                          
                                                       
            
                                                          
              
                                                            
               
                                                               
                 
                                                                
                  

     
                                
                         
                                
                         
                                
                         
                                
                         
                                
                         

                                          

                                          
                                                    
         
                                                     
         
                                                      
         
                                                       
         
                                                       
         

       
                                                    
                         
                                                         
                                       
                                                          
                                                
                                                           
                                                
                                                           
                                                

                                          

                                          
                                                         
            
                                                              
                
                                                               
                
                                                                
                
                                                                
                

      
                                                
                         
                                                 
                         
                                                  
                         
                                                   
                         
                                                   
                         

                                          

                                          
                                                           
               
                                                      
         
                                                       
         
                                                        
         
                                                        
         

      
                                                      
                               
                                                       
                               
                                                        
                               
                                                         
                              
                                                         
                               

                                          

                                          
                                                           
               
                                                            
               
                                                             
               
                                                              
               
                                                              
               

*/

