#include <iostream>
#include <cmath>

using namespace std;

/*                                                                                   
                                                                                  

                                      

       
          
                                                                

               
                                                       
                                                                    

       
          
                               

               
                                                    
                                                                

         
          
                                                   
                                                                                 

               
                                                         
                                                                     

       
          
                                              
                                                                          

               
                                                          
                                                                      

        
          
                                                     
                                                                                           

               
                                                         
                                                                     

        

       
                                      

                                               

       
                                      

                                           

         
                                      

                                           

       
                                     

                                              

        
                                         

                                              

*/

//                    

void inclusion(double e, double v)
{
    double a = 0;
    double b = max(1.0, v);
    int c = 0;

    if ( a*a == v ){
        cout << "Inclusion square root of " << v << " is " << a << endl;
        return;
    }
    if ( b*b == v )
    {
        cout << "Inclusion square root of " << v << " is " << b << endl;
        return;
    }
    double x = ( a+b ) / 2;
    while ( abs ( x*x - v ) > e )
    {
        if ( x*x < v ){
            a = x;
        }
        else{
            b = x;
        }
        x = ( a + b ) / 2 ;
        c++;
    }

    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
    cout << "While loop is executed " << c << " times." << " Variables are: x = " << x << " v= " <<v << " e= " << e << " a= " << a << " b= " << b<< endl <<endl;

}
//                    

void newton_raphson ( double e, double v )
{
    double x = max ( 1.0, v ) ;
    int d=0;
    while( abs ( x*x - v ) > e ) {
        x = x - ( x*x - v ) / (2*x) ;
        d++;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl ;
    cout << "While loop is executed " << d << " times." << " Variables are: x = " << x << " v= " <<v << " e= " << e << endl;
}

int main()
{
    inclusion(0.1,1);
    newton_raphson(0.1,1);
    return 0;
}

