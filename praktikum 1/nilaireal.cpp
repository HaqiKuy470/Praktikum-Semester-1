
#include <iostream>
#include <iomanip>


int main()
{


   double real;
   real = 182.2182713674821746;
  
   std::cout << "Nilai real = "
             << std::fixed
             << std::setprecision(15)
             << real << std::endl;
            
   return 0;
}
