#define _GNU_SOURCE
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

unsigned long* array_fibo(size_t n)
{
    // TODO
    unsigned long *fibo = malloc(n*sizeof(unsigned long));
    unsigned long a = 0 ;
    unsigned long b = 1;
    if(n >= 1){
    	*fibo = 0;
    }
    if(n>=2){
    	*(fibo+1) = 1;
    }
	

    for(size_t i = 2; i < n ; i++){
    	*(fibo+i) = a + b;
	a = b;
	b= *(fibo+i);
    }

    return fibo;
}

char* str_toupper(const char* s)
{
    // TODO
    size_t size =  strlen(s)+1;
    char *str = malloc(size*sizeof(char));
    char *p = str;
    while(*s!=0){
    	*(p++) = toupper(*(s++));
    }
    *p = 0;

    return str;

}

unsigned char* array_pal_1(unsigned char* a, size_t len)
{   
    size_t size = strlen(a);
    size_t size1 = strlen(a)*2+1;
    unsigned char *str = realloc(a,size1*sizeof(unsigned char));
    unsigned char *p = str+size;

    for(size_t i = 0 ; i < len ; i ++){
    	*(p++) = *(a--);
    }
    *p = 0;


    return str;
    // TODO


}

void array_pal_2(unsigned char** a, size_t len){

    char *str = realloc(*a,(len+1)*sizeof(char));
    char *p = str + len;
    while(*a != 0){
    	a++;
    }

    for(size_t i = 0 ; i < len ; i ++ ){
    	*(p++) = *(a--);
    }
    *p = 0;


    *a = str;

}


size_t array_min(unsigned char* a, size_t len, unsigned char threshold, unsigned char** result)
{
    // TODO
    char *str = realloc(*result,(len+1)*sizeof(char));
    char *p = str;
    size_t a_size = strlen(a);

    while(a_size != 0 ){
	if(*(a++) < threshold){
		*(p++) = *a;
	}
	a_size--;
    }

    return strlen(*result);
}

void str_checksum(char** s)
{
    // TODO
    size_t size = strlen(*s);
    
}
