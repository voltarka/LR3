#include <iostream>
#include <cmath>
int main(){
int n;
int *arr = new int [n];
int i;
int a;
int b;
int c=0;
std::cout<< "Введите количество элементов массива n>10"<< std::endl;
std::cin>> n;
std::cout<< std::endl;
std::cout<<"Введите элементы массива: "<< std::endl;
for (i=0;i<n; i++){
    std::cin>> arr[i];
}
std::cout<< "Массив, четные значения которого возведены в квадрат: "<< std::endl;
for (i=0;i<n; i++){
    if (arr[i]%2 == 0)
        arr[i]= pow(arr[i],2);
    std::cout<< arr[i]<< "  "<< std::endl;
}
std::cout<< "Введите номера массивов сумму между которыми Вы хотите найти: "<< std::endl;
std::cin>> a;
std::cout<< std::endl;
std::cin>> b;
std::cout<< std::endl;
if ((a>b)|(a<0)|(b>n))
    std::cout<< "Вы ввели недопустимые номера элементов массива"<<std::endl;
else{
for (i=(a-1); i<=(b-1); i++){
c = c + arr[i];
}

std::cout<<"Сумма элементов массива: "<< c<< std::endl;
}

delete[]arr;
    return 0;
}
