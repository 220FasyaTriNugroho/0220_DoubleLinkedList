#include <iostream>
using namespace std;

// membuat  struktur untuk object double linkedlist
struct Node
{
    // deklarasi noMhs dan name untuk menampung data
    int noMhs;
    string name;
    // deklarassi pointer next dan pref untuk penujukan data sebelum dan sesudah
    Node *next;
    Node *prev;
};


// deklarasi pointer START dan pemberian nilai
Node *START = NULL;

//deklarasi prosedu addNode
void addNode()
{

    // pembuatan node dan pemberian value untuk data noMhs dan name
    Node *newNode = new Node(); //step 1 buat node baru
    cout << "\nEmter the roll number of the student: ";
    cin >> newNode->noMhs; //assign value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name; //assign value to the data field of th

    // insert the new node in the list
    //kondisi jika star == null atau noMhs node baru <= noMhs start
    if (START == NULL || newNode->noMhs <= START ->noMhs)
    {
        //step 2: insert the new node at the beginning
        //kondisi jika start tidak kosong dan noMhs node baru sama dengan noMhs
        if (START != NULL && newNode->noMhs == START->noMhs)
        {
            cout << "\033[31mDuplicate roll numbers not allowed\033[0m" << endl;
            return;
        }
        //if the list is empty, make the new node the START
        newNode->next = START; //step 3: make the new point to the first node
        //kondisi jika start tidak memiliki nilai atau tidak kosong
        if (START!= NULL)
        {
            START->prev = newNode; // step 4: make the first node point the 
        }
    }
}