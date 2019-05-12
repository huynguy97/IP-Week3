//                                       
//                                    
#include <iostream>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

void Newton_Raphson(double v) {
  double e = {0.1};
  double x = {1.0};
  int    i = {1};

  cout<<"Now going to calculate the square root of: "<<v<<", using the Newton-Raphson method."<<endl;
  do {
    x = x - ((x * x - v) / (2 * x));
    cout<<i<<'\t'<<x<<'\n';
    i++;
  } while ((abs(x * x - v)) > e);
  cout<<"Newton_raphson square root of "<<v<<" is "<<x<<" for epsilon "<<e<<".\n";
}

void inclusion(double v) {
  double x = {0};
  double a = {0};
  double e = {0.1};
  double b = max(1.0,v);
  int    i = {1};

  x = (a + b)/2;
  cout<<"Now going to calculate the square root of: "<<v<<", using the inclusion method."<<endl;
  while (abs(x * x - v) > e) {
    if (x * x < v) {
      a = x;
    } else {
      b = x;
    }
    cout<<i<<'\t'<<a<<'\t'<<x<<'\t'<<b<<"\n";
    x = (a+b)/2;
    i++;
  }
  cout<<"Inclusion square root of "<<v<<" is  "<<x<<" for epsilon "<<e<<".\n";
}

int main(int argc, char *argv[]){
  //                                                                            
  for (int i=1;i<argc;i++) {
    inclusion(atof(argv[i]));
    cout<<endl;
    Newton_Raphson(atof(argv[i]));
    cout<<endl<<endl;
 }
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
// 	       	       	      
// 	       	       	       
//                                                        

//                                                                               
// 	 
// 	       
// 	       
// 	       
//                                                            

