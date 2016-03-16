/*
    Node Class Header File
    Project: Node
    Author:  Matthew Boyette
    Date:    11/16/2006
*/

#include "Node.h"

/*
    Constructors
*/

Node::Node()
{
    this->Data = nullptr;
    this->Next = nullptr;
    this->Prev = nullptr;
}

Node::Node(Node^ newNode)
{
    this->Data = newNode->Data;
    this->Next = newNode->Next;
    this->Prev = newNode->Prev;
}

Node::Node(Object^ newData, Node^ newNext, Node^ newPrev)
{
    this->Data = newData;
    this->Next = newNext;
    this->Prev = newPrev;
}

/*
    Properties (Getters/Setters)
*/

Object^ Node::Data::get()
{
    return this->data;
}

void    Node::Data::set(Object^ value)
{
    this->data = value;
}

Node^   Node::Next::get()
{
    return this->next;
}

void    Node::Next::set(Node^ value)
{
    this->next = value;
}

Node^   Node::Prev::get()
{
    return this->prev;
}

void    Node::Prev::set(Node^ value)
{
    this->prev = value;
}