#include <stdio.h>
#include <iostream>
#include <assert.h>

//#define MACROS1 printf("hello world\n");

//#define MIN(a,b) a<b ? a : b

#define QUOTE(x) #x 


int main(int argc, char* argv[]){

#ifdef MACROS1
    printf("MACROS1=" QUOTE(MACROS1) "\n"); 
#endif

    assert(3>5);

     //MIN(3, 5)

     if (argc<=1){
          std::cerr<<"no args given"<<std::endl;
     }

     std::cout<<" arguments;"<<std::endl;
     for(int k=0; k<argc; k++){
        std::cout<<" argv["<<k<<"] == "<<argv[k]<<std::endl;
     }
     
     return 0;
}
