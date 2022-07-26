#include <iostream>
using namespace std;
class Node
{
    int data;
    Node* next;
public:
    void setData(int data)
    {
        this->data = data;
    }
    void setNext(Node* next)
    {
        this->next = next;
    }
    int getData()
    {
        return data;
    }
    Node* getNext()
    {
        return next;
    }
    Node(int data, Node* next = NULL)
    {
        setData(data);
        setNext(next);
    }
    Node()
    {
        data = NULL;
        next = NULL;
    }
    void print(Node *n)//n must be given the starting node of chain
    {
        while (n != NULL)
        {
            cout << n->getData() << endl;
            n=n->getNext();
        }
        }
    int getLenght(Node* n)//n must be given the starting node of chain
    {
        int c = 0;
        while (n != NULL)
        {
            c++;
           n= n->getNext();
        }
        return c;
    }
    int get_Last_Element(Node* n)//n must be given the starting node of chain
    {
        while (n->next != NULL)
        {
            n = n->getNext();
        }
        return n->getData();
    }
    int get_nth_Element(Node *n,int nth)//n must be given the starting node of chain and nth is the term to be return.
    {
        int size = getLenght(n);
        if (nth <= size)
        {
            int node = 0;
            while (n != NULL)
            {
                node++;
                if(node==nth)
                { 
                    return n->getData();
                }
                n = n-> next;
            }
        }
        else
        {
            cout << "\nThe given term is out of range .";
            return NULL;
        }
    }
    int get_First_Element(Node* n)//n must be given the starting node of chain
    {
        return n->getData();
    }

    void insert(Node** start, int data)//To insert an element at last
    {
        Node* newNode = new Node(data);//creating new node

        Node* last = *start;     //finding last node
        while (last->getNext() != NULL)
            last = last->getNext();

        last->setNext(newNode); //setting newNode as the last element of chain
    }
};
int main()
{
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);
    Node* n8 = new Node(8);
    Node* n9 = new Node(9);
    Node* n10 = new Node(10);
    Node* n11 = new Node(11);
    Node* n12 = new Node(12);
    Node* n13 = new Node(13);
    Node* n14= new Node(14);
    Node* n15= new Node(15);
    Node* n16= new Node(16);
    Node* n17= new Node(17);
    Node* n18= new Node(18);
    Node* n19= new Node(19);
    Node* n20= new Node(20);

    n1->setNext(n2);
    n2->setNext(n3);
    n3->setNext(n4);
    n4->setNext(n5);
    n5->setNext(n6);
    n6->setNext(n7);
    n7->setNext(n8);
    n8->setNext(n9);
    n9->setNext(n10);
    n10->setNext(n11);
    n11->setNext(n12);
    n12->setNext(n13);
    n13->setNext(n14);
    n14->setNext(n15);
    n15->setNext(n16);
    n16->setNext(n17);
    n17->setNext(n18);
    n18->setNext(n19);
    n19->setNext(n20);
    
    n1->print(n1);
    cout <<endl<<"Lenght is " << n1->getLenght(n1);
    cout<<endl<<"Last element is "<<n1->get_Last_Element(n1);
    cout<<endl<<"21th element is "<<n1->get_nth_Element(n1, 21);
    cout <<endl<<"First element is "<< n1->get_First_Element(n1);
    
    n1->insert(&n1, 21);//inserting node at the end
    cout << "\nAfter inserting one more element";
    cout << endl;
    n1->print(n1);
    cout << endl << "Lenght is " << n1->getLenght(n1);
    cout << endl << "Last element is " << n1->get_Last_Element(n1);
    cout << endl << "21th element is " << n1->get_nth_Element(n1, 21);
    cout << endl << "First element is " << n1->get_First_Element(n1);
    return 0;
}