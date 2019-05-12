#include <iostream>
#include <cmath> //                                                                                                                     

//                                                                                                                                                                             
//                                                                                                                          

//                                                                                          

//                                          

using namespace std;

double v;
double e = 0.1;

void inclusion (double eps, double v)
{
    bool finished = false;
    double a = 0.0;
    double b = 1.0;

    if(b < v) b = v;

    if((a * a) == v)
    {
        cout << "Inclusion square root of " << v << " is: " << a << endl;
        finished = true;
    }

    if((b * b) == v && !finished)
    {
        cout << "Inclusion square root of " << v << " is: " << b << endl;
        finished = true;
    }

    while(!finished)
    {
        double x = (a + b)/2;
        if(abs(x * x - v) <= eps)
        {
            cout << "Inclusion square root of " << v << " is: " << x << " for epsilon: " << eps << endl;
            finished = true;
        }
        if(x * x < v) a = x;
        else b = x;
    }
}

void newton_raphson(double eps, double v)
{
    int i = 0;  //                    
    bool finished = false;
    double x = 1;
    if (x < v) x = v;

    while(!finished)
    {
        if(abs(x * x - v) <= eps)
        {
            cout << "Newton_raphson square root of " << v << " is: " << x << " for epsilon: " << eps << endl;
            finished = true;
        }

        x = x - (x * x - v) / (2 * x);
        i++;
    }
}

int main()
{
    cout << "Enter a v: ";
    cin >> v;
    cout << endl;
    inclusion(e,v);
    newton_raphson(e,v);
    return 0;
}

/*
                                                                                                                     
                                                                                                                     
                                                                                                                     

             

        

                       
                                 
                                

               

         
           
            
                                                         

             

        

                       
                                 
                                

               

         
                                                      

               

        

                         
                         
                                                      

               

         
            
                                                           

              

        

                          
                            
                            
                            
                            
                               
                               
                               
                               
                              
                                                        

               

          
          
               
               
               
               
                                                             

              

        

                          
                            
                             
                             
                               
                               
                               
                               
                               
                                                        

               

          
          
               
               
               
               
                                                             

                                                                                                                     
                                                                                                                     
                                                                                                                     

                                                                                                                                                                                                     
                   
                                                                                                                                                                                    
                                                                                                                                                                                          
*/

