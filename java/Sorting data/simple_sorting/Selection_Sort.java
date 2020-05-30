
public class Selection_Sort
{
    
    int Data[] = {556,66,9,6,3,1,23,36,4,88,96,100,200,1,7};
    int forward , backward , minimum;
    public void selection(){
        System.out.print("Selection Sort Algorith\n");
        System.out.print("\nUnsorted data\n");
        display();
        
        for(backward = 0x00; backward <Data.length -0x01 ; backward++){
            minimum = backward;
            for(forward = backward+0x01 ; forward <Data.length ; forward++){
                if(Data[forward]< Data[minimum]){
                    minimum = forward;
                    int temp = Data[backward];
                    Data[backward] =Data[minimum];
                    Data[minimum]  =temp;
                }
            }
        }
        System.out.print("\n\nSorted data\n");
        display();
    }
    
    
    private void display(){
        for(int x = 0 ; x< Data.length ; x++){
            System.out.print(Data[x]+" ");
        }
    }
}
