#include <iostream>
using namespace std;

// Global Variable
float result;

float yen_currency(float x){

    result = x * 112.212;
    cout<<"\t\t"<<result<<endl;
    return 0;
}

float rupiah_currency(float x){

    result = x * 14000;
    cout<<"\t\t"<<result<<endl;
    return 0;
}

float poundsterling_currency(float x){

    result = x * 0.571505;
    cout<<"\t\t"<<result<<endl;
    return 0;
}

float pesos_currency(float x){

    result = x * 10.7956;
    cout<<"\t\t"<<result<<endl;
    return 0;
}

int main(){
    
    int amount; 
    char ch;

    do{


    cout<<"\n\t\tEnter the amount (dollar)   :   "; cin>>amount;
    cout<<"\n\t\tChoose what currency do you want   :   ";
    cout<<"\n\t\t1. JAPANESE YEN";
    cout<<"\n\t\t2. INDONESIAN RUPIAH";
    cout<<"\n\t\t3. BRITISH POUNDSTERLING";
    cout<<"\n\t\t4. MEXICAN PESOS\n\n";
    cout<<"\t\t";cin>>ch;

    switch(ch){
        case '1':
            yen_currency(amount);
            break;
        case '2':
            rupiah_currency(amount);
            break;
        case '3':
            poundsterling_currency(amount);
            break;
        case '4':
            pesos_currency(amount);
            break;
        default:
            cout<<"\nError!!";
     }
    }while(ch!='5');
}