#include<iostream>
#include <vector>

template<typename T> std::vector<T> larger(std::vector<T> &first,std::vector<T>&second);
int main() {
    
    std::vector<int>ab{ 1,5,2,3,4,5,6,1 };
    std::vector<int>bc{ 1,5,2,3,4,5,6 };

    std::vector<int> res{larger(ab,bc) };
    for (int i : res) {
        std::cout << i << "\t";
    }
}


//Largerfunction begins



template<typename T>
std::vector<T> larger(std::vector<T> &first,std::vector<T>& second) {       //Overload on the Larger function for pass by pointer for std::vector data type
    size_t i{};
    
    while (i < (std::size(first) - 1) or i <  (std::size(second) - 1)) {
        std::cout << "i is" << i << std::endl;
        if ((first)[i] > (second)[i]) {
            return first;
        }
        else if ((first)[i] < (second)[i]) {
            return second;
        }
        else {
            
            i++;
        }
    }
    if (i == std::size(first)) {
        return second;
    }
    else {
        return first;
    }

}
