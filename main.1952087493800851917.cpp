#include <iostream>
#include <math.h>

//                               
//                              
//                              
//
//                                         
/*                        */
/*                                                    */
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
//                                        

/*     */
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

/*     */
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
//                
//            
//                           
//                                        

/*     */
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
//               
//                 
//            
//    
/*     */
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

/*     */
//                                 

using namespace std;

void inclusion (double e, double v)
{
    double ai = 0;

    double bi;
    if (v >= 1)
        bi = v;
    else
        bi = 1;

    double xi = ((ai + bi) / 2);

    if (ai*ai == v)
        cout << "Inclusion square root of v is A1 " << ai <<endl;

    if (bi*bi == v)
            cout << "Inclusion square root of v is B1 " << bi <<endl;

    while (fabs((xi*xi) - v) > e)
        {
            xi = ((ai + bi) / 2);
            if (xi*xi < v)
                (ai = xi);
            else
                (bi = xi);
            cout << "Inclusion, value of xi: " << xi <<endl;
        }

    if (fabs((xi*xi) - v) <= e)
        cout << "Inclusion square root of v is X1 " << xi <<endl;

    cout << "Value of ai, bi, xi are subsequently: " << ai <<'\t' << bi <<'\t' << xi <<endl;
}

void newton_raphson (double e, double v)
{
    double x;
        if (v >= 1)
            x = v;
        else
            x = 1;

    if (fabs((x*x) - v) <= e)
        cout << "Newton_raphson square root of v is Xn for epsilon e " << x <<endl;

    while (fabs((x*x) - v) > e)
    {
        x = (x-( (x*x - v) / (2*x)) ) ;
        cout << "Netwon, value of x: " << x <<endl;
    }

    if (fabs((x*x) - v) <= e)
        cout << "Newton_raphson square root of v is Xn for epsilon e " << x <<endl;

    cout << "Value of x are subsequently: " << x <<endl;
}

int main()
//                                
{
    cout << "In this program we will search for the solution to the function x = square root of V" << endl;

    cout << "To give V a value, enter a positive number with a maximum of 9 digits and two decimals: " ;
    double  v ;
    cin  >> v ;
    if ( v < 0)
        cout << "Invalid number" << endl ;
    else
        cout << "You entered: " << v << endl ;
    cout << "Please enter an error margin e, with the prerequisite 0<e<1 : " ;
    double  e ;
    cin  >> e ;
    if (e <= 0 || e > 1)
        cout << "Invalid number" << endl ;
    else
        cout << "You entered: " << e << endl ;

    inclusion (e, v);
    newton_raphson (e,v);

    return 0;
//                                                            
}

