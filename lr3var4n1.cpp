#include <iostream>
#include <ctime>
int main(){
    std::srand(std::time(0));
int arr[10];
int n;
std::cout<< "Случайный массив: ";
for(int i=0; i<10;i++){
    arr[i]= std::rand()%21-10;
    std::cout<< arr[i]<<"  ";
}
std::cout<< std::endl;
n= arr[8]-arr[2]-arr[5];
std::cout<< "Результат разности 9-го 3-го и 6-го элементов равен  "<< n<< std::endl;
    return 0;
}
