#include <iostream>
#include <conio.h>
#include <stack>
#include <queue>
#include <list>
#include <cstdlib>
#include <vector>
#include <map>
#define MAXSIZE 100
#define MAX 100
#define MAX_VERTICES 10
const int MAX_SIZE = 100;
using namespace std;

  struct node {
        struct node *ladd;
        int data;
        struct node *radd;
    };
    struct node*root=NULL,*new1;
class Tree {
    
public:
void create(struct node*r,struct node*new1){   system("CLS");
	if (new1->data<r->data)
    {
        if (r->ladd==NULL)
        {
            r->ladd=new1;
        } else
        {
            create(r->ladd,new1);
        }}



        if(new1->data>r->data){
            if(r->radd==NULL){
                r->radd=new1;
            }
        else
        {
            create(r->radd,new1);
        }
    }


    if(new1->data==r->data){
cout<<"                                                                                       DUPLICATE ELEMENT NOT ALLOWED"<<endl;
    }



}
void inorder(struct node *r){  system("CLS");
    if (r!=NULL)
    {
        inorder(r->ladd);
        cout<<"                                                                                      ELEMENT PRESENT IN TREE IN INORDER : \t"<<r->data<<endl;
        inorder(r->radd);
    }
}
void preorder(struct node* r) {  system("CLS");
    if (r != NULL) {
        cout << "                                                                                      ELEMENT PRESENT IN TREE IN PREORDER : \t" << r->data<<endl;
        preorder(r->ladd);
        preorder(r->radd);
    }
}
void postorder(struct node* r) {  system("CLS");
    if (r != NULL) {
        postorder(r->ladd);
        postorder(r->radd);
        cout << "                                                                                      ELEMENT PRESENT IN TREE IN POSTORDER  : \t" << r->data<<endl;
    }
}

};
  

class Stack
{
    int top;
    int stackk[MAX];

public:
    Stack()
    {
        top = -1;
    }
    void push()
    {  
    
      system("CLS");
        int x;
        if (top == MAX - 1)
        {
            cout << "                                                                                      STACK OVERFLOW"<<endl;
        }
        else
        {
            cout << "                                                                                      ENTER A VALUE TO PUSH IN STACK:  ";
            cin >> x;
            cout << "                                                                                      ELEMENT IS PUSHED INTO STACK IS : " << x << endl;
            top++;
            stackk[top] = x;
        }
    }
    void pop()
    {
  system("CLS");
        if (top < 0)
        {
            cout << "                                                                                      STACK IS EMPTY"<<endl;
        }
        else
        {
            int x = stackk[top];
            top--;
            cout << "                                                                                       ELEMENT IS POPPED FROM STACK IS : "<< x << endl;
        }
    }
    void display()
    {   system("CLS");
        if (top < 0)
        {
            cout << "                                                                                             STACK IS EMPTY\n";
        }
        else
        {
            cout << "                                                                                             ELEMENTS PRESENT IN STACK ARE : ";
            for (int i = top; i >= 0; i--)
            {
                cout <<                                                                            "\t"           <<stackk[i] ;
            }
        }
    }
};
class Array
{
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;

public:
    Array() : size(0) {}

