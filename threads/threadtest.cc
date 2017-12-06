// threadtest.cc 
//	Simple test case for the threads assignment.
//
//	Create two threads, and have them context switch
//	back and forth between themselves by calling Thread::Yield, 
//	to illustratethe inner workings of the thread system.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include <time.h>
#include <stdlib.h>
#include <synch.h>
#define LOOPCOUNT 5
#define DEBUGLEVEL 't'
void producer(int);
void consumer(int);
//----------------------------------------------------------------------
// SimpleThread
// 	Loop 5 times, yielding the CPU to another ready thread 
//	each iteration.
//
//	"which" is simply a number identifying the thread, for debugging
//	purposes.
//----------------------------------------------------------------------

void
SimpleThread(int which)
{
    int num;
    
    for (num = 0; num < 5; num++) {
	printf("*** thread %d looped %d times\n", which, num);
        currentThread->Yield();
    }
}

//----------------------------------------------------------------------
// ThreadTest
// 	Set up a ping-pong between two threads, by forking a thread 
//	to call SimpleThread, and then calling SimpleThread ourselves.
//----------------------------------------------------------------------

void
ThreadTest()
{
    DEBUG('t', "Entering SimpleTest");

}

// ----------------------------------------------------------
// ----------------------------------------------------------
// CSC112 Lab3 Area Below 
// ----------------------------------------------------------
// ----------------------------------------------------------
#define SIZE 100
int buffer[SIZE]; //the shared buffer
int nextRead = -1; //the position of the next item to read 
int nextWrite = 0; //the position of the next slot to write to
int count = 0; //the number of items in buffer


//Declare the LOCKS and Conditions you need here.
//E.g., Lock *lock = new Lock("monitor");
Lock *lock = new Lock("monitor");
Condition *waitForEmptySlot = new Condition("waitForEmpty");
Condition *waitForFullSlot = new Condition("waitForFullSlot");

void producer(int tid){

}

void consumer(int tid){
}


