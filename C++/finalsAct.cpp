#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int number, sNumber, yr, age, n1, n2;
    float pg, mg, fg, ave;
    char op;

    for(int i=1; i==1; i++){
        
        cout<<"********** Welcome to Finals Activity **********\n\n";
        cout<<" Enter 1 for Age Calculator: \n Enter 2 for Simple Calculator: \n Enter 3 for Grade Calculator: \n\n";
        cout<<"Enter a number: ";
        cin>>number;

        system("cls");

        if(number==1){
            for(int a=1; a==1; a++){

                cout<<"********** Welcome to AGE CALCULATOR **********\n\n";
                cout<<"Enter birth year: ";
                cin>>yr;
                cout<<"Your age is "<< 2022 - yr<<endl;

                age = 2022 - yr;
                if(age>=60){
                    cout<<"Age bracket : Old";
                }else if(age<=59 && age>=20){
                    cout<<"Age bracket : Adult";
                }else{
                    cout<<"Age bracket : Young";
                }

                cout<<"\n\nContinue?(1) Menu(2) End(any number): ";
                cin>>sNumber;

                system("cls");

                    if(sNumber==1){
                        a--;
                    }else if(sNumber==2){
                        i--;
                    }else{}
            }
        }else if(number==2){
            for(int b=1; b==1; b++){

                cout<<"********** Welcome to Simple Calculator **********\n\n";
                cout<<"Enter first number: ";
                cin>>n1;
                cout<<"Enter second number: ";
                cin>>n2;
                cout<<"Enter operator: ";
                cin>>op;

                    if(op=='+'){
                        cout<<"Sum: "<< n1 + n2;
                    }else if(op=='-'){
                        cout<<"Difference: "<< n1 - n2;
                    }else if(op=='-'){
                        cout<<"Product: "<< n1 * n2;
                    }else if(op=='/'){
                        cout<<"Quotient: "<< n1 / n2;
                    }else{
                        cout<<"INVALID OPERATOR!!\n\n";
                    }
                
                cout<<"\n\nContinue?(1) Menu(2) End(any number): ";
                cin>>sNumber;

                system("cls");

                    if(sNumber==1){
                        b--;
                    }else if(sNumber==2){
                        i--;
                    }else{}
            }
        }else if(number==3){
            for(int c=1; c==1; c++){

                cout<<"********** Welcome to Grade Calculator **********\n\n";
                cout<<"Enter Prelim Grade: ";
                cin>>pg;
                cout<<"Enter Midterm Grade: ";
                cin>>mg;
                cout<<"Enter Finals Grade: ";
                cin>>fg;

                ave = (pg * .3) + (mg * .3) + (fg * .4);

                if(ave>98.5){
                    cout<<"\n\nYour Average is "<< ave;
                    cout<<"\nSystem grade : 1.00";
                    cout<<"\nRemarks : passed";
                }

                cout<<"\n\nContinue?(1) Menu(2) End(any number): ";
                cin>>sNumber;

                system("cls");

                    if(sNumber==1){
                        c--;
                    }else if(sNumber==2){
                        i--;
                    }else{}
            }
        }
    }
}