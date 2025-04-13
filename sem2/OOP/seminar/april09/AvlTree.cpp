class AvlTree
{
    struct Node
    {
        int value;
        Node *leftNode;
        Node *rightNode;
    };

    Node *root;

    void AddNode(Node *node)
    {
        if (root == nullptr)
        {
            root = node;
            return;
        }

        FindNextFree(node, root);
    }

    void DeleteNode(Node *node)
    {
        Node *comparee = root;
        while(!comparee)
        {
            if(node->value == comparee->value)
            {
                UpdateDelete(comparee);
                delete comparee;
                comparee = nullptr;
            }

            comparee = (node->value < comparee->value) ? comparee->leftNode : comparee->rightNode;
        }

    }

    void FindNextFree(Node *node, Node *CompareNode)
    {
        if (node->value > CompareNode->value)
        {
            if (CompareNode->rightNode == nullptr)
            {
                CompareNode->rightNode = node;
            }

            FindNextFree(node, CompareNode->rightNode);
        }
        else if (node->value < CompareNode->value)
        {
            if (CompareNode->leftNode == nullptr)
            {
                CompareNode->leftNode = node;
            }
            FindNextFree(node, CompareNode->leftNode);
        }
    }

public:
    AvlTree()
    {
        root = nullptr;
        root->leftNode = nullptr;
        root->rightNode = nullptr;
    }

    void Insert(int val)
    {
        Node *node = new Node;
        node->value = val;
        AddNode(node);
    }

    void Delete(int val)
    {
        Node *node = new Node;
        node->value = val;
        DeleteNode(node);
    }

    ~AvlTree()
    { // Предполагам с бфс мога да изтривам рекурсивно върховете, докато не остане само корена, който ше бъде изтрит.
    }
};