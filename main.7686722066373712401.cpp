#include <iostream>
#include <cmath> //                 

using namespace std;

/*
                                                  

                                                

                                                  

                                          
                                          

                                                  

                                

                                                                                                                                
                                                              

                          
                       
                        
                                                                                                           
                                         

                       
                        
                                                                                                              
                                                                                                           
                                         

                                              
                        
                                                                                                                  
                                                                                                                  
                                                                                                                               
                                                                                  
                                                                                           
                                                                      
                                                                                                    

                                                                        
                         
                                                                                                                
                                                                                                                   
                                                                                                                               
                                                                                   
                                                                                               
                                                                                               
                                                                                               
                                                                                               
                                                                                               
                                                                                               
                                                                                               
                                                                       
                                                                                                   

                                                                                  
                         
                                                                                                                
                                                                                                                 
                                                                                                                               
                                                                                  
                                                                                             
                                                                                             
                                                                                             
                                                                                             
                                                                                             
                                                                                             
                                                                      
                                                                                                   

                               
                                                     
                                                              

                       
                                                                                                                              
                                                                                 
                                                                                         
                                                                                         
                                                     
                                                                                                 

                       
                                                                                                                              
                                                                                 
                                                     
                                                                                              

                                              
                                                                                                                              
                                                                                     
                                                                                             
                                                       
                                                                                                   

                                                                        
                                                                                                                              
                                                                                    
                                                                                            
                                                                                            
                                                                                            
                                                                                            
                                                                                            
                                                       
                                                                                                  

                                                                                  
                                                                                                                              
                                                                                    
                                                                                            
                                                                                            
                                                                                            
                                                                                            
                                                       
                                                                                                  

                                                  

                                      

                                                                                                                               
                                                                                                                                                 

                       
                                                    
                                                         

                       
                                                    
                                                         

                                                
                                                    
                                                         

                                                
                                                    
                                                         

                                                
                                                    
                                                         

                                                                        
                                                    
                                                         

                                                                                  
                                                    
                                                         

                                                                                                                                                                 
*/

//                                                                                                                 
void inclusion(double epsilon, double v)
{
    //                               
    double a = 0.0;
    double b;
    if (v > 1.0)
        b = v;
    else
        b = 1.0;

    //                                   
    if (abs(a*a - v) <= epsilon)
    {
        cout << "\nInclusion square root of " << v << " is " << a << " for epsilon " << epsilon << endl;
        return;
    }

    //                                   
    if (abs(b*b - v) <= epsilon)
    {
        cout << "\nInclusion square root of " << v << " is " << b << " for epsilon " << epsilon << endl;
        return;
    }

    //                              
    double x = (a + b)/2;

    //                                           
    double i = 0;

    //                                 
    cout << "\n i \t a \t b \t x" << endl;
    cout << i << "\t"<< a << "\t" << b << "\t" << x << endl;

    //                                            
    while (abs(x*x - v) > epsilon)
    {
        //                      
        i++;

        //                                     
        if (x*x < v)
            a = x;
        else
            b = x;

        //                              
        x = (a + b)/2;

        //                
        cout << i << "\t" << a << "\t" << b << "\t" << x << endl;
    }

    //                 
    cout << "\nInclusion square root of " << v << " is " << x << " for epsilon " << epsilon << endl;
    return;
}

//                                                                                                                      
void newton_raphson(double epsilon, double v)
{
    //                        
    double x;
    if (v > 1.0)
        x = v;
    else
        x = 1.0;

    //                                           
    double i = 0;

    //                                 
    cout << "\n i \t x" << endl;
    cout << i << "\t" << x << endl;

    //                                            
    while (abs(x*x - v) > epsilon)
    {
        //                      
        i++;

        //                              
        x = x - (x*x - v) / (2*x);

        //                
        cout << i << "\t" << x << endl;
    }

    //                 
    cout << "\nNewton_raphson square root of " << v << " is " << x << " for epsilon " << epsilon << endl;
    return;
}

int main()
{
    cout << "Calculating the square root using the inclusion or the Newton-Raphson algorithm" << endl;

    //                                 
    double epsilon;
    do
    {
        cout << "\nEnter a value for epsilon between 0 and 1 (smaller = more precision): ";
        cin >> epsilon;
    }
    while (!(epsilon > 0 && epsilon < 1));

    //                              
    double v;
    do
    {
        cout << "\nEnter a non-negative value of which you want to calculate the square root: ";
        cin >> v;
    } while (!(v >= 0));

    //                                                                               
    cout << "\nDo you want to use inclusion? (Y/N) ";
    char answer;
    cin >>  answer;
    if (answer == 'y'|| answer == 'Y')
        inclusion(epsilon, v);
    else
        newton_raphson(epsilon, v);

    return 0;
}

