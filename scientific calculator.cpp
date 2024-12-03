#include<iostream>
#include<conio.h>
#include<cmath>
#include<windows.h>
using namespace std;
void show_calculator(){
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"                                                                      "<<endl;
    cout<<"                             SCIENTIFIC                               "<<endl;
    cout<<"                             CALCULATOR                               "<<endl;
    cout<<"                                                                      "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          +          |            -            |            *         "<<endl;
    cout<<"         Add         |          Minus          |        Multiply      "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          /          |            M            |            L         "<<endl;
    cout<<"        Devide       |           Mod           |           Log        "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          S          |            C            |            P         "<<endl;
    cout<<"        Square       |          Cube           |          Power       "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          s          |            c            |            t         "<<endl;
    cout<<"         sin         |           cos           |           tan        "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          r          |            k            |           .          "<<endl;
    cout<<"      sqaure root    |          Clear          |          Close       "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
}
void display_output(double answer){
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"                                           ---------------------------"<<endl;
    cout<<"     CURRENT                              |                           "<<endl;
    cout<<"     OUTPUT IS :                          |                   "<<answer<<endl;
    cout<<"                                          ----------------------------"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          +          |            -            |            *         "<<endl;
    cout<<"         Add         |          Minus          |        Multiply      "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          /          |            M            |            L         "<<endl;
    cout<<"        Devide       |           Mod           |           Log        "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          S          |            C            |            P         "<<endl;
    cout<<"        Square       |          Cube           |          Power       "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          s          |            c            |            t         "<<endl;
    cout<<"         sin         |           cos           |           tan        "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"          r          |            k            |           .          "<<endl;
    cout<<"      sqaure root    |          Clear          |          Close       "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
}
int main(){

    double num1 = 0.0;
    double num2 = 0.0;

    double answer = 0.0;
    char inp ='\n';
    show_calculator();
    while(inp!='.'){
        cout<<"Enter: ";
        cin>>inp;
        //decision
        //of whether we want to variables as input or one
        if(inp =='+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p'){
            cout<<"Enter num1: ";
            cin>>num1;

            cout<<"Enter Num2: ";
            cin>>num2;

        }else if(inp == 'k' || inp == '.'){
            //just don't take any input
        }else{
            cout<<"Enter Num1";
            cin>>num1;
        }
        switch(inp){
        case '+':
            answer = num1+num2;
            break;
        case '-':
            answer = num1-num2;
            break;
        case '*':
            answer = num1*num2;
            break;
        case '/':
            answer = num1/num2;
            break;
        case 'm':
            answer = int(num1) % int(num2);
            break;
        case 'L':
            answer = log(num1);
            break;
        case 'S':
            answer = num1*num1;
            break;
        case 'C':
            answer = num1*num1*num1;
            break;
        case 'P':
            answer = pow(num1,num2);
            break;
        case 's':
            answer = sin(num1);
            break;
        case 'c':
            answer = cos(num1);
            break;
        case 't':
            answer = tan(num1);
            break;
        case 'r':
            answer = sqrt(num1);
            break;
        case 'k':
            break;
        case '.':
            break;
        default:
            cout<<"-----You Entered Invalid Value-------"<<endl;

        }
        system("cls");
        display_output(answer);
    }
    //system("cls");


return 0;
}
