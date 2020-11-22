#include<iostream>
#include<cstring>

int main(int argc,char** argv){ 
    char k[4]={'a','b','c'};
    char *a=k;
    char *b= new char[strlen(a)+1];
    int i=0;
    while(*b++=*a++){std::cout<<i++<<std::endl;}
    return 0;
}