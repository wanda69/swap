#include <stdio.h>
#include <stdlib.h>
#include "swap.h"

#include <string.h>

/*
        ***BUGS***

        build_list may fail if we send a 0 length array.
*/




Node * build_list(int data[], size_t size) {
    // go through the array, setting the value for each node
    // and creating a new node and pointing to that.

    // when we populate the node, we create the next node. And we need
    // a pointer to always point to the tail of the list.

    // loop invariant = tail is always equal to the last record we just created.
    // ... tail always points to the last block.

    // this doesn't change throughout the loop.


    Node * head = (Node *)malloc(sizeof(Node));
    Node * end;

    // first we assign to the head, creating our first block.
    head->value = data[0];
    // since it's the only block, it has no next so set ->next to null.
    head->next = NULL;

    // tail is now the end block
    end = head;

    for (int i = 1; i < size; i++) {
        // create next item in the list
        end->next = (Node *)malloc(sizeof(Node));

        // point to next (reestablishes invariant)
        end = end->next;

        // set the value in the current element
        end->value = data[i];
        // set ->next to NULL to ensure continuity of list.
        end->next = NULL;

    }


    return head;
}

void print_list(Node * head) {
    // since we are not returning anything we can modify head.

    //counter
    Node* current;
    //printf("%d\n", current->value);

    // loop invariant = current always equals the next value to print out.
    for (current = head; current != NULL; current = current->next) {
        printf("%d\n", current->value);
    }

}

//  if the lists are not the same, return false.
bool compare_list(Node* A_list, Node* B_list) {
    // should we print the list when we compare them? (print_list) Probably not.

    return false;
}

bool swap_test() {
    int list[3] = {2, 5, 6};


// test 1

    Node * head_list = (Node *)malloc(sizeof(Node));
    head_list->value = 10;

    head_list->next = malloc(sizeof(Node));
    head_list->next->value = 20;

    head_list->next->next = malloc(sizeof(Node));
    head_list->next->next->value = 30;

    head_list->next->next->next = malloc(sizeof(Node));
    head_list->next->next->next->value = 40;

    head_list->next->next->next->next = malloc(sizeof(Node));
    head_list->next->next->next->next->value = 50;

    head_list->next->next->next->next->next = NULL;

    Node * build_list_list = build_list(list, 3);

    print_list(build_list_list);





// test 2

// test 3

// test 4......

}




bool delete_test() {

}


int main(void) {

    swap_test();

    printf("Hello, World!\n");
    return EXIT_SUCCESS;
}
