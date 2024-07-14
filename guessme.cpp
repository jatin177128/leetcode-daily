#include<iostream>
using namespace std;
int main(){
    char country[] = "brazil";
    char *ptr ;
    ptr = country ;
    while(*ptr!= '\0'){
        printf("%c ", *ptr);
        ptr++;
    }
    return 0;
}