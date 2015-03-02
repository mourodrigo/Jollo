//
//  main.cpp
//  Jollo
//
//  Created by Rodrigo on 26/02/15.
//  Copyright (c) 2015 rodrigo. All rights reserved.
//

#include <iostream>
using namespace std;

#define maior(a, b, c) ( ((a) < (b)) && ((b) < (c)) )
//,atoi(    [5]),atoi(argv[6])
void retornaVetorOrdenado(int a, int b, int c){
    printf("%d %d %d", a,b,c);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    if (argc==6) {
        int argsint[]={atoi(argv[1]),atoi(argv[2]), atoi(argv[3])};
        if (maior(argsint[0], argsint[1], argsint[2])) {
            retornaVetorOrdenado(argsint[0], argsint[1], argsint[2]);
        }else if(maior(argsint[0], argsint[2], argsint[1])) {
            retornaVetorOrdenado(argsint[0], argsint[2], argsint[1]);
            
        }else if(maior(argsint[1], argsint[0], argsint[2])){
            retornaVetorOrdenado(argsint[1], argsint[0], argsint[2]);
            
        }else if(maior(argsint[1], argsint[2], argsint[0])){
            retornaVetorOrdenado(argsint[1], argsint[2], argsint[0]);
            
        }else if(maior(argsint[2], argsint[0], argsint[1])){
            retornaVetorOrdenado(argsint[2], argsint[0], argsint[1]);
            
        }else if(maior(argsint[2], argsint[1], argsint[0])){
            retornaVetorOrdenado(argsint[2], argsint[1], argsint[0]);
            
        }
        
    }else{
        cout << "Faltam valores a serem informados";
    }
    
    
    
    return 0;
}
