#include <iostream>
#include "Graph/graph.h"

int main(){
  Graph g1;

  // Node n1("a");
  // Node n2("b");
  // Node n3("c");
  // Node n4("d");
  // Node n5("e");
  // Node n6("f");
  // Node n7("g");
  // Node n8("h");
  // Node n9("i");
  //
  // //Vertices from A:
  // //n1.createVertice(4, &n2);
  // //n1.createVertice(8, &n8);
  //
  // //Vertices from B:
  // n2.createVertice(4, &n1);
  // n2.createVertice(8, &n3);
  // n2.createVertice(11, &n8);
  //
  // //Vertices from C:
  // n3.createVertice(8, &n2);
  // n3.createVertice(7, &n4);
  // n3.createVertice(2, &n9);
  // n3.createVertice(4, &n6);
  //
  // //Vertices from D:
  // n4.createVertice(7, &n3);
  // n4.createVertice(14, &n6);
  // n4.createVertice(9, &n5);
  //
  // //Vertices from E:
  // n5.createVertice(9, &n4);
  // n5.createVertice(10, &n6);
  //
  // //Vertices from F:
  // n6.createVertice(10, &n5);
  // n6.createVertice(14, &n4);
  // n6.createVertice(2, &n7);
  // n6.createVertice(4, &n3);
  //
  // //Vertices from G:
  // n7.createVertice(2, &n6);
  // n7.createVertice(1, &n8);
  // n7.createVertice(6, &n9);
  //
  // //Vertices from H:
  // n8.createVertice(1, &n7);
  // n8.createVertice(9, &n9);
  // n8.createVertice(11, &n2);
  // n8.createVertice(8, &n1);
  //
  // //Vertices from I:
  // n9.createVertice(2, &n3);
  // n9.createVertice(6, &n7);
  // n9.createVertice(9, &n8);
  //
  // g1.createGraph(&n1);
  // g1.createGraph(&n2);
  // g1.createGraph(&n3);
  // g1.createGraph(&n4);
  // g1.createGraph(&n5);
  // g1.createGraph(&n6);
  // g1.createGraph(&n7);
  // g1.createGraph(&n8);
  // g1.createGraph(&n9);

  Node n1("S");
  Node n2("A");
  Node n3("B");
  Node n4("C");
  Node n5("D");

  n1.createVertice(10, &n2);
  n1.createVertice(5, &n3);

  n2.createVertice(1, &n4);
  n2.createVertice(2, &n3);

  n3.createVertice(3, &n2);
  n3.createVertice(9, &n4);
  n3.createVertice(2, &n5);

  n4.createVertice(4, &n5);
  n5.createVertice(6, &n4);

  g1.createGraph(&n1);
  g1.createGraph(&n2);
  g1.createGraph(&n3);
  g1.createGraph(&n4);
  g1.createGraph(&n5);

  //cout << "The Graph is going to: " << g1.nodeVector[0]->vVector[0].nextNode->name << endl;

  g1.DijkstraAlgorihm();
  //cout << "The Node is pointing to: " << g1.nodeVector[0]->vVector[0].nextNode->name << endl;

  return 0;
}
