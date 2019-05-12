//                                

/*                  
               
          
                  
                                 
                                        
                                
                       
                          
                                            
                                                     
                                                       
                                                     
                                                                  
                                                       
                                                
         
                  
                    
                
                                
                       
             
                                  
                                             
           
                 
                    
               
                                       
                                
                   
                                                      
                       
             
                                     
                                            
                                       
                                                      
         
                 
                             
                                     
                                
           
                                                   
                    
                                                          
                       
                      
                      
                        
           
                                 
                                                             
          
                 
                                      
           
                                                           
                                                           
                       
                       
           
                                 
                                                             
*/

/*                              
               
                 
                  
         
                  
                             
                     

                       
             
               
                
                    

         
                  
                             
                     

                       
             
                     

           
                  
                             
                             
                     

                       
             
                
                     
         
                  
                             
                               
                               
                                 
                                 
                                   
                                   
                                   
                      

                                    
             
             
               
                   
                   
                      

          
                  
                              
                              
                               
                               
                               
                                  
                                  
                                  
                                   
                     

                       
              
                
                   
                   
                   
                     

                                                                                    
*/

#include <iostream>

using namespace std;

void inclusion_message(int index, double value);
void inclusion (double e, double v);
void newton_raphson_message (double value, double result, double epsilon);
void newton_raphson (double e, double v);

int main()
{
    inclusion(0.005, 36);
    newton_raphson(0.005, 36);
    return 0;
}

void inclusion_message(int index, double value, double result, double epsilon)
{
    switch(index)
    {
    case 0:
        cout << "Inclusion square root of " << value << " is " << result << ".\n";
        break;
    case 1:
        cout << "Inclusion square root of " << value << " is " << result << " for epsilon " << epsilon << ".\n";
        break;
    default:
        cout << value << endl;
    }
}

//                                    

void inclusion (double e, double v)
{
    double a = 0;
    double b;
    if( 1 < v)
        b = v;
    else
        b = 1;

    if (a * a == v)
    {
        inclusion_message (0, v, a, e);
        return;
    }
    else if (b * b == v){

        inclusion_message (0, v, b, e);
        return;
    }

    double xi = (a + b) / 2;

    bool is_close_enough = (xi * xi - v < 0 && v - xi * xi <= e) || (xi * xi - v >= 0 && xi * xi - v <= e);

    while (!is_close_enough){
        if(xi * xi < v){
            a = xi;
        }
        else
        {
            b = xi;
        }
        xi = (a + b) / 2;
        is_close_enough = (xi * xi - v < 0 && v - xi * xi <= e) || (xi * xi - v >= 0 && xi * xi - v <= e);
    }
    inclusion_message(1 , v, xi, e);
}

void newton_raphson_message (double value, double result, double epsilon)
{
    cout << "Newton_raphson square root of " << value << " is " << result << " for epsilon " << epsilon << ".\n";
}

void newton_raphson (double e, double v)
{
    double xi;
    if( 1 < v)
        xi = v;
    else
        xi = 1;

    bool is_close_enough = (xi * xi - v < 0 && v - xi * xi <= e) || (xi * xi - v >= 0 && xi * xi - v <= e);
    while (!is_close_enough){
        xi = xi - (xi * xi - v)/(2 * xi);
        is_close_enough = (xi * xi - v < 0 && v - xi * xi <= e) || (xi * xi - v >= 0 && xi * xi - v <= e);
    }
    newton_raphson_message(v, xi, e);
}

