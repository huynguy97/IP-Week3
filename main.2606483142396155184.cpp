/*
                                              
                      
                      
                         
         
        
                                                              
                  
        
                                                            
                  
                                                                                         
                                                                                          
                
            
                                                                   
                  
                                               
                                    
    
        
                    
    
                                    
                  
                                                                                                                          
                            
          
                                    
               
         
                               
               
          
                                                                               
                     
           
                               
                       
            
                               
                         
             
                               
                          
               
                               
                           
               
                                 
                                
                
                                
                                                                                             
                                      
              
        
             
                              
                                            
                                   
                               
                                    
                                 
                                                      
                
        
    
                      
                
                                       
    
                              
                             
                                       
                                                 
                                                               
                             
                
                                                                                                                                        
     
        
                            
        
                                                                                
        
                                                                                     
        
                                                                                            
                                                                                         
                 
                                                                                                                                                             
        
        
                                                  
        
                                                       
        
                                                                                                        
        
                                                                                                          
        
                                                                                                        
                
                                                                                            
                                                                             

                
                
        
                                               
                                                                                                                                        
                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                    

*/
#include <iostream>

using namespace std;

void inclusion(double e, double v)
{
    cout <<"Initiating inclusion method..."<<endl;
    double a;   //                 
    a=0;
    double b;
    double x;
    double  check;  //            
    int counter=0;  //                                                   
    if(v<=1)       //                                   
        b=1;
    else
        b=v;
    if (a*a==v)    //             
        x=a;
    else
        x=b;       //                               
    check=x*x;     //                
    while(!((-e<check-v) && (check-v)<e))  //                                        
          {
              counter++;
              x=(a+b)/2;  //      
              cout << "count ="<< counter <<"\t" << "low bound="<<a <<"\t" << "test value="<<x <<"\t"<< "high bound="<<b <<endl; //                             
              check=x*x;  //          
              if (check<=v)
                a=x;  //                                                     
              else
                  b=x;//                                      
          }
    cout << "the square root of " << v << " is around "<<x <<" according to the inclusion method."<<endl<<endl;
}

void newton_raphson(double e, double v)
{
    cout <<"Initiating Newton-Raphson method..."<<endl;
    double x;
    int counter=0;
    double check;
    if (v<=0)  //               
        x=1;
    else
        x=v;
    check=x*x;  //         
    while (!((-e<check-v) && (check-v)<e))
    {
        counter++;            //                  
        x=x-((x*x-v)/(2*x));  //                             
        check=x*x;
        cout << "count ="<<counter <<"\t"<< "test value="<<x<<endl; //                                                      
    }
    cout << "the square root of "<<v<<" is around "<<x <<" according to Newton-Raphson."<< endl<<endl;
}

int main()
{
    double e=0.1;
    double v=30.25;
    if (v<0)
        cout<<"please do not enter a negative value for v, the methods usable lack the imagination to handle such values."<<endl;
    else
    {
        newton_raphson(e,v);
        inclusion(e,v);
    }

    return 0;
}

