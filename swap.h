//
// Created by Jake on 2/11/2025.
//

#ifndef SWAP
#define SWAP

#endif // SWAP

typedef struct Node {
    int value;
    struct Node *next;
} Node;

/*  Takes a pointer to a position in a list and either swaps it with the next element in the
    list or does nothing. It updates the current pointer so it the next element in the list.

    If the initial element needed to be swapped it will update the head pointer so the
    caller will now what happened.

    Pass in structures so that the caller owns the pointers passed in.

    This function returns true if a swap occurs and false otherwise.
*/

bool swap(Node* headPosition, Node* currentPosition);

/*  Pass in a position in the list. If that position has the target value then it is
    removed from the list and the memory of that Node is freed.

    We also pass in the header of the list so in the case we want to remove the head
    we can pass it back to the caller.

    Structs are passed in so that the caller owns the pointers.

    This function returns true if an element is deleted and returns false otherwise.


*/

bool delete_element(Node* headPosition, Node* currentPosition, int targetValue);
