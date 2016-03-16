/*
    Node Class Header File
    Project: Node
    Author:  Matthew Boyette
    Date:    11/16/2006
*/

#pragma once

using namespace System;

public ref class Node
{

    public:

        /*
            Constructors
        */

        Node();
        Node(Node^ newNode);
        Node(Object^ newData, Node^ newNext, Node^ newPrevious);

        /*
            Properties (Getters/Setters)
        */

        property Object^ Data
        {
            Object^ get();
            void    set(Object^ value);
        }

        property Node^ Next
        {
            Node^   get();
            void    set(Node^ value);
        }

        property Node^ Previous
        {
            Node^   get();
            void    set(Node^ value);
        }

    private:

        /*
            Variables
        */

        Object^ data;
        Node^   next;
        Node^   previous;
};