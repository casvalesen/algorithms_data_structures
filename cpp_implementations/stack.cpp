# include <iostream>
using namespace std; 

// Define structure
class Stack 

    {
    public: 
        // Class constructor
        Stack(int nElements);

        int nElements;
        //Members 
        int *arr;
        int top;
        
        // Member functions 
        void stackEmpty();
        void push(int x);
        void pop();
    };

    // Constructor function for class Declaring array of lenght n 
    Stack::Stack(int nElements)
    {
        cout << "Constructing Stack" << endl;
        arr = new int[nElements];
        top = -1;
    }

    // Member functions
    void Stack::stackEmpty()
    {
    cout << "Checking if if stack is empty" << endl;
    }

    void Stack::push(int x)
    {
        cout << "Pushing" << endl;
        top = top+1; 
        cout << "Stack.top: "<< top << endl; 
    }

    void Stack::pop()
    {
        cout << "Popping" << endl;
    }

// Programme testing the class
int main()
{
    int nElements; 
    int x;
    
    nElements = 2;

    // Initialise stack
    Stack firststack(nElements);
    cout << "Initialised array \n";
    cout << "stackArray: ";
    for (int i=0; i< nElements; i++)
    {cout << firststack.arr[i] <<" ";}

    cout << "top: " << firststack.top << endl; 

    //Push two numbers onto stack and check result

    cout << "enter an int to add to the stack";
    cin >> x;
    firststack.push(x);
    cout << "\n stackArray: ";  //stackArray
    for (int i=0; i< nElements; i++)
    {cout << firststack.arr[i] <<" ";}
    
    cout << "top: " << firststack.top; 

    // Pop one number from stack and check result

    return 0;
}


