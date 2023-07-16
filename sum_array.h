#ifndef _SUMARRAYH_
#define _SUMARRAYH_
#include <vector>

class SumArray
{
private:
    int size;                   
    int num_threads;            
    std::vector<int>values;     
    int result;                 
    void calc_sum_part(int l_index, int r_index, int index);    
public:
    SumArray(int _size, int _num_threads);          
    ~SumArray();
    int calculate_using_threads();                  
    int calculate_without_threads();                
    void printArray();                              
};

#endif