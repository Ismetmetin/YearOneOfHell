class Stack 
{
    struct Node
    {
        char* name;
        int age;
        Node* next;
    };

    Node* top;

public:
 
    Stack() 
    {
        top = nullptr;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void push(Node * node){
        
        if(node == nullptr)
            return;

        node->next = top;
        top = node;       
       
    }

    void *pop ()
    {
        if(isEmpty())
            return nullptr;
        
        Node* curr = top;
        top = top->next;
        delete [] curr;
    }

    Node *peek()
    {
        if(isEmpty())
            return nullptr;

        return top;
    }

    ~Stack(){

        while(!isEmpty())
        {
            pop();
        }
    }
    

};





