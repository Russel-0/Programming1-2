#include <iostream>

using namespace std;

void bmiCalcu();
void ageCalcu();
void basicCalcu();

int main(){

    int option;

    cout<<"BMI & AGE calculator\n";
    cout<<"[1] BMI Calculator\n";
    cout<<"[2] Age Calculator\n";
    cout<<"[3] Basic Calculator\n";
    cout<<": ";
    cin>>option;

    system("CLS");

    switch (option)
    {
    case 1:
        bmiCalcu();
        break;
    case 2:
        ageCalcu();
        break;
    case 3:
        basicCalcu();
        break;
    default:
        break;
    }
   
    return 0;
}

void bmiCalcu(){

    int age;
    float w, h;
    char ans;

    cout<<"BMI CALCULATOR\n";
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your weight: ";
    cin>>w;
    cout<<"Enter your height: ";
    cin>>h;

    cout<<"Your BMI: "<< w / (h * h) * 10000;
    
        float bmi = w / (h * h) * 10000;
        if(bmi<=18.5){
            cout<<" - Underweight";
        }else if(bmi>=18.4 && bmi<=24.9){
            cout<<" - Normal";
        }else if(bmi>=25 && bmi<=29.9){
            cout<<" - Overweight";
        }else{
            cout<<" - Obese";
        }

    cout<<"\nDo you want to continue?(Y/N) ";
    cin>>ans;

    system("CLS");

        if(ans=='Y' || ans=='y'){
            bmiCalcu();
        }else{
            main(); 
        }


}

void ageCalcu(){

    int yr, age;
    char ans;

    cout<<"AGE CALCULATOR\n";
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

    cout<<"\nDo you want to continue?(Y/N) ";
    cin>>ans;

    system("CLS");

        if(ans=='Y' || ans=='y'){
            ageCalcu();
        }else{
            main(); 
        }

}

void basicCalcu(){

    float n1, n2;
    char op, ans;

    cout<<"**************************************\n";
    cout<<"**************************************\n\n";

    cout<<"VALID OPERATOR\n";
    cout<<"ADDITION [+]\n";
    cout<<"SUBTRACTION [-]\n";
    cout<<"MULTIPLICATION [*]\n";
    cout<<"DIVISION [/]\n";

    cout<<"\n**************************************\n";
    cout<<"**************************************\n\n";

    cout<<"Basic Calculator\n";
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    cout<<"Enter operator: ";
    cin>>op;

    if(op=='+'){
        cout<<"SUM: "<< n1 + n2;
    }else if(op=='-'){
        cout<<"DIFFERENCE: "<< n1 - n2;
    }else if(op=='*'){
        cout<<"PRODUCT: "<< n1 * n2;
    }else if(op=='/'){
        cout<<"QOUTIENT: "<< n1 / n2;
    }else{
        cout<<"INVALID OPERATOR!";
    }

    cout<<"\nDo you want to continue?(Y/N) ";
    system("CLS");

        if(ans=='Y' || ans=='y'){
            basicCalcu();
        }else{
            main(); 
        }

    cout<<"\n\n**************************************\n";
    cout<<"**************************************";



}
