#include <iostream>
using namespace std;

//membuat  struktur untuk object double linkedlist
struct Node
{
    //deklarasi noMhs dan name untuk menampung data
    int noMhs;
    string name;
    //deklarassi pointer next dan pref untuk penujukan data sebelum dan sesudah
    Node *next;
    Node *prev;
};