#include <iostream>

using namespace std;

int stack[100];
int top = -1;
int stackSize = 100;

void Push(int pushData){
            if(top <= stackSize - 1){
                top += 1;
                stack[top] = pushData;
                cout << pushData << " pushed in stack." << endl;
            }
            else{
                 cout << "Stack is full." << endl;
            }
}

int Pop(){
        if(top >= 0){
            return stack[top];
        }
        else{
            cout << "Stack is Empty." << endl;
            return -1;
        }
}

void Display(){
        if(top >= 0){
             cout << "Stack Data: ";
             for(int i  = top; i >= 0; i--){
                cout << stack[i] << " ";
             }
             cout << endl;
        }
        else{
            cout << "Stack is Empty." << endl;
        }
}

int main()
{
    int choice, pushValue, poppedValue;
    cout << "Press 1 to push element in stack." << endl;
    cout << "Press 2 to pop element from stack." << endl;
    cout << "Press 3 to display element of the stack." << endl;
    cout << "Press 4  Exit System." << endl;

    do{
      cout << "Select Your Choice: ";
      cin >> choice;
      switch(choice){
             case 1:{
                    cout << "Enter the pushing element: ";
                    cin >> pushValue;
                    Push(pushValue);
                    break;
             }
             case 2:{
                    poppedValue = Pop();
                    if(poppedValue != -1){
                       cout << "Popped element: " << poppedValue << endl;
                       top--;
                    }
                    break;
             }
             case 3:{
                  Display();
                  break;
             }
             case 4:{
                    cout << "Exit System." << endl;
                    break;
             }
             default:{
                  cout << "You peek the WRONG choice. Select your choice again:";
             }
      }
    } while(choice != 4);
    return 0;
}
