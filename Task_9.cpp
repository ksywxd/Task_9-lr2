#include <iostream>
#include <cmath>

int main()
{
    int num;
    double z, x, y, a, b, fi;
    std::cout << "Enter numder: 1. 2x \n2. x^3 \n3. x/3" << std::endl;
    std::cin >> num;
    std::cout << "Enter z, a, b: " << std::endl;
    std::cin >> z >> a >> b;
    if (z <= 0) {
        x = powl(z, 2) / 2;
        std::cout << "z<=0" << std::endl;
    }
    else {
        x = sqrt(z);
        std::cout << "z>0" << std::endl;
    }
    switch (num) {
    case 1:
        std::cout << "f(x)=2x" << std::endl;
        fi = 2 * x;
        y = (b * fi) / cos(x) + a * log(abs(tan(x / 2)));
        std::cout << "x = " << x << "\n" << "y = " << y << std::endl;
        break;
    case 2:
        std::cout << "f(x)=x³" << std::endl;
        fi = powl(x, 3);
        y = (b * fi) / cos(x) + a * log(abs(tan(x / 2)));
        std::cout << "x = " << x << "\n" << "y = " << y << std::endl;
        break;
    case 3:
        std::cout << "f(x)=x/3" << std::endl;
        fi = x / 3;
        y = (b * fi) / cos(x) + a * log(abs(tan(x / 2)));
        std::cout << "x = " << x << "\n" << "y = " << y << std::endl;
        break;
    default:
        std::cout << "incorrect" << std::endl;
    }


    return 0;
}