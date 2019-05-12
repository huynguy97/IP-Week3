#include <iostream>
#include <cmath>

using namespace std;

//                         

void inclusion ( double e, double v )
{
double a = 0;
double b = max( 1.0, v );
int iteration_inclusion = 0;
if ( a*a == v ){
    cout << "Inclusion square root of " << v << " is " << a << " for " << iteration_inclusion << " iterations" << endl;
    return;
    }
if ( b*b == v ){
    cout << "Inclusion square root of " << v << " is " << b << " for " << iteration_inclusion << " iterations" << endl;
    return;
    }
double x = ( a+b ) / 2;
while ( abs( x*x - v ) > e ){
    if ( x*x < v )
        a = x;
    else
        b = x;
    x = ( a + b ) / 2;
    iteration_inclusion++;
    }
cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << " and " << iteration_inclusion << " iterations" << endl;
}

void test_inclusion ()
{
cout << endl << "******** testing inclusion ********" << endl;
double eps = 0.1 ;
while ( eps >= 0.00001)
{
inclusion (eps, 0.0) ;
inclusion (eps, 1.0) ;
inclusion (eps, 0.6) ;
inclusion (eps, 36.0) ;
inclusion (eps, 333333.3333) ;

eps = eps / 10 ;
}
cout << endl << "******** testing inclusion done ********" << endl ;
}

void newton_raphson ( double e, double v )
{
double x = max( 1.0, v );
int iteration_nr = 0;
while( abs ( x*x - v ) > e ){
    x = x -(( x*x - v )/(2*x));
    iteration_nr++;
    }
cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << " and " << iteration_nr << " iterations" << endl ;
}

void test_newton_raphson ()
{
cout << endl << "******** testing newton_raphson ********" << endl;
double eps = 0.1 ;
while ( eps >= 0.00001)
{
newton_raphson (eps, 0.0) ;
newton_raphson (eps, 1.0) ;
newton_raphson (eps, 0.6) ;
newton_raphson (eps, 36.0) ;
newton_raphson (eps, 333333.3333) ;

eps = eps / 10 ;
}
cout << endl << "******** testing newton-raphson done ********" << endl ;
}

int main()
{
inclusion (0.1,0.0);
inclusion (0.1,1.0);
inclusion (0.1,0.36);
inclusion (0.1,4.0);
inclusion (0.1,35.98);
newton_raphson (0.1,0.0);
newton_raphson (0.1,1.0);
newton_raphson (0.1,0.36);
newton_raphson (0.1,4.0);
newton_raphson (0.1,35.98);
return 0;
}

//                                                
//                                                
//                                                                      
//                                                               
//                                                                          
//                                                                        
//                                                                     
//                                                                               
//                                                                           
//                                                                               

//                                                                             
//                                                                                        

