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
    this->Previous = nullptr;
}

Node::Node(Node^ newNode)
{
    this->Data = newNode->Data;
    this->Next = newNode->Next;
    this->Previous = newNode->Previous;
}

Node::Node(Object^ newData, Node^ newNext, Node^ newPrevious)
{
    this->Data = newData;
    this->Next = newNext;
    this->Previous = newPrevious;
}

/*
    Properties (Getters/Setters)
*/

Object^ Node::Data::get()
{
    return this->data;
}

void Node::Data::set(Object^ value)
{
    this->data = value;
}

Node^ Node::Next::get()
{
    return this->next;
}

void Node::Next::set(Node^ value)
{
    this->next = value;
}

Node^ Node::Previous::get()
{
    return this->previous;
}

void Node::Previous::set(Node^ value)
{
    this->previous = value;
}