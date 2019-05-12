#include <iostream>
#include <math.h>

//                                                     
//                                                 

/*                    
                         
                         
                         
                         
                         
                         
*/

using namespace std;

double a = 0.0;
double v1 = 36;
double b = v1;
double e1 = 0.1;
double x = (a + b)/2;
double y = fabs(x * x - v1);

double x_i = v1;

//                                                                         
int check_a_and_b()
{
bool a_times_a_is_v = a * a == v1;
bool b_times_b_is_v = b * b == v1;
if (a_times_a_is_v)
    cout << a << " is the square root of " << v1 << endl;
    return 0;
if (b_times_b_is_v)
    cout << b << " is the square root of " << v1 << endl;
    return 0;
}

//                                                                                                                                       
void inclusion(double e, double v)
{
    int counter = 0;
    while (y > e)
    {
        x = (a+b)/2;
        if (x * x < v)
        {
            a = x;
        }
        else
        {
            b = x;
        }
        y = fabs(x * x - v);
        counter = counter + 1;
        //                                                  
        cout << counter << " \t | " <<a<<" \t| " <<x<<" \t | " <<b<< " \t |" << endl;
    }
}

//                                                                       
void main_inclusion()
{
if(v1<1)
b = 1;
check_a_and_b();
if (fabs(x * x - v1) <= e1)
    cout << x << " is the square root of " << v1 << endl;
else
{
    inclusion(e1,v1);

    cout << x << " is the square root of " << v1 << endl;
}
}

//                                                                         
void newton_raphson(double e, double v)
{
    int counter = 0;
    do
        {
            double fx;
            fx = x_i*x_i - v;
            double afx;
            afx = 2*x_i;
            x_i = x_i - fx/afx;
            counter = counter + 1;
            //                                                  
            cout << "| " << counter << " | " <<x_i<< " |" <<endl;
        }
        while(fabs(x_i * x_i - v) > e);
        cout << x_i << " is the square root of " << v << endl;
}

//                                                                            
void main_newton()
{
    if (fabs(x_i * x_i - v1) <= e1)
    cout << x_i << " is the square root of " << v1 << endl;
    else
    {
        newton_raphson(e1, v1);
    }

}

//                                                    
int main()
{
cout << "v is " << v1 << endl << endl;
cout << "Inclusion:" << endl;
main_inclusion();
cout << endl << "Newton:" << endl;
main_newton();

}

/*                        
               
                                                          
                                                          

               
                                                          
                                                          

                 
                                                          
                                                          
                                                          

                
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          

                
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          
                                                          

            
               
               

            
               
               

              
               
               

             
               
               
               
               
               
               

             
               
               
               
               
               
               
               

                                                                                                                             
*/

