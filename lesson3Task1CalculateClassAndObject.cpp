#include <iostream>

class Calculator {

private:
    double num1;
    double num2;

public:
    Calculator() {};

    void setNum(double numb1, double numb2) {
        num1 = numb1;
        num2 = numb2;
    }

    double add() { return num1 + num2; }

    double multiply() { return num1 * num2; }

    double subtract_1_2() { return num1 - num2; }

    double subtract_2_1() { return num2 - num1; }

    double divide_1_2() { return num1 / num2; }

    double divide_2_1() { return num2 / num1; }

    bool set_num1(double num1) {

        if (num1 > 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }

    bool set_num2(double num2) {

        if (num2 > 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};

void print_screen(double s, double m, double sub1, double sub2, double div1,
    double div2)

{

    std::cout << "num1 + "
        << "num2 = " << s << std::endl;
    std::cout << "num1 - "
        << "num2 = " << sub1 << std::endl;
    std::cout << "num2 - "
        << "num1 = " << sub2 << std::endl;
    std::cout << "num2 * "
        << "num1 = " << m << std::endl;
    std::cout << "num1/ "
        << "num2 = " << div1 << std::endl;
    std::cout << "num2/ "
        << "num1 = " << div2 << std::endl;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "rus");
    do {

        double num1;
        double num2;

        Calculator calc;

        std::cout << "Введите num1: ";
        std::cin >> num1;
        std::cout << "Введите num2: ";
        std::cin >> num2;

        calc.setNum(num1, num2);

        if (calc.set_num1(num1) == false) {

            std::cout << "Неверный ввод!" << std::endl;

            do {
                std::cout << "Введите num1: ";
                std::cin >> num1;
                calc.setNum(num1, num2);

            } while (num1 <= 0);
        }

        if (calc.set_num2(num2) == false) {
            std::cout << "Неверный ввод!" << std::endl;
            do {
                std::cout << "Введите num2: ";
                std::cin >> num2;
                calc.setNum(num1, num2);
            } while (num2 <= 0);
        }

        double resultSum = calc.add();
        double resultMultiply = calc.multiply();
        double resultsubtract_1_2 = calc.subtract_1_2();
        double resultsubtract_2_1 = calc.subtract_2_1();
        double resultdivide_1_2 = calc.divide_1_2();
        double resultdivide_2_1 = calc.divide_2_1();

        print_screen(resultSum, resultMultiply, resultsubtract_1_2,
            resultsubtract_2_1, resultdivide_1_2, resultdivide_2_1);

        std::cout << std::endl;

    } while (true);
}
