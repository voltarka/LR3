#include <iostream>
#include <vector>
int main(){
    int n;
    int m;
    float c;
    std::cout<< "Введите колиечство элементов массива m>5"<< std::endl;

    std::cin>> m;
    std::vector<double> a(m);

    std::cout<< std::endl;
    std::cout<< "Введите элементы массива:"<< std::endl;
    for (n=0; n<m; n++){
        std::cin>> a[n];
    }
    for (int i : a)
    std::cout << i << " ";
     std::cout<< std::endl;
      std::cout<< "Массив с номером варианта в качестве последнего элемента: "<< std::endl;
    a.push_back(4);
    for (int i : a)
    std::cout << i << " ";
     std::cout<< std::endl;
    std::cout<< "Массив деленный на последний элемент:"<< std::endl;
     for (n=0; n<m+1; n++){
     c = a[n]/4;
     std::cout<< c << "  ";
     }
      std::cout<< std::endl;
     std::cout<< "Массив без первого элемента, который превышает двойку: ";
for (n=0; n<m+1; n++){
    if (a[n]>2){
        a.erase(a.begin()+n);
        break;
    }
}
for (int i : a)
std::cout << i << " ";
 std::cout<< std::endl;
    return 0;
}
