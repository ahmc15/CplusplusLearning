#include <iostream>
#include <limits>

using namespace std;


int square(int side);
int rectangle(int side1, int side2);
int menudecision(int option);
double triangle(int width,int heigth);
double circle(int radius);
bool isValid(string);
bool isValid();
void initMenu();



main(){
    int option;
    char decision;
    do
    {
        system("cls");
        initMenu();
        cin >> option;
        menudecision(option);
        cout << "Do you want to continue? (Y/N)";
        cin >> decision;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

    }while(decision == 'y' || decision == 'Y');
    return 0;
}
void initMenu(){
    cout << "Enter the option:" << endl;
    cout << "1 = circle" << endl;
    cout << "2 = square" << endl;
    cout << "3 = triangle" << endl;
    cout << "4 = rectagle" << endl;
}
int menudecision(int option){
    int result;
    double radius, side1, side2;

    switch (option){
        case 1:
            //circle
            do{
            cout << "What is the radius?" << endl;
            cin >> radius;
            }while(!isValid());
            result = circle(radius);
            break;
        case 2:
            //square
            cout << "What is the side of the square?" << endl;
            cin >> side1;
            result = square(side1);
            break;
        case 3:
            // triangle
            cout << "What are the sides of the triangle?" << endl;
            cin >> side1;
            cin >> side2;
            result = triangle(side1,side2);
            break;
        case 4:
            //rectangle
            cout << "What are the sides of the rectangle?" << endl;
            cin >> side1;
            cin >> side2;
            result = rectangle(side1,side2);
            break;
        default:
            cout << "none were choosen" << endl;
    }
    cout << result << endl;
    return result;

}
double circle(int radius){
    double area;
    double pi = 3.14;

    area = pi*radius*radius;
    return area;
}
int square(int side){
    int area;

    area = side * side;
    return area;
}
double triangle(int width,int heigth){
    int area;

    area =(width*heigth)/2;
    return area;
}
int rectangle(int side1, int side2){
    int area;

    area = side1 * side2;
    return area;
}
bool isValid(string error_msg)
{
    if(cin.rdstate())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        system("cls");
        initMenu();
        cout << error_msg << endl;
        return false;
    }
    return true;
}
bool isValid()
{
    if(cin.rdstate())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        system("cls");
        initMenu();

        return false;
    }
    return true;
}

bool isValid(string);
