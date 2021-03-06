#ifndef TREE_H
#define TREE_H
#include <cstdlib>
#include <QImage>
#include <QRect>
#include <cstring>

class Tree
{

  public:
    Tree(int, int,int,int, char*);
    Tree();
    ~Tree();

  public:
    void resetState();
    void autoMove(int, int);
    bool isDestroyed();
    void setDestroyed(bool);
    void imageChange(char *);
    void imageChangeright(char *);
    QRect getRect();
    void setRect(QRect);
    QImage & getImage();
    int getX();
    int getY();
    void moveLeft(int);
    void moveRight(int);

  protected:
    QImage image;
    QRect rect;
    int position;
    bool destroyed;
    int x;
    int y;
    int xdir;
    int ydir;
    char* pic;
};

#endif
