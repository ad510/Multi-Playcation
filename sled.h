#ifndef SLED_H
#define SLED_H
#include <cstdlib>
#include <QImage>
#include <QRect>
#include <cstring>

class Sled
{

  public:
    Sled(int, int, int, int, char*);
    ~Sled();

  public:
    void resetState();
    void autoMove();
    bool isDestroyed();
    void setDestroyed(bool);
    void imageChange(char *);
    void imageChangeright(char *);
    QRect getRect();
    void setRect(QRect);
    QImage & getImage();
    int getX();
    int getY();

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
};

#endif
