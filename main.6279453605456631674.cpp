//                                   
//                                    

#include <iostream>
#include <cmath>

using namespace std;

//        

/*
                    

    
           
                                 

    
           
                                 

       
           
               
                                   
      

                
                  
                                         
        

                   
                      
                                      
                                     

   
         
             
                      
                             

    
            
                
                                   
       

                
                  
                                       
        

                   
                     
                                   
       

                   
                         
                                       

                     

                           
    
     
             
                                 
                
                                       
                                               

    
     
                                       

       
     
                                          
                                                

    
     
                                            
                        
                                                    
                   
                                                                
                                                  

     
      
                                        
               
                                     
                  
                                                
                  
                               
                                                 
*/

//        

void inclusion (double e, double v)
{
    double a,b,x;

    //                                                                                          
    //                                              
    bool ok=false;
    a=0;

    if(v>1)
        b=v;
    else
        b=1;

    if(a*a==v)
        {
            cout<<"i=0"<<"\t"<<"a0="<<a<<"\t"<<"b0="<<b<<"\n";
            cout<<"Inclusion square root of v is: "<<a<<"\n";
            ok=true;
        }
    if(b*b==v)
        {
            cout<<"i=0"<<"\t"<<"a0="<<a<<"\t"<<"b0="<<b<<"\n";
            cout<<"Inclusion square root of v is: "<<b<<"\n";
            ok=true;
        }

    if(!ok)
    {
        x=(a+b)/2.0;
        cout<<"i=0"<<"\t"<<"a0="<<a<<"\t"<<"x0="<<x<<"\t"<<"b0="<<b<<"\n";
        for(int i=1; abs(x*x-v)>e; i++)
        {
            if(x*x<v)
                a=x;
            else
                b=x;
            x=(a+b)/2.0;
            cout<<"i="<<i<<"\t"<<"a"<<i<<"="<<a<<"\t"<<"x"<<i<<"="<<x<<"\t"<<"b"<<i<<"="<<b<<"\n";
        }
        cout<<"Inclusion square root of "<<v<<" is "<<x<<" for epsilon "<<e<<"\n";
    }
}

//        

void newton_raphson(double e, double v)
{
    double x;
    int i;
    if(v>1)
        x=v;
    else
        x=1;
    for(i=0; abs(x*x-v)>e; i++)
    {
        cout<<"i="<<i<<"\t"<<"x"<<i<<"="<<x<<"\n";
        x=x-(x*x-v)/(2*x);
    }
    cout<<"i="<<i<<"\t"<<"x"<<i<<"="<<x<<"\n";
    cout<<"Newton_Raphson square root of "<<v<<" is "<<x<<" for epsilon "<<e;
}

//        
/*
                                                                                    
                                                                                               
                                                                              
                                                                                                                    
                                                                                                                                                       
                                                                                                                                                    
*/

int main()
{
    double e, v;
    cin>>e>>v;
    inclusion(e, v);
    newton_raphson(e, v);
    return 0;
}

