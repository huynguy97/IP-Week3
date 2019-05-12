#include <iostream>
#include <cmath>

using namespace std;

/*
                       
                            

             
             

                  
 
 
     
   
  

          

   
                                     
                                   
           

   
                                     
                                   
           

       
                                     
                                  
                                   
                  

     
                                     
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                   
                   

    

                                       
                                       
                                       
                                       
                                      
                                     
                                    
                                   
                                  
                                 
                                
                               
                              
                             
                            
                           

                                     
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                   
                  

               

   
                     
                  
                  
                   
              

   
                     
                   
           

       
                     
                  
                  
                   
                     

     
                     
                  
                  
                  
                  
                  
                  
                   
                   

    

                                       
                                       
                                       
                                       
                                      
                                     
                                    
                                   
                                  
                                 
                                
                               
                              
                             
                            
                           

                     
                  
                  
                  
                  
                  
                   
                  
*/

void inclusion(double epsilon, double v)
{
    double a = 0;
    //                              
    double b = v;
    if (b < 1)
        b = 1;
    double x = (a + b) / 2; //                   
    int i = 0;

    //                                                         
    if (abs(a * a - v) <= epsilon)
    {
        cout << "Inclusion square root of v is " << a << " for epsilon " << epsilon << "\t";
        cout << i << "\t" << a << "\t" << x << "\t" << b;
        return;
    }
    if (abs(b * b - v) <= epsilon)
    {
        cout << "Inclusion square root of v is " << b << " for epsilon " << epsilon << "\t";
        cout << i << "\t" << a << "\t" << x << "\t" << b;
        return;
    }

    while (abs(x * x - v) > epsilon)
    {
        //                                                   
        if (x * x < v)
            a = x;
        else
            b = x;

        x = (a + b) / 2;
        i++; //                                          
    }
    cout << "Inclusion square root of v is " << x << " for epsilon " << epsilon << "\t";
    cout << i << "\t" << a << "\t" << x << "\t" << b;
    return;
}

void newton_raphson(double epsilon, double v)
{
    //                              
    double x = v;
    if (x < 1)
        x = 1;
    int i = 0;

    //                                                 
    while (abs(x * x - v) > epsilon)
    {
        //                 
        //              
        x = x - (x * x - v) / (2 * x);
        i++;
    }
    cout << "\nNewton_raphson square root of v is " << x << " for epsilon " << epsilon << "\t";
    cout << i << "\t" << x;
    return;
}

int main()
{
    //                                          
    double v;
    double epsilon;

    //                                               
    do
    {
        cout << "Please only enter positive numbers.\n";
        cout << "What is the value of v? ";
        cin >> v;
        cout << "What is the value of epsilon? ";
        cin >> epsilon;
    }
    while (v < 0 || epsilon <= 0); //            
    //                                     
    //                                                
    if (epsilon > 1)
        cout << "Warning: epsilon > 1, approximations could be bad.";
    inclusion(epsilon, v);
    newton_raphson(epsilon, v);
    return 0;
}

