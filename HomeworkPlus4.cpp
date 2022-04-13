// HomeworkPlus4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int const MINNUMBER = 10;
int const MAXNUMBER = 20;
int fistUserNumber;
int secondUserNumber;
int limit = 50;
bool bIsSimple = true;

void NumberCheck( int a, int b)
{
    if ((a + b) >= MINNUMBER && (a + b) <= MAXNUMBER)
    {
        std::cout << "True" << std::endl;
    }
    else std::cout << "False"<< std::endl;
}

void OtherNumberCheck()
{
    int const firstConst = 2;
    int const secondConst = 8;

    if (firstConst ==10|| secondConst== 10 || (firstConst + secondConst) == 10)
    {
        std::cout << "True"<<std::endl;
    }

    else std::cout << "False"<<std::endl;
}

void OddNumbers()
{
    for (int i = 0; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << i<<" ";
        }
    }

    std::cout<<std::endl;
}

void SimpleNumber(int n) {

    //проверяем на положительность, потому что не доверяем пользователю
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            //поочередно делим число на все числа до него самого пока не появится первый делитель
            //если первый делитель появился до самого числа прерываем цикл и выставляем флажок "false"
            if (n % i == 0 && i != 1 && i != n)
            {
                bIsSimple = false;
                break;
            }

        }
    }

    else bIsSimple = false;

    //поверяем флаг и выводим результат
    bIsSimple == false ? std::cout << "this is not a simple number"<<std::endl : std::cout << "This is a simple number" <<std::endl;
}

void LeapYear(int a)
{
    //Все еще не доверяю своим пользователям
    if (a >= 1 && a <= 3000) {
        
        //пошел в решении от обратного, потому что так запись получалась короче
        if (a % 4 != 0 || (a % 100 == 0 && a % 400 != 0))
        {
            std::cout << "This is not a leap year" << std::endl;
        }

        else std::cout << "This is a leap year" << std::endl;

    }

    else std::cout << "You have entered invalid year ";

}

int main()
{
    std::cout << "Enter first integer number: ";
    std::cin >> fistUserNumber;

    std::cout << "Enter second integer number: ";
    std::cin >> secondUserNumber;

    NumberCheck(fistUserNumber, secondUserNumber);
    OtherNumberCheck();
    OddNumbers();
    
    int userNum;
    std::cout << "Enter any positive number: ";
    std::cin >> userNum;
    SimpleNumber(userNum);

    int year;
    std::cout << "Enter a year from 1 to 3000: ";
    std::cin >> year;
    LeapYear(year);

    return 0;
}

