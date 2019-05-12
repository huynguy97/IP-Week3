#include <iostream> //          
#include <cmath> //    

using namespace std;

/*
                         
                  

                     
                  

*/

/*
                                                                                          
                                        

              

         

         

       
     
     
         
                          

         

                               

            

       
       
                 
         
                                                    

         

       
       
                 
         
       
         
                   
         
          
         
                      
         
          
           
                        
         
            
           
                          
         
            
             
                            
         
             
             
                             
         
             
             
                             
         
                                                     

          

       
        
                  
         
       
          
                    
         
       
           
                     
         
           
           
                         
         
           
            
                          
         
           
             
                           
         
           
             
                           
         
             
             
                             
         
             
             
                             
         
             
             
                             
         
              
              
                              
           
              
              
                              
           
                                                      

              

         

       
                           
             
                              
              
                                                       

         

       
                                                    

            

       
                                 
                  
                                    
                   
                                                            

         

       
                     
           
                           
             
                                       
                 
                                       
                 
                                                          

          

       
                        
             
                                       
                  
                                       
                  
                                       
                  
                                    
                 
                                                          

                                                                                                    
                                              

              

         

                 
                    
                 
                    
                    
                           
                 
                           
                           
                             
                             
                               
                               
                               
                               
                  
                            
                             
                             
                              
                               
                               
                               
                               
                               
                               
                               
                               

              

                      
         
         

                      
             

                         
         
         

                      
         
         
         
         

                       
         
         
         
         
         

                                                                                                                                                    
                                                                                                                                             
          
*/

//                                                                                  
void inclusion(double e, double v) {
    double a_i = 0;
    double x_i = 0;
    double b_i = 0;
    double i = 0;
    //               
    if(v < 0)
        cout << "Invalid value of v." << endl;
    //                                  
    if(v < 1)
        b_i = 1;
    else
        b_i = v;
    //                                                                               
    if(a_i * a_i == v) {
        cout << "Inclusion square root of " << v << " is " << a_i << endl;
        return;
    } else if (b_i * b_i == v) {
        cout << "Inclusion square root of " << v << " is " << b_i << endl;
        return;
    }
    //                                                                 
    while (abs(x_i * x_i - v) > e) {
        x_i = (a_i + b_i) / 2;
        if(x_i * x_i < v)
            a_i = x_i;
         else
            b_i = x_i;
        cout << i << '\t' << a_i << '\t' << x_i << '\t' << b_i << endl;
        i++;
    };
    //                 
    cout << "Inclusion square root of " << v << " is " << x_i << " for epsilon " << e << endl;
}

//                                                                                       
void newton_raphson(double e, double v) {
    double i = 0;
    double x_i = 0;
    //                                 
    if(x_i < 1)
        x_i = 1;
    else
        x_i = v;
    //                                                
    while (abs(x_i * x_i - v) > e) {
        x_i = x_i - (x_i * x_i - v) / (2*x_i);
        cout << x_i << '\t' << i << endl;
        i++;
    }
    cout << "Newton_raphson square root of " << v << " is " << x_i << " for epsilon " << e << endl;
}

int main()
{
    inclusion(0.1, 9);
    newton_raphson(0.1, 9);
    return 0;
}

