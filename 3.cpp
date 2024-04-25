#include<iostream>
using namespace std;

int main(){
    string elements[]={"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    char letterB='B';

    //gives the number of elements in elements
    int size = sizeof(elements)/sizeof(elements[0]);

   for (int i = 0; i <size; i++ ){
    for(size_t j = 0; j < elements[i].length(); j++){
        if(elements[i][j]==letterB){
            cout<<elements[i]<<endl;
        }
    }
   }

   return 0;
}