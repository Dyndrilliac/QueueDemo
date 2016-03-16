/*
    Main Header File
    Project: QueueDemo
    Author:  Matthew Boyette
    Date:    11/16/2006
*/

#include "main.h"

int main(array<System::String ^> ^args)
{
    Queue^ q = gcnew Queue;

    q->Enqueue("String");
    q->Enqueue(34.6);

    for (UInt32 i = 0; i < q->Size; i++)
    {
        Console::WriteLine("Value: {0}", q->Dequeue());
    }

    Console::WriteLine("Press any key to continue...");
    Console::ReadKey(false);

    return EXIT_SUCCESS;
}