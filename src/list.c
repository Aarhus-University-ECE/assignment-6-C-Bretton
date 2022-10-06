#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL); //precondition
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    assert(l!=NULL); //precondition

    node *p = l; //points to our list
    int NumberOfElements = 0;
    while(p->next != NULL){
      NumberOfElements++; //counts the number of elements
      p = p->next; //points to the next element
    }

    return NumberOfElements; //returns the number of lists counted
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    assert(l!=NULL); //Preconditions
    node *p = l->next;
    
    while (p!=NULL){
      printf("%d, ",p->data); //prints data of current element
      p = p->next; //points to the next element -- this is added as answer to 3d)
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
    assert(l!=NULL && size(l)>0); //preconditions

    node *p = l;
    int LargestValue = 0;
    while(p != NULL){
      //if current element data is larger than the largest value so far
      if (p->data > LargestValue){
        LargestValue = p->data; //This elements data is the largest value
      }
      p = p->next; //points to next element
    }
    
    return LargestValue; //returns largest value
}