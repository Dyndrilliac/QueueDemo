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
    this->head = gcnew Node(nullptr, nullptr, tail);
    this->tail = gcnew Node(nullptr, head, nullptr);
    this->size = 0;
}

Object^ Queue::Dequeue()
{
    if (this->Empty)
    {
        throw gcnew Exception("Queue is empty!");
    }

    Object^ o = this->tail->Prev->Data;

    Node^ temp = gcnew Node(this->tail->Prev);
    temp = temp->Prev;
    temp->Next = this->tail;
    this->tail->Prev = temp;

    return (o);
}

void Queue::Enqueue(Object^ o)
{
    if (this->size >= (UInt32::MaxValue - 1))
    {
        throw gcnew Exception("Queue is full!");
    }

    if (this->Empty)
    {
        Node^ t = gcnew Node(o, this->head, this->tail);
        this->head->Next = t;
        this->tail->Prev = t;
        this->Size = 1;
    }
    else
    {
        Node^ g = gcnew Node(o, this->head, this->head->Next);
        Node^ k = this->head->Next;
        k->Prev = g;
        this->head->Next = g;
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

UInt32 Queue::Size::get()
{
    return (this->size);
}

void Queue::Size::set(UInt32 value)
{
    this->size = value;
}