#include <iostream>
#ifndef BUSH_H
#define BUSH_H
#include <cstdlib>
#include <QImage>
#include <QRect>
#include "tree.h"


class Bush :public Tree
  {  

  private:
     
     QImage image;
    QRect rect;
    int position;
    bool destroyed;
    int x;
    int y;
    int xdir;
    int ydir;
    char* pic;
  public:
     Bush(int, int,int,int, char*);
    ~Bush();
    // void resetState();
  //  void autoMove(int, int);
   // bool isDestroyed();
   // void setDestroyed(bool);
    void imageChange(char *);
   // void imageChangeright(char *);
   // QRect getRect();
   // void setRect(QRect);
   // QImage & getImage();
   // int getX();
   // int getY();
   // void moveLeft(int);
   // void moveRight(int);
};

#endif
  

