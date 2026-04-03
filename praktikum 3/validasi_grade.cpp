#include <iostream>
#include <limits> 

int main ()
{
    
    char nilai;

    std::cout << "Please insert a grade (A, B, C, D or E): ";
    std::cin >> nilai;

    if (std::cin.fail() || std::cin.peek() != EOF && std::cin.peek() != '\n') {
        std::cerr << "Invalid input! Please enter a single character grade (A-E)." << std::endl; 
        std::cin.clear();
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1; 
    }
    switch (nilai)
    {
    case 'A':
    case 'a':
        std::cout << "Excellent! :)" << std::endl;
        break;
    case 'B':
    case 'b':
        std::cout << "Well done :)" << std::endl;
        break;
    case 'C':
    case 'c':
        std::cout << "You passed." << std::endl;
        break;
    case 'D':
    case 'd':
        std::cout << "Better try again." << std::endl;
        break;
    default:
        std::cout << "Invalid grade" << std::endl;
        break;
    }

    std::cout << "Your grade is " << nilai << std::endl;

    return 0;
}				

