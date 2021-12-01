#include <iostream>
using namespace std;
class Box{
    public:
       int length;
       void set_Width(int wid);
       int get_Width();
    private:
       int width;
};
int Box::get_Width(){
        return width;
};
void Box::set_Width(int wid){
        width = wid;
}
int main(){ 
    Box box;
    box.length = 5;
    box.set_Width(5.0);
    cout << "___"<< box.get_Width() <<endl; 
    return 0;
}