/*
                                                           
                          
                      
*/
#include <iostream>
#include <math.h>

using namespace std;

/*                   
                        

            

                            
                                        

                    
                      
                       
                                                

            

                             
                                        

                     
                                             

              

                                      
                                           
                                             
                                                   
                                              

                    
                       
                                                  

            

                                    
                                        

                    
                      
                       
                          
                                                   

             

                                     
                                    
                                      
                                         
                                           
                                                
                                                   
                                              

                     
                      
                          
                          
                          
                                                    

*/

double inclusion(double epsilon, double v)
{
    double a, b, x;
    int i;

    a = 0;
    i = 0;

    if(v >= 1)
        b = v;
    else
        b = 1;

    if(fabs(a * a - v ) <= epsilon)
    {
        cout << "i = " << i << "\t" << "\t" << " v = " << v << "\t" << "\t" << " a = " << a << "\t" << "\t" << " b = " << b << endl;
        return a;
    }

    if(fabs(b * b - v ) <= epsilon)
    {
        cout << "i = " << i << "\t" << "\t" << " v = " << v << "\t" << "\t" << " a = " << a  << "\t" << "\t" << " b = " << b << endl;
        return b;
    }

    x = (a + b) / 2;

    while(fabs(x * x - v) > epsilon)
    {
        cout << "i = " << i << "\t" << "\t" <<  " v = " << v << "\t" << "\t" << " a = " << a << "\t" << "\t" << " b = " << b << "\t" << "\t" << " x = " << x << endl;

        if((x * x) < v)
        {
            a = x;
            i++;
        }
        else
        {
            b = x;
            i++;
        }

        x = (a + b) / 2;
    }

    cout << "i = " << i << "\t" << "\t" << " v = " << v << "\t" << "\t" << " a = " << a << "\t" << "\t" << " b = " << b << "\t" << "\t" << " x = " << x << endl;

    return x;

}

double newton_raphson(double epsilon, double v)
{
    double x;
    int i;

    i = 0;

    if(v >= 1)
        x = v;
    else
        x = 1;

    cout << "i = " << i << "\t" << "\t" << " x = " << x << endl;

    while(fabs(x * x - v) > epsilon)
    {
        x = x - (((x * x) - v)/(2 * x));
        i++;
        cout << "i = " << i << "\t" << "\t" << " x = " << x << endl;
    }
    return x;
}

int main()
{
    double epsilon, result, result_2, v;

    cout << "Enter your v and epsilon: ";
    cin >> v >> epsilon;

    cout << endl;

    result = inclusion(epsilon, v);

    cout << "\nInclusion square root of " << v << " is " << result << " for Epsilon " << epsilon << endl ;

    cout << "\n\n==========================================================\n\n";

    result_2 = newton_raphson(epsilon, v);

    cout << "\nNewton_raphson square root of " << v << " is " << result_2 << " for Epsilon " << epsilon  << endl;

    return 0;
}

/*
                          
  
         
                                                          

                                                   

                                                              

                          
                            
                             

                                                           

  
         
                                                          
                                                   

                                                              

                          

                                                        

  
           
                                                                                    
                                                                                     

                                                        

                                                              

                          
                             

                                                             

  
         
                                                                          

                                                   

                                                              

                          
                            
                             
                                

                                                              

  
          
                                                                          
                                                                          
                                                                            
                                                                             
                                                                              
                                                                               
                                                                                

                                                           
                            
                                
                                
                                                          

                                                              

                           
                            
                                
                                
                                

                                                               

               
                                                                                                                                                                                    
*/

