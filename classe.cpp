#include "classe.h"
#include <stdio.h>
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

bool GPS_CLASS::something()
{
    cout << "something" << endl;
    return true;
}

int VIRLOC_CLASS::VIRLOC_CT::addValue(int ct, int value)
{
    ct_map[ct] = ct_map[ct] + value;
    cout << "CT" << ct << " valor: " << ct_map[ct] << endl;
    return ct_map[ct];
}

int VIRLOC_CLASS::VIRLOC_ID::getValue(char * return_id)
{
    strcpy(return_id, "1234");
    return 1;
}

    // //construtor
    // carro::carro(int a=0, float v=-1, float k=-1){
    //     ano = a;
    //     valor = v;
    //     km = k;
    // }

    // //get e set
    // //ano
    // void carro::setano(int a){
    //     ano = a;
    //     //this->ano = ano;
    // }
    // int carro::getano(){
    //     return ano;
    // }
    // //valor
    // void carro::setvalor(float v){
    //     valor = v;
    // }
    // float carro::getvalor(){
    //     return valor;
    // }
    // //km
    // void carro::setkm(float k){
    //     km = k;
    // }
    // float carro::getkm(){
    //     return km;
    // }