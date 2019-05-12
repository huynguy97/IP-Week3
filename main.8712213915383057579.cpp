#include <iostream>
#include <math.h>
using namespace std;

//                      
//                              

//                                                                                         
void calculating(double a, double b, double v, double e)
{
    double x = (a+b)/2;

    int i = 1;

    while(fabs(x*x-v)> e)
    {
    if(x*x > v)
        b = x;
    else
        a = x;
    x = (a+b)/2;

    cout << i << "\t" << a << "\t" << x << "\t"<< b << "\n";
        i++;
    }
cout << "inclusion square root of " << v << " = " << x << " for epsilon " << e;
}
//                                                                                                   
void checking (double a, double b, double v, double e)
{
    if(a*a == v)
        cout << "inclusion square root of " << v << " = " << a << " for epsilon " << e << "\n";
    else if(b*b == v)
        cout << "inclusion square root of " << v << " = " << b << " for epsilon " << e << "\n";
        else
        {
            calculating(a,b,v,e);
        }
}
//                                                                             
void inclusion ()
{
    double e = 0.1;
    double v;
    cin >> v;
    double a = 0;
    double b;
    if(v > 1)
        b=v;
    else
        b=1;
    checking(a,b,v,e);
}
//                                                                         
void newton_raphson ()
{
    double e = 0.1;
    double v;
    cin >> v;
    double x;
    if(v > 1)
        x=v;
    else
        x=1;

    int i = 1;

    while(fabs(x*x-v) > e)
    {
        x = x-(x*x-v)/(2*x);
        cout << i << "\t"<< x << "\n";
        i++;
    }
    cout << (x*x-v) << "  " << e << "\n";
    cout << "Newton-raphson square root of " << v << " = " << x << " for epsilon " << e << "\n";
}
//                                                                      
int main()
{
    cout << "Give a positive value v: \n";
    inclusion();
    cout << "\nGive a positive value v: \n";
    newton_raphson ();
    return 0;
}

/*
        

          

           
         
         
              
              

           
          
          
               
               
               

              
           
          
          
               
               

                      
                           
             

               
           

                         
                          
               

               
           

                             
                       
               

           
          
           
               
               

                      
                       
            

               
           

                       
                      
           

               
           

                      
                         
              

               
           

                         
                          
               

               
           

                             
                            
                 

               
           

                                
                             
                  

               
           

                                   
                               
                    

                       
           

                                      
                                
                     

               
           

                                         
                                
                     

               
           

                                            
                                
                     

               
           

                                                
                                   
                       
                

           
          
           
               
               

                       
                         
              

               
           

                         
                      
               

            
           

                             
                        
                 

             
           

                                
                        
                  

             
           

                                  
                           
                    

             
           

                                      
                           
                     

             
           

                                        
                           
                     

             
           

                                          
                           
                     

             
           

                                            
                             
                      
               

      
          
          
                  
          

                                          
                    
             

                                                
                      
               
               

          
          
                 
          
               

            
          
                    
            

                                                  
                    
             

                                                    
                      
               

                                                             
                           
                    

                                                                                     
                           
                    

                                                                                 
                           
                    

                                                                               
                           
                    

                                                                               
                            
                     

                                                                                    
                             
                      
               

           
           
                     
             

                                                
                      
               

                                                           
                           
                    

                                                                                 
                           
                    

                                                                                 
                            
                     

                                                                                  
                             
                      
               

           
           
                    
            

                                            
                  
           

                                                
                                 
                          

                                                                                
                            
                     

                                                                                 
                              
                       
               

*/

/*        
         
     
     
  
   
  

              
  
  
  
  
  

                                               
*/

