#include <iostream>

class Bubble_sort{

int Numbers[0x0F] = {566,66,9,6,3,1,23,36,4,88,96,100,200,1,7};

public:
    void bubble(){
        int backward,_forward;
        std::cout<<"\nunSorted data"<<std::endl;
        display();

        for(backward = 0x0F-0x01 ; backward>0x01 ; backward--){
                for(_forward=0x00 ;_forward<backward ; _forward++){
                    if(Numbers[_forward] > Numbers[_forward+0x01]){
                        int temp = Numbers[_forward];
                        Numbers[_forward] = Numbers[_forward+0x01];
                        Numbers[_forward+0x01] = temp;
                    }
                }

        }

        std::cout<<"\n\nSorted data"<<std::endl;
        display();
    }


public:
    void display(){
        for(int x = 0x00 ; x< 0x0F ; x++){
                std::cout<<Numbers[x]<<" ";

        }
    }

};


int main(){
    Bubble_sort bubble;
    bubble.bubble();

return 0x00;
}
