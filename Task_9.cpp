#include <iostream>
#include <cmath>

int main()
{
    int num;
    double z, x, y, a, b, fi;
    std::cout << "Enter numder: 1. 2х /n 2. x³ /n 3. x/2" << std::endl;
    std::cin >> num;
    std::cout << "Enter z, a, b: " << std::endl;
    std::cin >> z >> a >> b;
    if (z <= 0) {
        x = powl(z, 2) / 2;
        std::cout << "z<=0";
    }
    else {
        x = sqrt(z);
        std::cout << "z>0";
    }
    switch (num) {
    case 1:
        std::cout << "f(x)=2x" << std::endl;
        fi = 2 * x;
        y = (b * fi) / cos(x) + a * log(abs(tan(x / 2)));
        std::cout << "x = " << x << "/n" << "y = " << y << std::endl;
    case 2:
        std::cout << "f(x)=x³" << std::endl;
        fi = powl(x, 3);
        y = (b * fi) / cos(x) + a * log(abs(tan(x / 2)));
        std::cout << "x = " << x << "/n" << "y = " << y << std::endl;
    case 3:
        std::cout << "f(x)=x/3" << std::endl;
        fi = x / 3;
        y = (b * fi) / cos(x) + a * log(abs(tan(x / 2)));
        std::cout << "x = " << x << "/n" << "y = " << y << std::endl;
    default:
        std::cout << "incorrect" << std::endl;
    }


    return 0;
}