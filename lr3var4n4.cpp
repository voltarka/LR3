#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
int main(){
    double b;
    double c;
    int l1;
    int l2;
    std::string a ="";
    std::cout<<"Введите произвольную строку"<< std::endl;
    getline(std::cin,a);
    std::cout<< std:: endl;
    std::cout<< a;
    std::cout<< std:: endl;
    std::cout << a.length();
    std::cout<< std:: endl;
    b = std::count(a.begin(), a.end(), 'b');
    c = a.length();
    std::cout << "Доля букв b в строке по отношению к длине строки: ";
    std::cout << b/c;
    std::cout<< std:: endl;
    std::cout << "Сейчас мы будем получать подстроку. Для этого вам необходимо ввести номер, с которого будет начинаться новая строка и ввести номер, которым она будет заканчиваться: "<<std::endl;
    std::cout<< "l1 - ";
    std::cin>> l1;
    std::cout<< std:: endl;
    std::cout<< "l2 - ";
    std::cin>> l2;
    std::cout<< std:: endl;
    if ((l1<0)|(l1>l2)|(l2>c))
        std::cout<< "Вы ввели неккоректный номер символа в строке"<< std::endl;
    else
        std::cout<< "Ваша подстрока: "<< a.substr(l1, l2-l1+1)<< std::endl;
    std::cout<< "Дано предложение Can you can a can as a canner can can a can? , сейчас каждое слово can заменится на введное Вами слово: "<< std::endl;
    std::string word = "Can you can a can as a canner can can a can?";
    std::string d ="";
    std::cout<< "Слово - ";
    std::cin >> d;
    std::cout<< std::endl;
    for (int i = 0; i<=word.size()-3; i++){
        if ((word.substr(i,4) == "can ") || (word.substr(i,4) == "Can ") || (word.substr(i,4) == "can?")) {
            word.erase(i,3);
            word.insert(i, d);
        }
    }
    std::cout << word << std::endl;
    return 0;
}
