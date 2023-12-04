#include <iostream>
using namespace std;

class rectangle{
    private:
    int width;
    int height;
    int area;
    int perimeter;
    public:
    rectangle(){
        width=0;
        height=0;
        area=0;
        perimeter=0;

    }

    rectangle(int h, int w){
        width=w;
        height=h;
        area=0;
        perimeter=0;

    }

    void setWidth(int w){
        width=w;

    }
    void setHeight(int h){
        height = h;
    }
    int getArea(){
        return area;
    }

    int getPerimeter(){
        return perimeter;
    }

    void computeArea(){
        area=height*width;
                
    }

    void computePerimeter(){
        perimeter=(2*(height+width));
           
    }
};


int main(){
    rectangle rect1;
    rectangle rect2(5,10);

    rect1.setHeight(25);
    rect1.setWidth(100);
    
    rect1.computeArea();
    rect1.computePerimeter();


    rect2.computeArea();
    rect2.computePerimeter();


    cout<<"Area of the first rectangle: "<<rect1.getArea()<<endl;
    cout<<"Perimeter of the first rectangle: "<<rect1.getPerimeter()<<endl;

    cout<<"\n"<<endl;
    cout<<"Area of the second rectangle: "<<rect2.getArea()<<endl;
    cout<<"Perimeter of the second rectangle: "<<rect2.getPerimeter()<<endl;

    
        
    



}