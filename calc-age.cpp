#include <iostream>

using namespace std;

int main(){
int age;

    
    cout << "Enter you age: " << endl;
    cin >> age;
    
        
    switch(age){
        case 0:
        cout << "You are baby!";
        break;
        case 1:
        cout << "You are toodler!";
        break;
        case 2:
        cout << "You are young child!";
        break;
        case 3:
        case 4:
        cout << " You are a preschooler";
        break;
        case 5:
        case 6:
        cout << "You are a preteen!";
        break;
        case 7:
        case 8:
        case 9:
        cout << "You are a a school-aged child!";
        break;
        case 10:
        case 11:
        case 12:
        cout << "You are a  tween";
    break;
    case 13: 
    case 14:
    case 15:
    cout << "You are a teenager!";
    break;
    default:
    cout << "You are adult";
        
    }
}