    void insertElement()
    {  system("CLS");
        if (size >= MAX_SIZE)
        {
            cout << "                                                                                      ARRAY IS FULL! CANNOT ADD MORE ELEMENTS." << endl;
            return;
        }

        int element, position;
        cout << "                                                                                      ENTER ELEMENT TO ADD IN THE ARRAY : ";
        cin >> element;
        cout << "                                                                                      ENTER THE POSITION  FROM (0 to " << size << ") TO INSERT THE ELEMENT: ";
        cin >> position;

        if (position < 0 || position > size)
        {
            cout << "                                                                                      INVALID POSITION!" << endl;
            return;
        }

        for (int i = size; i > position; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[position] = element;
        size++;
        cout << "                                                                                      ELEMENT IS ADDED SUCESSFULLLY !!" << endl;
    }

    void deleteElement()
    {    system("CLS");     int position;
        cout << "                                                                                       ENTER THE POSITION  FROM (0 to " << size - 1 << ") TO DELETE THE ELEMENT: ";
        cin >> position;

        if (position < 0 || position >= size)
        {
            cout << "                                                                                      INVALID POSITION !" << endl;
            return;
        }

        for (int i = position; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "                                                                                      ELEMENT AT POSITION " << position << " DELETED SUCCESSFULLY." << endl;     if (size == 0)
        {
            cout << "                                                                                      ARRAY IS EMPTY CANT DISPLAY ELEMENTS" << endl;
            return;
  
    }

         }

 
    void displayArray()
    {  system("CLS");
        if (size == 0)
        {
            cout << "                                                                                      ARRAY IS EMPTY" << endl;
            return;
        }

        cout << "                                                                                      ELEMENTS IN THE ARRAY : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
class Queue
{

    int rear, front;
    int queue[MAXSIZE];

public:
    Queue()
    {
        rear = -1;
        front = 0;
    }

    void Insert()
    {  system("CLS");
        int n;

        if (rear == MAXSIZE - 1)
            cout << "                                                                                                  QUEUE IS EMPTY"<<endl;
        else
        {
            cout << "                                                                                                 ENTER AN ELEMENT : ";
            cin >> n;
            cout << "                                                                                            ELEMENT INSERTED IN QUEUE IS  :"<<n << endl;
            rear++;
            queue[rear] = n;
        }
    }
    void Delete()
    {  system("CLS");
        int n;
        if (front > rear)
            cout << "                                                                                             QUEUE IS EMPTY" << endl;
        else
        {
            n = queue[front];
            front++;
            cout << "                                                                                           ELEMENT DELETED FROM QUEUE IS :  " << n << endl;
        }
    }
    void display()
    {  system("CLS");
        int i;

        if (front > rear)
            cout << "                                                                                             QUEUE IS EMPTY" << endl;
        else
        {
            cout << "                                                                                             QUEUE ELEMENTS ARE : ";
            for (i = front; i <= rear; i++)
                cout << "\t"<< queue[i]  ;
        }
    }
};
class Linkedlist
{
public: 
  struct node {
    int data;
    struct node *add;
};

struct node *start = NULL, *new1, *temp,*prev,*next;
void create() {  system("CLS");
    int n;
    char ch;
    cout << "                                                                                      ENTER FIRST ELEMENT : ";
    cin >> n;
    start = (struct node *)(malloc(sizeof(struct node)));
    start->data = n;
    start->add = NULL;
    temp = start;

    cout << "                                                                                      DO YOU WANT TO CONTINUE ? (Y/N): ";
    cin >> ch;

    while (ch == 'y' || ch == 'Y') {
        cout << "                                                                                      ENTER NEXT ELEMENT: ";
        cin >> n;
        new1 = (struct node *)(malloc(sizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        temp->add = new1;
        temp = temp->add;

        cout << "                                                                                      DO YOU WANT TO CONTINUE ? (Y/N):: ";
        cin >> ch;
    }
}
void display(){  system("CLS");
	if(start==NULL){
		cout<<"                                                                                       LIST NOT FOUND "<<endl;
	} else
    {
        temp=start;
        while (temp!=NULL)
        {
            cout<<"                                                                                      ELEMENT IN  LINKED LIST :  "<<temp->data<<endl;
            temp=temp->add;

        }
        
    }
}
void insert_first(){  system("CLS");
    int n;
if(start==NULL){
		cout<<"                                                                                       LIST NOT FOUND "<<endl;
	} else
    {
        cout << "                                                                                      ENTER ELEMENT TO INSERT : ";
        cin >> n;
        new1 = (struct node *)(malloc(sizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        new1->add=start;
        start=new1;
    }
    
}
void insert_last(){  system("CLS");
int n;
if(start==NULL){
		cout<<"                                                                                       LIST NOT FOUND "<<endl;
	} else
    {
        cout << "                                                                                      ENTER ELEMENT TO INSERT : ";
        cin >> n;
        new1 = (struct node *)(malloc(sizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        temp=start;
        while (temp->add!=NULL)
        {
            temp=temp->add;
        }
        temp->add=new1;
        
    }
}
void insert_middle(){  system("CLS");
   int n,pos,i=1;
if(start==NULL){
		cout<<"                                                                                       LIST NOT FOUND "<<endl;
	} else
    {
        cout << "                                                                                       ENTER ELEMENT TO INSERT : ";
        cin >> n;
        new1 = (struct node *)(malloc(sizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        cout<<"                                                                                          ENTER POSITION FOR MIDDLE : ";
        cin>>pos;
        next=start;
        while (i<pos)
        {
            prev=next;
            next=next->add;
            i++;
        }
        prev->add=new1;
        new1->add=next;
        


    }

}
void delete_first(){  system("CLS");
    if(start==NULL){
		cout<<"                                                                                       LIST NOT FOUND"<<endl;
	} else
    {
        temp=start;
        start=start->add;
        cout<<"                                                                                      DELETED ELEMENT IS : "<<temp->data<<endl;
        free(temp);
    }
}
void delete_last(){  system("CLS");
    if(start==NULL){
		cout<<"                                                                                       LIST NOT FOUND "<<endl;
	} else
    {
        temp=start;
       while (temp->add!=NULL)
       {
        prev=temp;
        temp=temp->add;
       }
       prev->add=NULL;
       cout<<"                                                                                      DELETED ELEMENT IS  : "<<temp->data<<endl;
        free(temp);
    }
}
void delete_middle(){  system("CLS");
    int pos,i=1;
    if(start==NULL){
		cout<<"                                                                                       LIST NOT FOUND "<<endl;
	} else{
        cout<<"                                                                                      ENTER THE POSITION : ";
        cin>>pos;
        temp=start;
        while (i<pos)
        {
         prev=temp;
         temp=temp->add;
         i++;   
        }
        next=temp->add;
        prev->add=next;
        cout<<"                                                                                      DELETED ELEMENT IS  : "<<temp->data<<endl;
        free(temp);

    }
}



};

//GRAPH FUNCTIONS
struct Graph {
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
    int numVertices;
};

// Function to initialize the graph
void initializeGraph(Graph* graph, int numVertices) {  system("CLS");
    graph->numVertices = numVertices;

    // Initialize the adjacency matrix with zeros
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
}

// Function to add an edge to the graph
void addEdge(Graph* graph, int startVertex, int endVertex) {  system("CLS");
    if (startVertex >= graph->numVertices || endVertex >= graph->numVertices) {
        cout << "                                                                                      Invalid vertices!" << endl;
        return;
    }
    graph->adjMatrix[startVertex][endVertex] = 1;  // Set the edge from start to end
    cout << "                                                                                      EDGE ADDED FROM " << startVertex << " to " << endVertex << endl;
}

// Function to display the graph (adjacency matrix)
void displayGraph(const Graph* graph) {  system("CLS");
    cout << "                                                                                       ADJACENCY MATRIX REPRESENTATION OF GRAPH :" << endl;
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++) {
            cout <<  "                                                 "<<graph->adjMatrix[i][j] ;
        }
        cout <<""<<endl;
    }
}

class BubbleSorter {
private:
    int arr[100];
    int n;

public:
    BubbleSorter() : n(0) {}  // Constructor initializes n to 0

    // Method to input array elements
    void enterArray() {  system("CLS");
        cout << "                                                                                      ENTER THE NUMBER OF ELEMENTS: ";
        cin >> n;
        cout << "                                                                                      ENTER THE ELEMENTS OF THE ARRAY: \t";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    // Method to display array elements
    void displayArray() const {  system("CLS");
        if (n == 0) {
            cout << "                                                                                      ARRAY IS EMPTY.\n";
            return;
        }
        cout<<"                                                                                            ARRAY ELEMENTS ARE:";
        for (int i = 0; i < n; i++) {
            cout <<arr[i] << "\t";
        }
        cout << endl;
    }

    // Method to sort the array using Bubble Sort
    void bubbleSort() {  system("CLS");
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "                                                                                      ARRAY SORTED USING BUBBLE SORT.\n";
    }
};

class SelectionSorter {
private:
    int arr[100]; // Maximum array size
    int n;        // Number of elements in the array

public:
    // Constructor to initialize the array size to 0
    SelectionSorter() : n(0) {}

    // Method to enter array elements
    void enterArray() {  system("CLS");
        cout << "                                                                                      ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
        cin >> n;
        cout << "                                                                                      ENTER THE ELEMENTS OF THE ARRAY:\t";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    // Method to perform selection sort
    void selectionSort() {  system("CLS");
        for (int i = 0; i < n - 1; i++) {
            int smallestIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[smallestIndex]) {
                    smallestIndex = j;
                }
            }
            swap(arr[i], arr[smallestIndex]);
        }
        cout << "                                                                                      ARRAY SORTED SUCCESSFULLY.\n";
    }

    // Method to display the array
    void displayArray() {   system("CLS");
        if (n == 0) {
            cout << "                                                                                      ARRAY IS EMPTY."<<endl;
            return;
        }
        cout << "                                                                                      ARRAY ELEMENTS ARE: ";
        for (int i = 0; i < n; i++) {
            cout<<arr[i] << "\t ";
        }
        cout << endl;
    }
};

class InsertionSorter {
private:
    int arr[100]; // Maximum array size
    int n;        // Number of elements in the array

public:
    // Constructor to initialize the array size to 0
    InsertionSorter() : n(0) {}

    // Method to enter array elements
    void enterArray() {  system("CLS");
        cout << "                                                                                      ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
        cin >> n;
        cout << "                                                                                      ENTER THE ELEMENTS OF THE ARRAY:";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    // Method to perform insertion sort
    void insertionSort() {  system("CLS");
        for (int i = 1; i < n; i++) {
            int curr = arr[i];
            int prev = i - 1;
            while (prev >= 0 && arr[prev] > curr) {
                arr[prev + 1] = arr[prev];
                prev--;
            }
            arr[prev + 1] = curr;
        }
        cout << "                                                                                      ARRAY SORTED USING INSERTION SORT"<<endl;
    }


    void displayArray() const {   system("CLS");
        if (n == 0) {
            cout << "                                                                                      ARRAY IS EMPTY"<<endl;
            return;
        }
        cout << "                                                                                      ARRAY ELEMENTS ARE: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " \t";
        }
        
    }
};

int linearSearch(int arr[], int n, int target) {  system("CLS");
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}

int binarySearch(int arr[], int n, int target) {  system("CLS");
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  

        
        if (arr[mid] == target) {
            return mid;  
        }

        
        if (arr[mid] < target) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }

    return -1;  
}
int main()
{ 
Graph graph;
    int choi, numVertices, startVertex, endVertex,target,choco;
    Array array;
    Stack stack;
    Queue queuee;
    Linkedlist link;
    InsertionSorter sort;
    Tree tree ;
    SelectionSorter Sorter;
    BubbleSorter sorter;
    int ch,n;
     int arr[n];
     int result;
    int choice;
    do
    {
         system("CLS");
        cout << "\n===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                           DATA STRUCTURE AND ALGORITHM         " << endl;
        cout << "                                                                                                      MENU:          " << endl;
        cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                1. STACK" << endl;
        cout << "                                                                                                2. QUEUE" << endl;
        cout << "                                                                                                3. ARRAY" << endl;
        cout << "                                                                                                4. LINKED LIST" << endl;
        cout << "                                                                                                5. TREE" << endl;
        cout << "                                                                                                6. GRAPH" << endl;
        cout << "                                                                                                7. SORTING ALGORITHMS"<<endl;
        cout << "                                                                                                8. SEARCHING ALGORITHMS"<<endl;
        cout << "                                                                                                9. EXIT" << endl;
        cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                               ENTER YOUR CHOICE: ";
        cin >> choco;


        switch (choco)
        {
        case 1:
            do
            { 
              system("CLS");
        cout << "\n===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                STACK MENU" << endl;
        cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                1. PUSH A ELEMENT IN STACK" << endl;
        cout << "                                                                                                2. POP A ELEMENT IN STACK" << endl;
        cout << "                                                                                                3. DISPLAY ALL THE ELEMENTS PRESENT IN STACK" << endl;
        cout << "                                                                                                4. EXIT" << endl;
        cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                ENTER YOUR CHOICE: ";
        cin >> choice;

                switch (choice)
                {
                case 1:
                	  system("CLS");
                    stack.push();
                    cin.ignore();
            cin.get();

                    break;
                case 2:
                    stack.pop();
                    cin.ignore();
            cin.get();
                    break;
                case 3:
                    stack.display();
                    cin.ignore();
            cin.get();

                    break;

                default:
                    break;
                }

            } while (choice != 4);
            break;
        case 2:
            do
            {  system("CLS");
                 cout << "\n===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                QUEUE MENU" << endl;
        cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                1. INSERT A ELEMENT IN QUEUE" << endl;
        cout << "                                                                                                2. DELETE A ELEMENT IN QUEUE" << endl;
        cout << "                                                                                                3. DISPLAY ALL THE ELEMENTS PRESENT IN QUEUE" << endl;
        cout << "                                                                                                4. EXIT" << endl;
        cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                ENTER YOUR CHOICE: ";
        cin >> choice;

                switch (choice)
                {
                case 1:
                    queuee.Insert();
                     cin.ignore();
            cin.get();
                    break;
                case 2:
                    queuee.Delete(); cin.ignore();
            cin.get();
                    break;
                case 3:
                    queuee.display(); cin.ignore();
            cin.get();
                    break;

                default:
                    break;
                }
            } while (choice != 4);

            break;
        case 3:
            do
            {  system("CLS");
                cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                ARRAY  MENU" << endl;
        cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                1. INSERT ELEMENT" << endl;
        cout << "                                                                                                2. DELETE ELEMENT" << endl;
        cout << "                                                                                                3. DISPLAY ARRAY" << endl;
        cout << "                                                                                                4. EXIT" << endl;
                cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                ENTER YOUR CHOICE: ";
        cin >> choice;

                switch (choice)
                {
                case 1:
                    array.insertElement(); cin.ignore();
            cin.get();
                    break;
                case 2:
                    array.deleteElement(); cin.ignore();
            cin.get();
                    break;
                case 3:
                    array.displayArray(); cin.ignore();
            cin.get();
                    break;
                case 4:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                }
            } while (choice != 4);
            break;
        case 4: 
        do {  system("CLS");
                cout << "\n===================================================================================================================================================================================================================" << endl;         
        cout << "                                                                                                LINKED LIST MENU" << endl;
               cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                1. CREATE" << endl;
        cout << "                                                                                                2. DISPLAY" << endl;
        cout << "                                                                                                3. INSERT FIRST" << endl;
        cout << "                                                                                                4. INSERT MIDDLE" << endl;
        cout << "                                                                                                5. INSERT LAST" << endl;
        cout << "                                                                                                6. DELETE FIRST" << endl;
        cout << "                                                                                                7. DELETE MIDDLE" << endl;
        cout << "                                                                                                8. DELETE LAST" << endl;
        cout << "                                                                                                9. EXIT" << endl;
               cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                ENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
            case 1:
                link.create(); cin.ignore();
            cin.get();
                break;
            case 2:
                link.display(); cin.ignore();
            cin.get();
                break;
            case 3:
                link.insert_first(); cin.ignore();
            cin.get();
                break;
            case 4:
                link.insert_middle(); cin.ignore();
            cin.get();
                break;
            case 5:
                link.insert_last(); cin.ignore();
            cin.get();
                break;
            case 6:
                link.delete_first(); cin.ignore();
            cin.get();
                break;
            case 7:
                link.delete_middle(); cin.ignore();
            cin.get();
                break;
            case 8:
                link.delete_last(); cin.ignore();
            cin.get();
                break;
            
            case 9:
                cout << "\nextiting...";
                break;
            default:
                cout << "\nInvalid Choice";
                break;
        }
    } while (choice != 9);
            break;
        case 5: 


        do
{            system("CLS");    cout << "\n===================================================================================================================================================================================================================" << endl;
        cout<<"\n                                                                                                TREE APPLICATION"<<endl;
                cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                1.CREATE"<<endl;
        cout << "                                                                                                2.INORDER"<<endl;
        cout << "                                                                                                3.PREORDER"<<endl;
        cout << "                                                                                                4.POSTORDER"<<endl;
        cout << "                                                                                                5.Exit";
                cout << "\n===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                             ENTER YOUR CHOICE : " ;
        cin>>ch;
switch (ch)
{

    case 1:

    do
    {
        
    cout<<"                                                                                             ENTER AN ELEMENT : ";
    cin>>n;
    cout<<"\n";
    new1=(struct node*)(malloc(sizeof (struct node)));
    new1->ladd=new1->radd=NULL;
    new1->data=n;
    if (root==NULL)
    {
        root=new1;
    }else
    
        tree.create(root,new1);
    cout<<"                                                                                             WANT TO CONTINUE  : "                                                                        ;
        choice=getche();
        cout<<"\n";
    
    }while(choice=='y'||choice=='Y');
    break;

    case 2 : tree.inorder(root);
    break;

    case 3 : tree.preorder(root);
    break;

    case 4 : tree.postorder(root);
    break;
default:
    break;
}

} while(ch!=5);
    

            break;
        case 6:       // Ask the user to input the number of vertices in the graph
                 cout << "\n===================================================================================================================================================================================================================" << endl;
        cout<<"                                                                                                      GRAPH MENU"<<endl;
                 cout << "\n===================================================================================================================================================================================================================" << endl;
        cout <<"                                                                                       ENTER THE NUMBER OF VERTICES IN THE GRAPH: ";
    cin >> numVertices;

    // Initialize the graph with the given number of vertices
    if (numVertices > MAX_VERTICES) {
        cout << "                                                                                      Error: THE NUMBER OF VERTICES CANNOT EXCEED" << MAX_VERTICES << "." << endl;
        return 1;  // Exit the program with an error code
    }

    initializeGraph(&graph, numVertices);

    // Menu loop
    do {  system("CLS");
        // Display menu options
                 cout << "\n===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                                    GRAPH MENU                   " << endl;
        cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                      1. ADD AN EDGE" << endl;
        cout << "                                                                                      2. DISPLAY THE ADJACENCY MATRIX" << endl;
        cout << "                                                                                      3. EXIT" << endl;
                cout << "===================================================================================================================================================================================================================" << endl;
        cout << "                                                                                      ENTER YOUR CHOICE: ";
        cin >> choi;


        switch (choi) {
            case 1:
                // Add an edge
                cout << "                                                                                      ENTER THE START AND END VERTEX (0 to " << numVertices - 1 << "): ";
                cin >> startVertex >> endVertex;
                addEdge(&graph, startVertex, endVertex); cin.ignore();
            cin.get();
                break;

            case 2:
                // Display the adjacency matrix
                displayGraph(&graph); cin.ignore();
            cin.get();
                break;

            case 3:
                // Exit the program
                cout << "                                                                                      EXITING THE PROGRAM " << endl;
                break;

            default:
                // Handle invalid menu options
                cout << "                                                                                      INVALID CHOICE !! " << endl;
        }
    } while (choi != 3);
    break;
case 7: 
          do{  system("CLS");
            cout<<"==================================================================================================================================================================================================================="<<endl;
          	cout<<"                                                                                       1.BUBBLE SORT"<<endl;
          	cout<<"                                                                                       2.SELECTION SORT"<<endl;
          	cout<<"                                                                                       3.INSERTION SORT"<<endl;
            cout<<"==================================================================================================================================================================================================================="<<endl;
          	cout<<"                                                                                       4.EXIT"<<endl;
            cout<<"==================================================================================================================================================================================================================="<<endl;
          	
          	
          	cout << "                                                                                      ENTER YOUR CHOICE: ";
            cin >> choice;
            cout<<"\n==================================================================================================================================================================================================================="<<endl;
            
            switch(choice){
            	case 1 :
            		 do {  system("CLS");
        cout<<"==================================================================================================================================================================================================================="<<endl;                
        cout << "                                                                                     BUBBLE SORT MENU:"<<endl;
        cout<<"==================================================================================================================================================================================================================="<<endl;                
        cout << "                                                                                      1. ENTER ARRAY"<<endl;
        cout << "                                                                                      2. DISPLAY ARRAY"<<endl;
        cout << "                                                                                      3. SORT ARRAY (BUBBLE SORT)"<<endl;
        cout << "                                                                                      4. Exit"<<endl;
        cout<<"==================================================================================================================================================================================================================="<<endl;                
        cout << "                                                                                      ENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sorter.enterArray(); cin.ignore();
            cin.get();
                break;
            case 2:
        cout<<"==================================================================================================================================================================================================================="<<endl;                
                cout << "                                                                                      ARRAY ELEMENTS ARE: ";
                sorter.displayArray(); cin.ignore();
            cin.get();
                break;
            case 3:
                sorter.bubbleSort(); cin.ignore();
            cin.get();
                break;
            case 4:
                cout << "                                                                                      EXITING PROGRAM "<<endl;
                break;
            default:
                cout << "                                                                                      INVALID CHOICE !! "<<endl;
                break;
        }
    } while (choice != 4);
break;
            		break;
            		
            		case 2:
            			 do {  system("CLS");
        cout<<"==================================================================================================================================================================================================================="<<endl;
        cout << "                                                                                     SELECTION SORT MENU:"<<endl;
        cout<<"==================================================================================================================================================================================================================="<<endl;
        cout << "                                                                                      1. ENTER ARRAY"<<endl;
        cout << "                                                                                      2. DISPLAY ARRAY"<<endl;
        cout << "                                                                                      3. SORT ARRAY USING SELECTION SORT"<<endl;
        cout << "                                                                                      4. EXIT"<<endl;
        cout<<"==================================================================================================================================================================================================================="<<endl;
        cout << "                                                                                      ENTER YOUR CHOICE: ";
        cin >> choice;
        cout<<"==================================================================================================================================================================================================================="<<endl;

        switch (choice) {
            case 1:
                Sorter.enterArray(); cin.ignore();
            cin.get();
                break;

            case 2:
                Sorter.displayArray(); cin.ignore();
            cin.get();
                break;

            case 3:
                Sorter.selectionSort(); cin.ignore();
            cin.get();
                break;

            case 4:
                cout << "                                                                                      EXITING PROGRAM.\n";
                break;

            default:
                cout << "                                                                                      INVALID CHOICE. PLEASE TRY AGAIN.\n";
        }
    } while (choice != 4);
break;
            			
            			break;
            
			case 3:
			 do {  system("CLS");
        cout<<"\n==================================================================================================================================================================================================================="<<endl;        
        cout << "                                                                                      INSERTION SORT MENU:"<<endl;
        cout<<"==================================================================================================================================================================================================================="<<endl;        
        cout << "                                                                                      1. ENTER ARRAY"<<endl;
        cout << "                                                                                      2. DISPLAY ARRAY"<<endl;
        cout << "                                                                                      3. SORT ARRAY USING INSERTION SORT"<<endl;
        cout << "                                                                                      4. EXIT"<<endl;
        cout<<"==================================================================================================================================================================================================================="<<endl;
        cout << "                                                                                      ENTER YOUR CHOICE: ";
        cin >> choice;
        cout<<"==================================================================================================================================================================================================================="<<endl;

        switch (choice) {
            case 1:
                sort.enterArray(); cin.ignore();
            cin.get();
                break;

            case 2:
                sort.displayArray(); cin.ignore();
            cin.get();
                break;

            case 3:
                sort.insertionSort(); cin.ignore();
            cin.get();
                break;

            case 4:
                cout << "                                                                                      EXITING PROGRAM.\n";
                break;

            default:
                cout << "                                                                                      INVALID CHOICE. PLEASE TRY AGAIN.\n";
        }
    } while (choice != 4);
break;		
			}
        
		  }while(choice!=4);
break;
  break;
case 8:  do {  system("CLS");
    cout<<"==================================================================================================================================================================================================================="<<endl;
        cout << "                                                                                     SEARCHING ALGORITHM MENU:"<<endl;
    cout<<"==================================================================================================================================================================================================================="<<endl;
        cout << "                                                                                      1. LINEAR SEARCH"<<endl;
        cout << "                                                                                      2. BINARY SEARCH"<<endl;
        cout << "                                                                                      3. EXIT"<<endl;
        cout<<"==================================================================================================================================================================================================================="<<endl;
        cout << "                                                                                      ENTER YOUR CHOICE: ";
        cin >> choice;
        cout<<"==================================================================================================================================================================================================================="<<endl;
        switch(choice){
        	case 1 : 
            cout << "                                                                                      ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin >> n;
// cin.ignore();
//            cin.get();
    
    cout << "                                                                                      ENTER THE ELEMENTS OF THE ARRAY:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 cin.ignore();
            cin.get();
    cout << "                                                                                      ENTER THE TARGET ELEMENT TO SEARCH FOR: ";
    cin >> target;

     result = linearSearch(arr, n, target); 
    if (result != -1) {
        cout << "                                                                                      ELEMENT FOUND AT INDEX " << result << "."<<endl; 
//            cin.get();
    } else {
        cout << "                                                                                      ELEMENT NOT FOUND IN THE ARRAY."<<endl;
    } cin.ignore();
            cin.get();
break;

case 2:    cout << "                                                                                      ENTER THE NUMBER OF ELEMENT IN THE ARRAY : ";
    cin >> n;
 cin.ignore();
            cin.get();
    

    
    cout << "                                                                                      ENTER THE ELEMENTS IN THE ARRAY IN SORTED METHOD : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; cin.ignore();
            cin.get();
    }

    
    cout << "                                                                                      ENTER THE ELEMENT TO TARGET IN THE ARRAY : ";
    cin >> target;

//     cin.ignore();
//            cin.get();
    result = binarySearch(arr, n, target);

    
    if (result != -1) {
        cout << "                                                                                      ELEMENT FOUND AT INDEX  " << result << "."<<endl; cin.ignore();
            cin.get();
    } else {
        cout << "                                                                                      ELEMENT NOT FOUND IN THE ARRAY ";
    }
	
        		break;
		}
}while(choice!=3);

	
break; break;
break;

break;
                
        default:
            cout << "                                                                                      INVALID CHOICE !";
            break;
        }
        
    } while (choco != 9);
    return 0;
}
