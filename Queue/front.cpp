// CPP program to illustrate
// Implementation of front() function
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> myqueue;
	myqueue.push(3);
	myqueue.push(4);
	myqueue.push(1);
	myqueue.push(7);

	// Queue becomes 3, 4, 1, 7

	cout << myqueue.front();
	return 0;
}
