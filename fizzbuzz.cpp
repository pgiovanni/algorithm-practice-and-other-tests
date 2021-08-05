#include <bits/stdc++.h>
#include <typeinfo>


int main () {


    for (int i = 1; i <=100; i++)
    {

        if (i%5 == 0 && i%3 == 0)
            std::cout << "fizzbuzz" << std::endl;
        else if (i%3 == 0)
            std::cout << "fizz" << std::endl;
        else if (i%5 == 0)
            std::cout << "buzz" << std::endl;
        else 
            std::cout << i << std::endl;


    }

    
    std::cout << "Test" << std::endl;



    return 0;

}



