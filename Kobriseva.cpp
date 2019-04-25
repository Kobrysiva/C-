#include <iostream>
#include "stdio.h"

struct book{
    char[30] Author;
    char[30] Genre;
    char[30] BookName;
    int Tiraz; 
};

int Main(){
book Books[n];
for(int i=0; i<n; i++){
    if(Books[i].Tiraz<10000){
        std::cout<<"Кол-во книг, тираж которых, не превышает 10000 экземпляров:"<<endl;
        std::cout<<"Автор: "<<Books[i].Author;<<endl<<"Жанр: "<<Books[i].Genre<<endl<<"Наименование книги: "<<Books[i].BookName<<endl<<"Тираж: "<<Books[i].Tiraz<<endl<<endl;
    }
}
std::cin.get();
return 0;

}