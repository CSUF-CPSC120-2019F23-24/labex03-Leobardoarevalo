// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
int height, inches, feet;
std::cout << "what is the height in feet:";
std::cin >> height;
// division gives you the amount of feet
feet = height / 12;
// modules gives me the remainder
inches = height % 12;

std::cout << "that person is " << feet <<"'"<< inches << "\""<< '\n';

return 0;
}
