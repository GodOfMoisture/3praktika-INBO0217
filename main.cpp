#include <iostream> 
#include <cstring> 
using namespace std; 

class Book { 
public: 
string janr; 
string avtor; 
string nazvanie; 
int god_izdania; 
int cena; 

void set() 
{ 
cout<<"Введите жанр: "; 
cin>>janr; 
cout<<"Введите автора: "; 
cin>>avtor; 
cout<<"Введите название: "; 
cin>>nazvanie; 
cout<<"Введите год издания: "; 
cin>>god_izdania; 
cout<<"Введите цену: "; 
cin>>cena; 
} 
void show() 
{ 
cout<<"Жанр: "<<janr<<endl; 
cout<<"Автор: "<<avtor<<endl; 
cout<<"Название : "<<nazvanie<<endl; 
cout<<"Год издания: "<<god_izdania<<endl; 
cout<<"Цена: "<<cena<<endl; 
} 

}; 


int main() 
{ 
setlocale(LC_ALL, "rus"); 
Book n1; 

n1.set(); 
n1.show(); 


system("pause"); 
return 0; 
}
