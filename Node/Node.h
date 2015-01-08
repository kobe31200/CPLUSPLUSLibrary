#ifndef NODE_H
#define NODE_H
#endif

/**
Link list node definition
*/
template <class T>
class Node{
   public:

     Node();
     Node(const T& value);

     T getValue();
     void setValue(const T& value);

     Node* getNext();
     void setNext(Node* next);
   private:
     T m_value;
     Node* m_next;
};

/**
Default constructor
*/
template <class T>
Node<T>::Node():m_value(0),m_next(0)
{
   
}

/**
Constructor
*/
template <class T>
Node<T>::Node(const T& value):m_value(value),m_next(0){
}

/**
Get value
*/
template <class T>
T Node<T>::getValue(){
  return m_value;
}

/**
Set value
*/
template <class T>
void Node<T>::setValue(const T& value){
  m_value = value;
}

/**
Get next node
*/
template <class T>
Node<T>* Node<T>::getNext(){
  return m_next;
}

/**
Set next node
*/
template <class T>
void Node<T>::setNext(Node<T>* next){
  m_next = next;
}
