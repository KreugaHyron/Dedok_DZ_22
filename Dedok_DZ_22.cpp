#include <iostream>
//макрос к заданию 1
#define IS_EVEN(x) ((x % 2) == 0)
//макрос к заданию 2
#define SUM_FROM_1_TO_N(n) ((n) * ((n) + 1) / 2)
//макрос к заданию 3
#define POWER(base, exponent) pow((base), (exponent))
using namespace std;
//рекурсивная функция к заданию 4
void printStars(int N) {
    if (N <= 0) {
        return; 
    }
    cout << '*'; 
    printStars(N - 1); 
}
//рекурсивная функция к заданию 5
void printNumbers(int n_1) {
    if (n_1 <= 0) {
        return;
    }

    printNumbers(n_1 - 1);
    cout << n_1 << " "; 
}
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    int num = 6;
    if (IS_EVEN(num)) {
        cout << num << " является четным числом." << "\n";
    }
    else {
        cout << num << " не является четным числом." << "\n";
    }
    cout << "\n";
    //Task_2
    int n = 20;
    int sum = SUM_FROM_1_TO_N(n);
    cout << "Сумма чисел от 1 до " << n << " равна " << sum << "\n";
    cout << "\n";
    //Task_3
    int base = 4;
    int exponent = 4;
    double result = POWER(base, exponent);
    cout << base << " в степени " << exponent << " равно " << result << "\n";
    cout << "\n";
    //Task_4
    int N;
    cout << "Введите число N: ";
    cin >> N;

    if (N <= 0) {
        std::cout << "Число N должно быть больше нуля." << "\n";
    }

    cout << "Результат: ";
    printStars(N);
    cout << "\n";
    //Task_5
    int n_1;
    cout << "Введите число n: ";
    cin >> n_1;

    if (n_1 <= 0) {
        cout << "Число n должно быть больше нуля." << "\n";
    }

    cout << "Результат: ";
    printNumbers(n_1);
    cout << "\n";
}

