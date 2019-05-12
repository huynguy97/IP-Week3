#include <iostream>
#include <cmath>
using namespace std;

//                   
//                           
//                       

//     

//                  

//         
double findMax(double first, double second) //                                         
{
    if (first >= second){
        return first;
    } else {
        return second;
    }
}

void inclusion(double epsilon, double v) //                                                                                                           
{
    double a = 0;
    double b = findMax(v, 1.0);
    double x = 0;

    int i = -1;
    bool skip = false;

    //                         
    if (a * a == v){
        cout << "Inclusion square root of " << v << " is " << a << endl;
        skip = true;
    }
    if (b * b == v){
        cout << "Inclusion square root of " << v << " is " << b << endl;
        skip = true;
    }
    if (!skip)
    {
        do {
            i++;
            x = (a + b) / 2.0;

            cout << "i,ai,xi,bi" << "\t" << i << "\t" << a << "\t" << x << "\t" << b << endl; //            

            //                                    
            if ((x * x) < v) {
                a = x;
                //                
            } else {
                //                
                b = x;
            }
        } while (abs(x * x - v) > epsilon);
        //                                                              
        cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << epsilon << endl;
    }
}

void newton_raphson(double epsilon, double v) //                                                          
{
    double x = findMax(1.0, v);
    int i = 0;
    cout <<"i,xi"<<"\t"<<i<<"\t"<<x<< endl;
    while (abs(x * x - v) > epsilon)
    {
        x = x - ((x*x - v)/(2 * x));
        i++;
        cout <<"i,xi"<<"\t"<<i<<"\t"<<x<< endl;
    }
    cout << "Newton_Rhapson square root of " << v << " is " << x << " for epsilon " << epsilon << endl;
}

int main()
{
    double number;
    cout << "This program calculates the square-root of a number using 2 algorithms" << endl;
    cout << "Please enter a non-negative number..." << endl;
    cin >> number;
    while (number >= 0){ //                                                                       
        inclusion(0.1, number);
        newton_raphson(0.1, number);
        cout << "Please enter a non-negative number... (to quit, enter a negative number)" << endl;
        cin >> number;
    }
    return 0;
}

/*
                   
                       
              
                        
                                                

                   
                
                          
                       
                          
                            
                                                                     

                       
              
                        
                                                

                   
                
                                                           

                          
              
                        
                                                                          

                   
                
                             
              
                             
               
                                                                        

                       
              
                        
                    
                                                           

                   
                
                          
            
                          
             
                          
                
                                                                            

                        
              
                         
                                
                   
                              
                  
                                    
                    
                                    
                     
                                     
                      
                                      
                           
                                       
                            
                                        
                               
                                         
                                 
                                                                                            

                   
                 
                           
             
                           
                
                           
                
                           
                
                                                                       

*/
/*
                  
             
                               
                 
                   
                    
                                                       

             
                               
                 
                                                    

                
                                         
                                                    
                 
                     
                      
                                                            

             
                                         
                                               
                 
                   
                    
                       
                                                          

              
                                          
                                          
                                         
                                         
                                         
                                         
                                              
                                               
                                               
                                               
                                                      
                  
                    
                       
                       
                       
                                                           

                                                                                                                          
                                                                                       
*/

