/*
    Queue Class Header File
    Project: Queue
    Author:  Matthew Boyette
    Date:    11/16/2006
*/

#include "Queue.h"

/*
    Constructors
*/

Queue::Queue()
{
    this->Clear();
}

/*
    Operations
*/

void Queue::Clear()
{
    this->Head = gcnew Node(nullptr, nullptr, this->Tail);
    this->Tail = gcnew Node(nullptr, this->Head, nullptr);
    this->Size = 0;
}

Object^ Queue::Dequeue()
{
    if (this->Empty)
    {
        throw gcnew Exception("Queue is empty!");
    }

    Object^ o = this->Tail->Previous->Data;

    Node^ temp = gcnew Node(this->Tail->Previous);
    temp = temp->Previous;
    temp->Next = this->Tail;
    this->Tail->Previous = temp;

    return (o);
}

void Queue::Enqueue(Object^ o)
{
    if (this->Size >= (UInt32::MaxValue - 1))
    {
        throw gcnew Exception("Queue is full!");
    }

    if (this->Empty)
    {
        Node^ t = gcnew Node(o, this->Head, this->Tail);
        this->Head->Next = t;
        this->Tail->Previous = t;
        this->Size = 1;
    }
    else
    {
        Node^ g = gcnew Node(o, this->Head, this->Head->Next);
        Node^ k = this->Head->Next;
        k->Previous = g;
        this->Head->Next = g;
        this->Size++;
    }
}

/*
    Properties (Getters/Setters)
*/

bool Queue::Empty::get()
{
    return (this->size == 0);
}

Node^ Queue::Head::get()
{
    return (this->tail);
}

void Queue::Head::set(Node^ value)
{
    this->tail = value;
}

UInt32 Queue::Size::get()
{
    return (this->size);
}

void Queue::Size::set(UInt32 value)
{
    this->size = value;
}

Node^ Queue::Tail::get()
{
    return (this->head);
}

void Queue::Tail::set(Node^ value)
{
    this->head = value;
}