#pragma once

class node
{
private:
  node *parent;
  node *next;
  node *prev;
  node *child;
  void *data;
public:
  node();
  node(node *parent, node *next, node *prev, node *child, void *data);
  ~node();
};
