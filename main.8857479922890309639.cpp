#include <iostream>
#include <cmath>
//                                            
using namespace std;

void inclusion (double e, double v)
{
    double a=0, x, i =0 ;
    //               
    if (v == 0)
        x= 0;
    //                                 
    else if (v==1)
        x= 1;
    //                                 
    else if (v<0)
        cout <<"type bigger that 0"<<endl;
    //                                                  
    else
        {
        double b = max(1.0,v);
        //                                                       
        x = (a+b)/2;
        //             

        cout <<" i = "<<i<<", a" << i <<" = "<<a<<", b"<<i<<" = "<<b<<", x"<<i<<" = "<<x<<endl;
        //                 
        while(abs(x*x-v) > e)
            {
            i++;
            //            

            if (x*x<v)
                {
                a=x;
                b=b;
                }

            else
                {
                a=a;
                b=x;
                }

            x= (a+b)/2;
            cout <<" i = "<<i<<", a" << i <<" = "<<a<<", b"<<i<<" = "<<b<<", x"<<i<<" = "<<x<<endl;
            //                                                     

            }
        }
        cout <<"Inclusion square root of "<<v<<" is "<<x<<" for epsilon "<<e<< endl;
}

void newton_raphson (double e, double v)
{
    double x, i=0;
    //              
    if (v == 0)
        x= 0;
    //                                 
    else if (v==1)
        x= 1;
    //                                 
    else
    {
        x= max(1.0,v);
        cout <<" i = "<<i<<", x" << i <<" = "<<x<<endl;

        //                          
        while(abs(x*x-v) > e)
        {
            i++;
            x = x - (x*x-v)/(2*x);
            x= x;
            cout <<" i = "<<i<<", x" << i <<" = "<<x<<endl;
            //                                                     

        }
    }
    cout <<"Newton_raphson square root of "<<v<<" is "<<x<<" for epsilon "<<e<< endl;
}

void test_inclusion()
{
    cout<<endl<<"@@@@@@@@ test the inclusion @@@@@@"<< endl;
    double e = 0.1 ;
    while (e >=0.00001)
    {
        inclusion(e,0.0);
        inclusion(e,1.0);
        inclusion(e,0.6);
        inclusion(e,36.0);
        inclusion(e,333333.3333);

        e = e/10;
    }
    cout << endl << "@@@@@@@@@ test inclusion done @@@@@"<< endl;
}

void test_newton_raphson()
{
    cout<<endl<<"@@@@@@@@ test the newton_raphson @@@@@@"<< endl;
    double e = 0.1 ;
    while (e >=0.00001)
    {
        newton_raphson(e,0.0);
        newton_raphson(e,1.0);
        newton_raphson(e,0.6);
        newton_raphson(e,36.0);
        newton_raphson(e,333333.3333);

        e = e/10;
    }
    cout << endl << "@@@@@@@@@ test newton_raphson done @@@@@"<< endl;
}

int main()
{

    double e,v;
    cout << "Enter the epsilon(range of Error) ";
    cin >> e;
    cout << "Enter the Value ";
    cin >> v;
    newton_raphson(e,v);
    cout << "\t" <<endl;
    inclusion(e,v);

   //                  
   //                       
    //         

}
//                                                                                      
//                                                
/*
                    
                                  
                                               
                                               
                                                    
                                                      
                                                         
                                                
                                                
                                                         
                                                       
                                                          
                                                 
                                                 
                                                          
                                                        
                                                           
                                                  
                                                  
                                                           
                                                         
                                                            
                                                  
                                                  
                                                           
                                                   
                                                            

                                       
                                                    
                                                    
                                                        
                                                           
                                                              
                                                     
                                                     
                                                           
                                                            
                                                               
                                                      
                                                      
                                                            
                                                       
                                                                
                                                       
                                                       
                                                                
                                                        
                                                                 
                                                       
                                                       
                                                                
                                                        
                                                                 
*/

