#include <iostream>

int main() {
    int a[] = { 10, 20, 30, 40, 50 };
    int* p = a;
    
    std::cout << "a[2] = " << *(p + 2) << std::endl;  // Add this line
    
    return 0;
}
