
#include <iostream>

int main()
{
    double a,b,d;
    char c;
    std::cout<<"enter two numbers\n";
    std::cin>>a>>b;
    std::cout<<"choose 1 for addition(+)\n"<<"choose 2 for sunstraction(-)\n"<<"choose 3 for multiplication(*)\n"
    <<"choose 4 for division(/)\n";
    std::cin>>c;
    switch (c)
    {
        case '1' :
            d=a+b;
            std::cout<<"result of addition is "<<d;
            break;
        case '2' :
            d=a-b;
            std::cout<<"result of substraction is "<<d;
            break;
        case '3' :
            d=a*b;
            std::cout<<"result of multiplication is "<<d;
            break;
        case '4' :
            d=a/b;
            std::cout<<"result of division is "<<d;
            break;
        default:
            std::cout << "Invalid input! Please enter a valid choice.";
                break;
    }
    return 0;
}
