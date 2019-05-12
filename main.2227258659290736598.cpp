#include <iostream>
#include <math.h>

using namespace std;

/*
                         
                          

               

                                                          

     
      
             
                       

     
      
              
      
             
                       

       
      
                
      
                
                
                      
                    
                        
                                       
                
                         
                    
                            
                       
                   
                             
                    
                                
                                       
                     
                                
                    
                                    
                                              

     
      
              
      
              
                
                    
                  
               
                          

      
      
               
       
                 
                
                     
                 
              
      
                
              
        
                       
                
         
                           
                 
          
                               
                     
           
                                   
                                                  

                  

   
                        
                          
                       
                    

                      
                                 
                            
                      

                            
                               
                                           

   
          
                    
                                        

                          
                              
                                                  
                                             

                              
                                                  
                                          

                                 

                                                                         
                          
          
                           
                        
                     

                      
                             
                        
                     

                            
                                   
                            
                        

                              
                                     
                             
                          

                                
                            

                                           

                                                                            
                                     
           
                               
                          
                      
                                

                                   
                             
                       
                              

                                    
                             
                          
                                

                                    
                             
                          
                                

                              

                                            

*/

//                        

//                                    
double ai, bi, xi, xj, xn, v, a0, b0;
double e = 0.1;
bool resume;
int i = 0;
int j = 0;

//                        
void test_a0 () //                                    
{
    a0 = 0.00;

    if (a0 * a0 == v)
    {
        xi = a0;
        cout << "Inclusion square root of " << v << " is " << xi << endl;
        resume = false; //                                                              
        return;
    }

    ai = a0;
    resume = true; //                                                            
}

void test_b0 () //                                                     
{
    if (v > 1.00)
        b0 = v;
    else
        b0 = 1.00;

    if (b0 * b0 == v)
    {
        xi = b0;
        cout << "Inclusion square root of " << v << " is " << xi << endl;
        resume = false;
        return;
    }

    bi = b0;
    resume = true;
}

void find_xi () //                     
{
    xi = (ai + bi) / 2;

    if (fabs(xi * xi - v) <= e)
    {
        cout << "Inclusion square root of " << v << " is " << xi << " for epsilon " << e << endl;
        return; //                 
    }
    else if (xi * xi < v)
    {
        ai = xi;
        bi = bi;
        i = i + 1;
    }
    else
    {
        ai = ai;
        bi = xi;
        i = i + 1;
    }
}

//                             

void Newton_Raphson () //                                       
{
    if (v > 1.00)
        xj = v;
    else
        xj = 1.00;

    while (fabs(xj * xj - v) > e) //                                    
    {
        xn = xj - (xj * xj - v) / (2 * xj);
        xj = xn;
        j = j + 1;
    }

    cout << "Newton_Raphson square root of " << v << " is " << xj << " for epsilon " << e << endl;
}

int main()
{
    cout << "Enter number you want square root of: ";
    cin >> v;

    if (v < 0)
        cout << "Entry cannot be negative." << endl; //                                      

    //              

    test_a0 ();

    if (resume)
        test_b0 ();

    if (resume)
    {
        do find_xi ();
        while (fabs(xi * xi - v) > e); //                                                  
    }

    //                   

    Newton_Raphson();

    //               

    //                                         

    cout << "\n \n \n Steps in Inclusion test: ";

    cout << "\t i = " << i << "\t ai = " << ai << "\t bi = " << bi << "\t xi = " << xi << endl;

    //                                                   

    cout << "\n \n \n Steps in Newton-Raphson test: ";

    cout << "\t i = " << j << "\t xi = " << xj << endl;

    return 0;
}

