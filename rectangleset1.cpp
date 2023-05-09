#include <iostream>
using namespace std;

void rectangle();
void asterisk();

int main(){
    int choice;
    cout << "1. Area of Rectangle\n";
    cout << "2. Triangle(*)\n";
    cout << "3. Exit\n";
    cout << " : ";
    cin >> choice;
    if (choice == 1){
    	system("cls");
        rectangle();
        }
        else if(choice == 2){
        	system("cls");
            asterisk();
            }
            else if (choice == 3){
            	system("cls");
                cout << "Thank you for using the program.....";
                    }
                    else{
                    	system("cls");
                        main();
                        }
}

void rectangle(){
    float l, w, area;
    cout << "Enter the length : ";
    cin >> l;
   	cout << "Enter the width : ";
    cin >> w;
    system("cls");
    area = (l * w);
    cout << "The area of rectangle is " << area << "\n";
    main();  
}

void asterisk(){
    int ast;
    cout << "Enter the height of triangle : ";
    cin >> ast;
    system("cls");
    for (int x = 1; x <= ast; x++){
        for(int y = 1; y <= x; y++){
            cout << "* ";
        }
        cout << "\n";
    }
    main();
}