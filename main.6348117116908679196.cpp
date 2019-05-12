#include <iostream>
#include <cmath>

/*                        

       
           
                   

       
           
           
                   

         
           
           
             
                  
             
           
                        

       
           
           
           
               
                 
           

   
       
                

       
           
                 
           

         
           
                   
                          
                        
              

       
           
                  
                        
                    
                             
                    
                               
                    
                            
                 
           

         
                           
                               
           
         
           
                                                       

                           
                               
           
                                                    

                           
                         
                                                    
           
         
                                                         

                           
                                               
           
         
           
            
                                                          

                           
                          
                         
                         
                           
                            
                            
                                                      
           
          
           
               
               
                                                           

           
                                                                    
                                                                                              

*/
using namespace std;

double x_i;
double a_i;
double b_i;
int i;

double f(double x,double v){
    return x*x - v;
}

double fd(double x){
    return 2*x;
}

void inclusion(double e, double v)
{
    i=0;
    a_i = 0;

    if (v<1){
        b_i=1;
    }
    else
    {
        b_i=v;
    }

    cout << "i" << '\t' << "a_i" << '\t' << "x_i" << '\t' << "b_i" << '\t' << endl;
    if (a_i*a_i==v || b_i*b_i==v){
        cout << "Inclusion square root of v is " <<v <<endl;
    }
    else
    {
        x_i=(a_i + b_i) / 2;

        while(!(abs(x_i * x_i - v) <= e)){
            cout << i << '\t' << a_i << '\t' << x_i << '\t' << b_i << '\t' << endl;
            if(x_i * x_i < v){
                a_i=x_i;
            }
            else
            {
                b_i=x_i;
            }
            x_i=(a_i + b_i) / 2;
            i++;
        }
        cout <<"Inclusion square root of "<< v <<" is "<< x_i <<" for epsilon "<< e <<endl;
    }
}

void newton_raphson(double e, double v)
{
    i=0;
    if(v < 1){
        x_i=1;
    }
    else
    {
        x_i=v;
    }
    cout << "i" << '\t' << "x_i" << '\t' << endl;
    while(!(abs(x_i * x_i - v) <= e)){
        cout << i << '\t' << x_i << '\t' << endl;
        x_i = x_i - f(x_i,v) / fd(x_i);
        i++;
    }
    cout << "Newton_raphson square root of " << v << " is " << x_i << " for epsilon " << e << endl;
}

int main()
{
    inclusion(0.1, 99);
    newton_raphson(0.1, 19);
    return 0;
}

