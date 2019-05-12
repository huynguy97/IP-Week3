//                        
//                      

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void inclusion (double epsilon, double v)
{
    if (v<0) {
            cout << " Square root of a negative number doesn't exist " << endl;
            return;

    }

    double A = 0;
    double B;
    int i = 0;
    if (v > 1)  B = v;
    else B = 1;

    if (A*A ==v)
    {
        cout << "Inclusion of square root of " << v << " is " << A << endl;
        return;
    }

    if (B*B == v)
    {
        cout << "Inclusion of square root of " << v << " is " << B << endl;
            return;
    }

    double X = (A+B)/2;

    while (abs(X*X - v) > epsilon)
    {
        cout << i << "\t" << A << "\t" << "\t"<< X << "\t" << B << endl;
        if (X*X < v) A = X;
        else B = X;
        i = i +1;
        X = (A+B)/2;
    }
   //                                                                 
    cout << "Inclusion of square root of "<<v<<" is " << X << " for epsilon " << epsilon << endl;
    return;
}

void newton_raphson (double epsilon, double v)
{
    if (v<0) {
            cout << " Square root of a negative number doesn't exist " << endl;
            return;
    }

    double X;
    int i = 0;
    if (v < 1) X = 1;
    else X = v;

    if (v == 0) {
        cout << "Newton_Raphson square root of 0 is 0" << endl;
        return;
    }

    while (fabs(X*X -v ) > epsilon){
        cout << i << "\t" << X << endl;
        X = X - (X*X - v)/(2*X);
        i = i + 1;
     }
    //                               
    cout << "Newton_Raphson square root of "<<v<<" is " << X << " for epsilon " << epsilon << endl;
    return;
}

int main()
{
    double v;
    cout << "Give a number of which you want the root number: " << endl;
    cin >> v;

    return 0;
}

/*
                           

          
     
     
     
                                 
                                             

     
      
     
                            
              
                            
                                            

                  
      
     
                            
              
                            
               

                 
                                    
                              

                                                                 
      
             
                            
              
                            
                 

                 

                                             
                                    
                    

                                               
                                
                            

                                                     
                                        
                     

                                                           
                                        
                     

   

                    
      
     
                            
              
                            
                 

              
                         
                        

                         
                         
                                 
               

   

                 
              
     
              
                    

     
              
           
                       
                                      

                  
            
                  
                                                        
                                                             

                                                       
            
                                           
                                      
                                              

                    
                                                                     

                 
   
      

   
      

      
                                                          

         
             
              
                
                                                            

    
                                  
                                    
                                    
                                    
                                    
                                       
                                       
                                       
                                       
                                      
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                                      

          
          
               
               
               
               
                                                        

    
                                  
                                 
                                 
                                   
                                    
                                    
                                      
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                                           

          
           
               
               
               
                                                             

                                                                           
*/

