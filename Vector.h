//Name: Trey Howell
//Date: 9/27/18
//File: Vector.H
//Description: this is the header file

#indef VECTOR_H
#define VECTOR_H

class Vector
{
 public:
  Vector();
  Vector(const Vector &other);
  ~Vector();
  Vector& operator=(const Vector &other);
  int Size();
  int capacity();
  void push_back(int element);
  void resize();
  double& operator[](unsigned int index);
 private:
  double *vec_ptr;
  int vec_size;
  int vec_capacity;
};
#ednif //VECTOR_H
  
