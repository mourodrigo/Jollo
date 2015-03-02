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
#define validaParametro(a) (a>0)
//,atoi(    [5]),atoi(argv[6])
void atribuiOrdenado(int * array, int a, int b, int c){
    
    if (maior(a,b,c)) {
        array[0] = a;
        array[1] = b;
        array[2] = c;
    }else if(maior(a,c,b)) {
        array[0] = a;
        array[1] = c;
        array[2] = b;
    }else if(maior(b,a,c)){
        array[0] = b;
        array[1] = a;
        array[2] = c;
    }else if(maior(b,c,a)){
        array[0] = b;
        array[1] = a;
        array[2] = a;
    }else if(maior(c,a,b)){
        array[0] = c;
        array[1] = a;
        array[2] = b;
    }else if(maior(c,b,a)){
        array[0] = c;
        array[1] = b;
        array[2] = c;
    }

}

int getLowest(int * array, int lowest){
    for (int z = lowest; z<=58; z++) {
        if (z != array[0] &&
            z != array[1] &&
            z != array[2] &&
            z != array[3] &&
            z != array[4]) {
            return z;
        }
    }
    return -1;
}

bool validaParametros(int argc, const char * argv[]){
    for (int u = 0; u<argc; u++) {
        if (u > 0) {
            for (int y = 0; u<argc; u++) {
                if (argv[y]==argv[u]) {
                    return false;
                }
            }
        }else{
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    if (argc==6 && validaParametros(argc, argv)){
        int array[5];//,pmenor, pmaior;
        atribuiOrdenado(array, atoi(argv[1]),atoi(argv[2]), atoi(argv[3]));
        if (argv[3]>argv[5]) {
            array[4] = atoi(argv[4]);
            array[3] = atoi(argv[5]);
        }else{
            array[4] = atoi(argv[5]);
            array[3] = atoi(argv[4]);
        }
        if (array[3]>array[0] && array[4]>array[1]) {
            cout << getLowest(array, array[1]);
        }else if(array[3]<array[0] && array[4]<array[1]){
            cout << getLowest(array, array[2]);
        }else{
            cout << "-1";
        }
    }
    return 0;
}
