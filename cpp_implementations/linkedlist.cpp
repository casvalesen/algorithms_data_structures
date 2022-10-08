# include <iostream>
using namespace std;

class IntNode

{
    public: 
    // Class constructor
    IntNode(){}
    IntNode(int theValue, IntNode* theLink)
    : value(theValue),link(theLink){}

    // Public accessor functions. Members are private to adhere to encapsulation
    IntNode * getlink() const {return link;}
    int getValue() const {return value;}

    // public mutator functions
    void setValue(int theValue){ value = theValue; }
    void serLink (IntNode* pointer){ link = pointer; }

    private: 
        // Member variables are private 
        int value; 
        // Pointer to next object
        IntNode *link;

}

typedef IntNode* IntNodePtr;

// Function to add a node at the head of a linked list
// Function declaration
void headInsert(IntNodePtr& head, int theValue);

//Function definition 
void headInsert(IntNodePtr& head, int theValue)

{
    head = new IntNode(theValue, head); 
}

// Main programme to test linked list
int main() 

{
    

return 0; 
}