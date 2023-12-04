#include <iostream>
using namespace std;
class DecorateARoom{
private:
int length;
int width;
int height;
int windowArea;
int doorArea;
public:
DecorateARoom(int l, int w, int h, int wa, int da){
    length=l;
    width=w;
    height=h;
    windowArea=wa;
    doorArea=da;
}

int getlength(){
    return length;
}

int geteidth(){
    return width;
}

int height(){
    return height;
}

int getlwindowarea(){
    return windowArea;
}
int getdoorarea(){
    return doorArea;
}


int surfaceAreaOfWalls(int area){
    area= 2*(height*width)+2*(height*length)-(windowArea+doorArea);
    return area;
}

int rolls(){
    surfaceAreaOfWalls()
}
};
