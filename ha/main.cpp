#include <iostream>
#define SIZE 5
using namespace std;

void orden(int *pares,int *impares,int *alma,int tam){
    for(int i = 0;i < tam/2-1;i++){
        for(int j=0;j < tam/2;j++){
            *alma = *(pares+i);
            alma++;
            *alma = *(impares+j);
        }
    }
}

bool palindrome(char *cad){
    char *adelante;
    char *atras;
    adelante = cad;
    for(int i = 0;*cad!='\0';i++){
        atras = cad-1;
        atras++;
        cad++;
    }
    while(adelante<=atras){
        if(*adelante!=*atras){
            return false;
        }
        adelante++;
        atras--;
        if(*adelante==' ')
            adelante++;
        if(*atras==' ')
            atras--;
    }
    return true;
}

bool palindrome_feo(char *cad,int len){
    for(int i = 0;*(cad+i) !='\0' ;i++ , len--){
        char letra = *(cad + len - 1);
        if(*(cad+i)!=letra)
            return false;
    }
    return true;
}
int main(){
    char *c = "anita lava la tona";
    //cout << palindrome_feo(c,7) << endl;
    cout << palindrome(c) << endl;
    return 0;
}
