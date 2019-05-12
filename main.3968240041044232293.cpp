#include <iostream>
#include <cmath>

using namespace std;

//                          

/*                             
                                                    
                        
                  
                                                          
                                           
                  
                                                          
                                           
                    
                                 
                                                                               
                                                                
                   
                                 
                                
                                 
                                    
                                        
                                           
                                              
                                                 
                                                    
                                                       
                                                                                                          
                                                                      
                   
                                  
                                    
                                      
                                           
                                             
                                               
                                                                                            
                                                                    
                             
                  
                               
                                         
                                                  
                                                       
                                                                                                       
                                                                     
                  
                                                                          
                                                                
                    
                               
                                                                                      
                                                                    
                   
                                
                                               
                                                               
                                                                                                
                                                                                                    
                                                                                                                                               
                                                                             
                   
                                
                                            
                                                    
                                                                                                    
                                                                                                                                               
                                                                             
*/

//                                                                                                        
//                                                                                                              
//                                                                                                            
//                                                                                     
//                                                                                                             
//            
//                                                                                        
void inclusion(double error, double value)
{
    double lower_approx = 0;
    //                                                                                  
    //                                                                                
    double upper_approx = max(double(1), value);
    double average = (lower_approx+upper_approx)/2;
    //                                                                                    
    if(lower_approx*lower_approx == value){
        cout << "Inclusion square root of " << value << " is " << lower_approx << endl;
        return;
    } else if(upper_approx*upper_approx == value){
        cout << "Inclusion square root of " << value << " is " << upper_approx << endl;
        return;
    }
    //                                                                        
    while(abs(average*average-value) > error){
        //                                                                    
        if(average*average > value){
            upper_approx = average;
            average = (lower_approx+upper_approx)/2;
        } else {
            lower_approx = average;
            average = (lower_approx+upper_approx)/2;
        }
        //                                                                                                
        if(lower_approx*lower_approx == value){
            cout << "Inclusion square root of " << value << " is " << lower_approx << endl;
            return;
        } else if(upper_approx*upper_approx == value){
            cout << "Inclusion square root of " << value << " is " << upper_approx << endl;
            return;
        }
    }
    //                                          
    cout << "Inclusion square root of " << value  << " is " << average << " for epsilon " << error << endl;
    return;
}

//                                                                                                             
//                                                                                                              
//                                                                                   
//                                                                  
void newton_raphson(double error, double value)
{
    //                                                                                         
    //                                                                                
    double approx = max(double(1), value);
    //                                                                        
    while(abs(approx*approx-value) > error){
        //                                                     
        approx = approx - (approx*approx-value)/(2*approx);
    }
    //                                          
    cout << "Newton_raphson square root of " << value  << " is " << approx << " for epsilon " << error << endl;
    return;
}

//                                                                                               
//                                                                                                       
int main()
{
    double value, error;
    //                                            
    //                                          
    cout << "Enter value of which the square root will be approximated:" << endl;
    cin >> value;
    cout << "Enter to which accuracy the square root will calculated (epsilon):" << endl;
    cin >> error;
    //                          
    inclusion(error, value);
    newton_raphson(error, value);
}

/*                                       
                                                                                  
                                                                                       
                                                                                      
                                                                                      
                                   
                        
                  
             	 	 	 
                  
             	 	   	 
                    
             	 	   	 
             	   	    	 
                   
             	 	  	  
             	 	 	  
             	 	   	 
             	   	    	 
             	   	     	    
             	     	      	    
             	     	       	      
             	       	       	      
             	       	       	       
             	       	       	       
              	       	       	       
                   
             	 	   	  
             	 	    	   
             	 	     	    
             	     	      	    
             	      	       	    
             	       	       	    
             	       	       	    
                             
                  
             	 
             	   
             	    
                  
             	 
                    
             	 
             	   
                   
             	  
             	    
             	      
             	       
             	       
             	       
                   
             	  
             	 
             	       
             	       
             	       
                                                                                                               
                                                                                                                          
                                                                                                                         
                                                                                                                                
                                                                                                                               
                                                                                                    
                                                                                                                      
                                                                                                                           
                                 
*/

