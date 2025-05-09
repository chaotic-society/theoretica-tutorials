
///
/// this program presents various uses of the class vector
///

#include <iostream>
#include "theoretica.h"
using namespace th;

int main() {

	//
    	// constructing vectors
    	//
    
    	// declaring a real 8D vector
    
    	vec<real, 8> first;
    
    	// filling it with zeroes
    
    	first = vec<real, 8>();
    
    		// printing it
    		
    	std::cout << "first" << std::endl;
    	
    	for(unsigned int i = 0; i < first.size(); i++)
    	{
    		std::cout << first[i] << std::endl;
    	}	
    	
    	std::cout << std::endl;
    
    	// declaring a real 8D vector filled with 3
    
    	vec<real, 8> second = vec<real, 8>(3);
    
    		// printing it
    
    	std::cout << "second" << std::endl;
    
    	for(unsigned int i = 0; i < second.size(); i++)
    	{
    		std::cout << second[i] << std::endl;
    	}
    
    	std::cout << std::endl;
    
    	// declaring a real 8D vector and initializing values from a list
    	
 	vec<real, 8> third = {3, 5, 9, -5.4, 3, 2.5, 0, -3};
 
 		// printing it
    
    	std::cout << "third" << std::endl;
    
    	for(unsigned int i = 0; i < third.size(); i++)
    	{
    		std::cout << third[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	// declaring a real 3D vector filled with 2
    	
    	vec3 fourth = vec3(3);
    	
    		// printing it
    
    	std::cout << "fourth" << std::endl;
    
    	for(unsigned int i = 0; i < fourth.size(); i++)
    	{
    		std::cout << fourth[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	// declaring a real 3D vector and initializing values from a list
    	
    	vec3 fifth = {0, -3, 4.5};
    	
    		// printing it
    
    	std::cout << "fifth" << std::endl;
    
    	for(unsigned int i = 0; i < fifth.size(); i++)
    	{
    		std::cout << fifth[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	//
    	// vector manipulation
    	//
    	
    	vec<real, 8> vec_result;
    	vec3 vec3_result;
    	double scal_result;
    	bool bool_result;
    	
    	// access/get i-th component
    	
   	scal_result = third[4];
   	
   	std::cout << "5-th component" << std::endl;
    	
    	std::cout << scal_result << std::endl;
 
 	std::cout << std::endl;
 	
 	// access i-th element
    	
   	scal_result = third.at(4);
   	
   	std::cout << "5-th element v1" << std::endl;
    	
    	std::cout << scal_result << std::endl;
 
 	std::cout << std::endl;
 	
 	// get i-th element
    	
   	scal_result = third.get(4);
   	
   	std::cout << "5-th element v2" << std::endl;
    	
    	std::cout << scal_result << std::endl;
 
 	std::cout << std::endl;
 	
 	// set i-th element
 	
   	third.set(4, 3.1);
   	
   	std::cout << "set 5-th element" << std::endl;
    	
    	std::cout << third[4] << std::endl;
 
 	std::cout << std::endl;
 	
 	// vector size
 	
 	scal_result = third.size();
   	
   	std::cout << "vector size" << std::endl;
    	
    	std::cout << scal_result << std::endl;
 
 	std::cout << std::endl;
    	
    	//
    	// vector operations
    	//
    	
    	// identity
    	
    	vec_result = +third;
    	
    		//printing it
    		
    	std::cout << "identity" << std::endl;
    	
    	for(unsigned int i = 0; i < vec_result.size(); i++)
    	{
    		std::cout << vec_result[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	// vector sum
    	
    	vec_result = third + second;
    	
    		//printing it
    		
    	std::cout << "sum" << std::endl;
    	
    	for(unsigned int i = 0; i < vec_result.size(); i++)
    	{
    		std::cout << vec_result[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	// opposite vector
    	
    	vec_result = -third;
    	
    		//printing it
    		
    	std::cout << "opposite" << std::endl;
    		
    	for(unsigned int i = 0; i < vec_result.size(); i++)
    	{
    		std::cout << vec_result[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
 
 	// vector subtraction
    	
    	vec_result = third - second;
    	
    		//printing it
    		
    	std::cout << "subtraction" << std::endl;
    	
    	for(unsigned int i = 0; i < vec_result.size(); i++)
    	{
    		std::cout << vec_result[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	// multiplication by a scalar
    	
    	vec_result = 3 * third;
    	
    		//printing it
    		
    	std::cout << "multiplication by a scalar" << std::endl;
    	
    	for(unsigned int i = 0; i < vec_result.size(); i++)
    	{
    		std::cout << vec_result[i] << std::endl;
    	}
 
 	std::cout << std::endl;
 
 	// division by a scalar
    	
    	vec_result = third / 3;
    	
    		//printing it
    		
    	std::cout << "division by a scalar" << std::endl;
    	
    	for(unsigned int i = 0; i < vec_result.size(); i++)
    	{
    		std::cout << vec_result[i] << std::endl;
    	}
 
 	std::cout << std::endl;
 	
 	    	//assignment by addition
    	
    	third += second;
    	
    		//printing it
    		
    	std::cout << "assignment by addition" << std::endl;
    	
    	for(unsigned int i = 0; i < third.size(); i++)
    	{
    		std::cout << third[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	//assignment by subtraction
    	
    	third -= second;
    	
    		//printing it
    		
    	std::cout << "assignment by subtraction" << std::endl;
    	
    	for(unsigned int i = 0; i < third.size(); i++)
    	{
    		std::cout << third[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	//assignment by multiplication by a scalar
    	
    	third *= 3;
    	
    		//printing it
    		
    	std::cout << "assignment by multiplication by a scalar" << std::endl;
    	
    	for(unsigned int i = 0; i < third.size(); i++)
    	{
    		std::cout << third[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
    	
    	//assignment by division by a scalar
    	
    	third /= 3;
    	
    		//printing it
    		
    	std::cout << "assignment by division by a scalar" << std::endl;
    	
    	for(unsigned int i = 0; i < third.size(); i++)
    	{
    		std::cout << third[i] << std::endl;
    	}
    	
    	std::cout << std::endl;
 	
 	// dot product
    	
    	scal_result = third * second;
    	
    		//printing it
    		
    	std::cout << "dot product" << std::endl;
    	
    	std::cout << scal_result << std::endl;
 
 	std::cout << std::endl;
 	
 	// cross product
 	
 	vec3_result = fourth.cross(fifth);
 
 		//printing it
    		
    	std::cout << "cross product" << std::endl;
    	
    	for(unsigned int i = 0; i < vec3_result.size(); i++)
    	{
    		std::cout << vec3_result[i] << std::endl;
    	}
 
 	std::cout << std::endl;
 	
 	// norm
    	
    	scal_result = third.norm();
    	
    		//printing it
    		
    	std::cout << "norm" << std::endl;
    	
    	std::cout << scal_result << std::endl;
 
 	std::cout << std::endl;
 	
 	// square norm
    	
    	scal_result = third.sqr_norm();
    	
    		//printing it
    		
    	std::cout << "square norm" << std::endl;
    	
    	std::cout << scal_result << std::endl;
 
 	std::cout << std::endl;
 	
 	// normalize v1
    	
    	vec_result = third.normalized();
 
 		//printing it
    		
    	std::cout << "normalization v1" << std::endl;
    	
    	for(unsigned int i = 0; i < vec_result.size(); i++)
    	{
    		std::cout << vec_result[i] << std::endl;
    	}
    	
 	std::cout << std::endl;
    	
    	// normalize v2
    	
    	third.normalize();
 
 		//printing it
    		
    	std::cout << "normalization v2" << std::endl;
    	
    	for(unsigned int i = 0; i < third.size(); i++)
    	{
    		std::cout << third[i] << std::endl;
    	}
 
 	std::cout << std::endl;
 
 	// equality
 	
 	bool_result = false;
 	
 	if(fifth == fourth)
 	{
 		bool_result = true;
 	}
 
 	std::cout << "are the vectors equal?" << std::endl;
    	
    	std::cout << bool_result << std::endl;
 
 	std::cout << std::endl;
 
 	// inequality
 	
 	bool_result = false;
 	
 	if(fifth != fourth)
 	{
 		bool_result = true;
 	}
 
 	std::cout << "are the vectors unequal?" << std::endl;
    	
    	std::cout << bool_result << std::endl;
 
 	std::cout << std::endl;    	
    	
}
