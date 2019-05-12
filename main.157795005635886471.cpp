#include <iostream>
#include <cmath>

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
//                        
//                                
//                                
//                        
//                                                                  

using namespace std;

int main()
{

    cout <<"Enter your positive number: " ;
    double v ;
    cin >> v ;

    double x, y, z, e ;
    double a, b, c ;

    x = v ;

    a = 0 ;
    b = v ;

    e = 0.1 ;

    while ( abs(x * x - v) > e )
    {
        y = x * x - v ;
        z = x * 2 ;
        x = x - y / z ;
    }
    if( a*a == v)
        cout << "inclusion square root of " << v <<" is "<< a <<'\n' ;
    else if (b*b == v)
        cout << "inclusion square root of " << v <<" is "<< b <<'\n' ;
    //    
        //                          
        // 
            //                                                                                     
            //               
            //              
            //              
        // 
        //                                                                                    
    cout << "Newton_raphson square root of "<< v <<" is "<< x <<" for epsilon "<< e <<'\n' ;
    return 0 ;
}

//          
//                                                        
//                                                                               
//                         

