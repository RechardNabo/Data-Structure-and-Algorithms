#include <iostream>


class Selection_sort{

int data [0x0F] = {566,66,9,6,3,1,23,36,4,88,96,100,200,1,7};

public:
    void selection(){
        int backward , _forward , minimum;
        std::cout<<"\nUnsorted data\n"<<std::endl;
        display();


        for(backward=0x00 ; backward <0x0F-0x01 ; backward++){
            minimum = backward;
            for(_forward = backward+0x01; _forward<0x0F ; _forward++){
                if(data[_forward]<data[minimum]){
                    minimum = _forward;
                    int temp = data[backward];
                    data[backward] = data[minimum];
                    data[minimum] = temp;
                }
            }
        }


        std::cout<<"\nSorted data\n"<<std::endl;
            display();


    }

public:
    void display(){
        for(int v = 0x00 ; v < 0x0F ; v++){
            std::cout<<data[v]<<" ";
        }

    }
};

int main(){
    Selection_sort selection;
    selection.selection();
return 0x00;
}
