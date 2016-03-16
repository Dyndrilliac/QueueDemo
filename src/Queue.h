/*
    Queue Class Header File
    Project: Queue
    Author:  Matthew Boyette
    Date:    11/16/2006
*/

#pragma once

#include "Node.h"

using namespace System;

public ref class Queue
{

    public:

        /*
            Constructors
        */

        Queue();

        /*
            Operations
        */

        void    Clear();
        Object^ Dequeue();
        void    Enqueue(Object^ o);

        /*
            Properties (Getters/Setters)
        */

        property bool Empty
        {
            bool    get();
        }

        property UInt32 Size
        {
            UInt32  get();
        protected:
            void    set(UInt32 value);
        }

    private:

        /*
            Variables
        */

        UInt32 size;
        Node^  head;
        Node^  tail;
};