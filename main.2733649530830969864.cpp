//                                 
//                                                 
//                                                   

//             

#include <iostream>
#include <math.h>
using namespace std;

//                                                                                       
double inclusion (double e, double v)
//               
//                                                         
//                                           

//                
//                                                                            

{
    double a = 0;
    double b = max(v,1.0);
    double x = (a+b)/2;
    int i = 0;

    cout << "\n1.2 Inclusion: \n" << "i\ta\tx\tb \n" << i << "\t" << a << "\t" << x << "\t" << b << endl;

    if (a*a == v || b*b == v) //                                            
    {
        cout << "Inclusion square root of " << v << " is " << v << endl;
        return v;
    }

    else
    {
        while (fabs(x*x-v)>e)
        {
            if (x*x<v)
            {
                a = x;
            }
            else
            {
                b = x;
            }
            x = (a+b)/2;
            i++;
            cout << i << "\t" << a << "\t" << x << "\t" << b << endl;
        }
        cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
        return x;//                                            
    }
}

//                                                                                            
double newton_raphson (double e, double v)
//               
//                                                         
//                                           

//                
//                                                                            
{
    double x = max(v,1.0);
    int i = 0;
    cout << "\n\n1.3 Newton_raphson: \n" << "i\tx" << endl;
    cout << i << "\t" << x << endl;

    if (v == 0 || v == 1) //                                            
    {
        cout << "Newton_rhapson square root of " << v << " is " << v << endl;
        return v;
    }

    while (fabs(x*x-v)>e)
    {
        x = x-(x*x-v)/(2*x); //                                                                     
        i++;
        cout << i << "\t" << x << endl;
    }

    cout << "Newton_rhapson square root of " << v << " is " << x << " for epsilon " << e << endl;
    return x;
}

int main()
{
    cout << "Give a value for v: ";
    double v;
    cin >> v;
    cout << "Give a value for epsilon: ";
    double e;
    cin >> e;

    inclusion (e, v);
    newton_raphson (e, v);

    return 0;
}
/*
             

    

              
                         
                         
                               

                   
         
         
                                    

    

              
                         
                         
                               

                   
         
         
                                    

      

              
                         
                         
                                                   

                   
         
         
            
                              
                         
                          
                            
                            
                            
                              
                              
                              
                                                      

                   
         
          
          
               
              
               
               
                                                           
                                                             

     

              
                         
                          
                            
                            
                            
                            
                               
                               
                               
                               
                              
                                                      

                   
         
          
          
               
               
               
               
                                                           

     

              
                         
                          
                            
                            
                            
                              
                              
                              
                                                      

                   
         
          
          
               
              
               
               
                                                           
*/

