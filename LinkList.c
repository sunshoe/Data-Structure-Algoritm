#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
  int data;
  NODE * prev;
  NODE * next;
} Node;

// Add a head node in the list which contains the present node.
Node addHead(Node head, Node node){
  if(!head.prev){
    printf("%s\n", "Error : this head node has a previous node.");
  }
  while(node.prev){
    node.prev = node.prev->prev;
  }
  node.prev = &head;
  head.next = &node;
  return head;
}

// Add a tail node in the list which contains the present node.
Node addTail(Node tail, Node node){
  if(!tail.next){
    printf("%s\n", "Error : this tail node has a heir node.");
  }
  while(node.next){
    node.next = node.next->next;
  }
  node.next = &tail;
  tail.prev = &node;
  return tail;
}

/* Using a position indicator to decide where the node
 * will be inserted beside of node2, if the direction is
 * positive or zero , node1 will be inserted right of
 * node2, otherwise it will be put in left of node2.
 */
void insertNode(Node node1 , Node node2, int Position){
  if()
  if(Position >= 0 && !node1.prev && !node1.next){
    node1.next = &node2;
    node2.prev = &node1;
  } else if(Position < 0 && !node1.prev && !node1.next) {

  }


}



/* Using a direction indicator to decide to where
 * will be printed, if the direction is positive
 * or zero , from the present node to the next will
 * be printed, previous direction will be print in
 * other case.
 */
void printList(Node node, int direction){
  System.out.printf("%d\n", node.data);

  if(node.next && direction >=0){

    while(node.next){

      System.out.printf("%d\n", node.next->data);
      node.next = node.next->next;

    } else if(node.prev && direction < 0){

      System.out.printf("%d\n", node.prev->data);
      node.prev = node.prev->prev;
    }
  }

}
int main(){

}
