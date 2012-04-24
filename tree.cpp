#include "present.h"
#include "inglip.h"
#include <cstdlib>
#include <iostream>
#include "tree.h"

Tree::Tree(int w, int z, int a, int b, char* derp) 
{
  pic = derp;
  image.load(pic);
  destroyed = FALSE;
  resetState();
  rect = image.rect();
  rect.translate(w, z);
 a = xdir;
 b = ydir;
  x =w;
  y =z;
  
}


Tree::Tree() 
{

  
}

Tree::~Tree(){

   
}

void Tree::imageChange(char* A)
{
image.load(A);

}

void Tree::imageChangeright(char *B)
{
image.load(B);

}

void Tree::resetState()
{
  rect.moveTo(10, 10);
}

QRect Tree::getRect()
{
  return rect;
}

void Tree::setRect(QRect rct)
{
  rect = rct;
}

QImage & Tree::getImage()
{
  return image;
}

bool Tree::isDestroyed()
{
  return destroyed;
}


void Tree::autoMove(int x, int y)
{
  
  

  if (rect.top() <= 20) {
    ydir =ydir+5;
  }

  if (rect.bottom() >= 695) {
    rect.moveTo(0, 0);
  }
  
rect.translate(xdir,ydir);
  
}


void Tree::moveLeft(int left)
{
  if (rect.left() >= 2)
    rect.moveTo(left, rect.top());
}

void Tree::moveRight(int right)
{
  if (rect.right() <= 690)
    rect.moveTo(right, rect.top());
}

  

 
  



void Tree::setDestroyed(bool destr)
{
  destroyed = destr;
}

int Tree::getX()
{
  return x;
}
int Tree::getY()
{
  return y;
}
