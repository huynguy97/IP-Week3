#include <iostream>
#include <cmath>
using namespace std;

//                                                               
//                                                       

/*                       

          

   
                            

   
                            

     
                              

   
                               

    
                            

              
                                         

   
                                                   

   
                            

     
                              

   
                               

    
                            
*/

void inclusion (double eps, double v)
{
    double a = 0;
    double b = 1;
    if (v>=1)
       {
          b=v;
          cout<<"b is" << b << endl;
       }
    if (a*a == v)
        {
            cout<< "inclusion square root of v is " << a << endl;
            return;
        }
    if (b*b == v)
        {
            cout<< "inclusion square root of v is " << b << endl;
            return;
        }
    else {
        double x = (a+b)/2.0;
        int counter = 0;
        while (abs(x*x-v) > eps)
        {
            if(x*x>v)
                b=x;
            else
                a=x;
            x=(a+b)/2;
            counter++ ;
            cout<<" a is "<< a << " b is " << b << " x is " << x << " i is " << counter << endl;
        }
        cout<<"inclusion square root of v is " << x << " for epsilon " << eps << endl;
    }
}

void Newton_Raphson(double eps, double v)
{
double x = 1;
if (v>=1)
    x=v;
int counter = 0;
while (abs(x*x-v)>eps)
  {
      x = x-(x*x-v)/(2*x);
      counter++;
      cout<< "x is " << x << " counter is " << counter << endl;
  }
cout<<"Newton-Raphson square root of v is " << x << "for epsilon " << eps;
}

/*
                           

         

   
                         

   
                         

     
                       

   
     
                    
                      
                          
                            
                                                    

    
    
                         
                          
                           
                                 
                                  
                                   
                                    
                                    
                                    
                                     
                                    
                                                    

              

   
                     
                      
                                                      

   
       

     
          
                                                      

   
         
             
                                                         

    
        
             
             
             
             
             
                                                         

*/

int main()
{
    double eps = 0.1;
    double v = 81;
    inclusion(eps , v);
    Newton_Raphson(eps, v);
    return 0;

}

