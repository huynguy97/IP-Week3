#include <iostream>
#include <math.h>

/*
                         
                    
*/

/*                             

                     

           

                                                                         
                                                                  
                                          

                                    

           

                                                                                
                                                           
                                        
                                          

                                    

                                 

                   
          
          
                     
            
                          
              
                   
                        
             
                              
                
                                          

                                                         

                                                                              

                 
          
          
                   
          
                 
           
                                          

                                                    

                                                                 

                  
          
           
                    
          
                   
            
              
                   
          
                  
           
              
                     
            
                         
              
                  
                        
             
                             
                
                    
                          
              
                                
                 
                      
                               
               
                                   
                  
       

                                          

                                                       

                          

           

          
            
             
                 
                       
            
               
               
                 
                       
          
            
             
             
                   
                                          

                                                        

           

          
            
             
             
                   

                                          

                                                        

                                 

           
          
              
             
                   
                            
              

                                          

                                                             

                                                                              

         
          
             
             
                 
                        
              
            
               
             
                     
                            
                
       

                                          

                                                          

                                                                 

          
           
              
              
                  
                          
               
            
                
              
                     
                             
                
       

                                          

                                                           

*/

/*

                                  

          
         
         

         
         

           
         

         
         

          
         

               
         
         

         
         

           
         

         
         

          
         

*/

using namespace std;

//                                                                             
void inclusion(double e, double v) {
    double a = 0;
    double b = max(1.0, v);
    double x;
    int i = 0;

    //                                   
    if((a * a) == v) {
        cout << "\nInclusion square root of " << v << " is " << a << endl;
        cout << "i = " << i << "\t" << "ai = " << a << "\t" << "xi = " << (a + b)/2 << "\t" << "bi = " << b << "\n" << endl;
        return;
    }
    //                                   
    else if((b * b) == v) {
        cout << "\nInclusion square root of " << v << " is " << b << endl;
        cout << "i = " << i << "\t" << "ai = " << a << "\t" << "xi = " << (a + b)/2 << "\t" << "bi = " << b << "\n" << endl;
        return;
    }
    //                                                                                
    x = (a + b)/2;
    while(fabs((x * x) - v) > e) {
        x = (a + b)/2;
        if((x*x) < v) {
            a = x;
        }else {
            b = x;
        }
        i++;
    }
    cout << "\nInclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
    cout << "i = " << i << "\t" << "ai = " << a << "\t" << "xi = " << x << "\t" << "bi = " << b << "\n" << endl;
    return;
}

//                                                                            
void newton_raphson(double e, double v) {
    double func;
    double dfunc;
    double x = max(1.0, v);
    int i = 0;

    //                                                                                     
    while(fabs((x * x) - v) > e) {
        func = (x*x) - v;
        dfunc = 2*x;
        x = x - (func / dfunc);
        i++;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl;
    cout << "i = " << i << "\t" << "xi = " << x << "\n" << endl;
    cout << "=========================================\n" << endl;
    return;
}

int main()
{
    double e;
    double v;

    while(true) {
        do {
        cout << "Please enter an epsilon between 0 and 1: ";
        cin >> e;
        //                                 
        }while(e >= 1 || e <= 0);
        do {
        cout << "Please enter a positive number: ";
        cin >> v;
        //                                  
        }while(v < 0);
        inclusion(e, v);
        newton_raphson(e, v);
    }
}

