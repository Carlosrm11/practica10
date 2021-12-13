#include <stdlib.h>
#include <stdio.h>
#include "funciones_cripto.h"


void cifrado_xor(char *file_in,char *file_out,std::string key){
    FILE *f_in;
    FILE *f_out;
    int dato=0;
    int dato_k=0;
    int i= 0;

    if((f_in=fopen(file_in,"rb")) == NULL){
        perror(file_in);
        return ;
    }
    f_out=fopen(file_out,"wb");

    fread(&dato,sizeof(int),1,f_in);

    while(!feof(f_in)){
        dato_k =key[i]^0x80;
        dato=dato^dato_k; // XOR con todos 128 (80 en hexadecimal)
        fwrite(&dato,sizeof(int),1,f_out);
        fread(&dato,sizeof(int),1,f_in);
        if(i<key.size()){
            i++;
        }else{
            i=0;
        }
    }
    fclose(f_in);
    fclose(f_out);

    return;
}



int cifrado_cesar(char *file_in,char *file_out,std::string op){

    FILE *f_in;
    FILE *f_out;
    char c;
    int it=0;
    int k = 3;
    int letras=0;
    int palabras=0;

    if((f_in=fopen(file_in,"r")) == NULL){
        perror(file_in);
        return -1;
    }
    f_out=fopen(file_out,"w");

    fread(&c,sizeof(char),1,f_in);

    while(!feof(f_in)){

        if(op.compare("+") == 0){
            if(c == ' ' || c== '\n'){
                palabras ++;
            }
            c = c + k;
            
        }else{
            c = c - k;
            if(c == ' ' || c== '\n'){
                palabras ++;
            }
        }
        
        fwrite(&c,sizeof(char),1,f_out);
        fread(&c,sizeof(char),1,f_in);
    }
    fclose(f_in);
    fclose(f_out);
    return palabras;
}