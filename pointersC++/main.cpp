//На языке С++ написать следующие функции, возвращающие void и использующие передачу параметров по указателю:
//1. Функцию инкремента, то есть увеличивающую число на 1
//2. Функцию декремента, то есть уменьшающую число на 1
//3. Функцию возведения в квадрат, то есть возводящую текущее число в квадрат
//4. Функцию обмена местами значений двух переменных
//5. Функцию инвертирования числа, то есть записи его цифр в обратном порядке, то есть если был передан параметр 123, то после исполнения этой фунции в переменной будет находится 321
//6. Функцию модуля числа, то есть если было передано положительное число, то оно останется таким же, а если отрицательное, то станет положительным с таким же значением,
// то есть если в параметре было число 5, то оно таким же и останется, а если -5, то станет 5.

#include <iostream>
using namespace std;

void Increment(int *pa)
{
    (*pa)++;
}
void Decrement(int *pa)
{
    (*pa)--;
}
void Pow(int *pa)
{
    int a = *pa;
    *pa = a * a;
}
void Swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}
void Inversion(int *pa)
{
    int n = *pa;
    int count = 0;
    while(n > 0)
    {
        count = count * 10 + n % 10;
        n /= 10;
    }
    *pa = count;
}
void abc(int *px)
{
    if (*px < 0)
        *px = -*px;
    else
        *px;
}


int main()
{
    int a = 4, b = 255;
    Increment(&a);
    cout << "Incremented a = " << a << endl;
    Decrement(&a);
    cout << "Decremented a = " << a << endl;
    Pow(&a);
    cout << "Squared a = " << a << endl;
    cout << "b = " << b << endl;
    Swap(&a, &b);
    cout << "Swapped a = " << a << " and b = " <<  b << endl;
    Inversion(&a);
    cout <<"Inversion of this number: " << a << endl;
    int x = -15;
    cout << "Number x: " << x << endl;
    abc(&x);
    cout << "Module of number: " << x << endl;

    return 0;
}
