#include <iostream>
#include <string>

int main() {
    std::cout << "Podaj imię: "; 
        
    std::string imie;
    std::cin >> imie; 
    
    std::cout << "Miło Cię poznać, " << imie << "!" << std::endl;
       
    return 0;
}