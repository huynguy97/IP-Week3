#include <iostream>
#include <cmath>
//                                                

/*   
        
           
                    

        
            
                   

          
               
                    

        
               
                  

         
               
                    
*/

using namespace std;
void inclusion ( double e, double v )
{
    double a = 0;
    double b = max (v,1.0);

    if(a*a == v)
    {
        cout << "the Inclusion square root of "<< v << " is " << a << endl;
        cout << "i = " << 0 << "\t a = "<< a << "\t b= "<< b<< "\t x = "<< (a+b)/2 <<endl;
        return;
    }
    if(b*b == v)
    {
        cout<< "the inclusion square root of "<< v <<" is " << b << endl;
        cout << "i = " << 0 << "\t a = "<< a << "\t b= "<< b << "\t x = "<< (a+b)/2 <<endl;
    return ;
    }
    double x = (a+b)/2;
     int i=0;
    while(abs(x*x-v)> e)
    {
        if(x*x < v)
        {
            a = x;
        }
        else
        {
  b          b = x;
        }
        x=(a+b)/2;
        i++;

    }
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
    cout << "i = " << i << "\t a = "<< a << "\t b= "<< b << "\t x = "<< x <<endl;
}

void newton_raphson(double e, double v )
{
    double x = max(1.0,v);
    int j=0;
    while( abs ( x*x - v ) > e )
    {
    x= x-(x*x-v)/(2*x);
    j++;
    }
    cout <<"Newton-Raphson square root of "<< v<< " is " << x << " for epsilon " << e << endl;
    cout << "i = " << j <<  "\t x = " << x <<endl;
}

int main()
{

   newton_raphson(0.1,0.0);
   inclusion(0.1,0.0);
   newton_raphson(0.1,1.0);
   inclusion(0.1,1.0);
   newton_raphson(0.1,0.5);
   inclusion(0.1,0.5);
   newton_raphson(0.1,9.0);
   inclusion(0.1,9.0);
   newton_raphson(0.1,13.0);
   inclusion(0.1,13.0);

    return 0;
}
/*   

        
           
                    

        
            
                   

          
               
                    

        
               
                  

         
               
                    

*/

