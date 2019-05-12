#include <iostream>
#include <cmath>
using namespace std;

//                                          
//                                        

/*
     

                   

       
                   
                                     

       
                   
                                     

          
                   
                             
                                                 
                             
                              
                                                                                                            

       
                   
                                            

        
                   
                         
                         
                             
                            
                                                                                                         

                        
                
            
                                     

       
                   
                     
                                           
                             
                                                                                                        

       
                                                                                                 
                     
                                                                                     

          
                   
                            
                                                                                 

       
                                                                                                 
                     
                                                                                     

        
                                                                                                 
                           
                                                 
                                             
                                                                                                          

*/

void inclusion(double e, double v)
{
    double a;
    double b;

    for(int i = 0; i*i <= v; i++)
    {
        a = i;
        b = i + 1.0;
    }

    cout << '\n' << "Inclusion" << '\n' << "a" << '\t' << "b" <<'\t' << "x_i" << endl;

    double x_i = (a + b) / 2;

    if(a*a == v)
    {
        cout << a << '\t' << b << '\t' << '\n' << "The square root of " << v << " is " << a << endl;

    }

    else
    {
        while(abs(x_i * x_i - v) >= e)
        {
            cout << a << '\t' << b << '\t' << x_i << endl;
            x_i = (a + b) / 2;

            if(x_i * x_i < v)
            {
                a = x_i;
            }

            else
            {
                b = x_i;
            }

        }
        cout << a << '\t' << b << '\t' << x_i << '\n' << "The square root of " << v << " is " << x_i << endl;
    }
}

void newton_raphson(double e, double v)
{

    int x_0;
    int i = 0;
    cout << '\n' << "Newton Raphson" << '\n' << "i" << '\t' << "x_i" << endl;

    if(v < 1)
    {
        x_0 = 1;
    }
    else
    {
        for(int j = 0; j*j <= v; j++)
        {
            x_0 = j;
        }
    }

    cout << i << '\t' << x_0 << endl;

    double x_i = x_0 - (x_0*x_0 - v) / (2*x_0);
    i = i+1;

    if(x_i * x_i == v)
    {
        cout << "The square root of " << v << " is " << x_i << endl;
    }
    else
    {
        cout << i << '\t' << x_i << endl;

        while(abs(x_i * x_i - v) >= e)
        {

            x_i = x_i - (x_i*x_i - v) / (2*x_i);
            i = i + 1;
            cout << i << '\t' << x_i << endl;

        }

        cout << "The square root of " << v << " is " << x_i << endl;
    }

}

double v;
double e;

int main()
{
    cout << "For what number do you want to compute the square root?" << '\t';
    cin >> v ;
    cout << "What precision do you want to utilize?" << '\t';
    cin >> e ;

    inclusion(e, v);
    newton_raphson(e, v);

}

/*
    
     
                                                                                                                                                         

     
                                                               

       
                                                                                                                                             

     
                                                              

      
                                                                                                                                                                                                                              

*/

