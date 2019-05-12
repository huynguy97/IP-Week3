#include <iostream>
/*                                                     
                                                       
*/
using namespace std;

void inclusion (double e, double v)
    {
        int i=0;
        double a, b;
        a=0;
        if (v<1)
        {
            b=1;
        }
        else
        {
            b=v;
        }
        if ((a*a-v)<=e && (a*a-v)>=0)
        {
            cout << "Inclusion square root of v is: " << a << endl;
        }
        else if ((b*b-v)<=e && (b*b-v)>=0)
        {
            cout << "Inclusion square root of " << v << " is: " << b << endl;
        }
        else
        {
            double x=(a+b)/2;
            while((x*x-v)>e || (x*x-v)<0)
            {
                if(x*x<=v)
                {
                    a=x;
                    x=(a+b)/2;
                    i++;
                }
                else
                {
                    b=x;
                    x=(a+b)/2;
                    i++;
                }
            }
            cout << "Inclusion square root of " << v << " is: " << x << " for epsilon e=" << e << endl << "Inclusion root was calculated in " << i << " steps." << endl << endl;
        }
    }

void newton_raphson (double e, double v)
{
    int i=0;
    double f, x, fd;
    if (v<=1)
    {
        x=1;
    }
    else
    {
        x=v;
    }
    f=(x*x)-v;
    fd=(2*x);
    while((x*x-v)>e || (x*x-v)<0)
    {
        x=x-(f/fd);
        f=(x*x)-v;
        fd=(2*x);
        i++;
    }
    cout << "Newton-Raphson square root of value " << v << " is: " << x << " for epsilon e=" << e << endl << "Newton-Raphson root was calculated in " << i << " steps." << endl;
}
int main()
{
    double number, epsilon;
    cout << "Choose a value for v." << endl;
    cin >> number;
    cout << "Choose a value for epsilon e." << endl;
    cin >> epsilon;
    cout << "For v you chose: " << number << " and for epsilon e you chose: " << epsilon << endl << endl;

    inclusion(epsilon, number);
    newton_raphson(epsilon, number);
    /*
              
                     
                      

                                                        

                                                        

                                                                               
                                              

                                                                                
                                              
                                               
                                                
                                                 
                                                 
                                                 
                                                 
                                                 

                                                                                 
                                             
                                              
                                               
                                                
                                                 
                                                 
                                                 

                   

                     
                      

                                                                                        
                                                   

                                                                                     
                    

                                                                                          
                                   

                                                                                           
                                                                                              

                                                                                     
                                                                                              

               

                                                                                                         
    */
}

