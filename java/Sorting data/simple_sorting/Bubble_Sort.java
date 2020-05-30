
public class Bubble_Sort
{
    private int Numbers[] = {5,66,99,6,3,1,23,36,4,88,96,100,200,1,7};//unsorted data
    
    public void bubble(){
        System.out.print("Bubble Sort algorith");
        int forward,backward;
        //=================================[]================================
        System.out.println("\nUnsorted data ");
        for(int y = 0; y < Numbers.length ;y++ ){
            System.out.print(Numbers[y]+" ");
        }
        
        //=================================[]=================================
        for(backward=Numbers.length-0x01;backward>0x01;backward--){
            for(forward = 0x00; forward < backward ; forward++){
                if(Numbers[forward] > Numbers[forward+0x01]){
                    int temp = Numbers[forward];
                    Numbers[forward] = Numbers[forward+0x01];
                    Numbers[forward+0x01]=temp;
                }
            }
        }
        
        //=================================[]=================================
        System.out.println("\nSorted data ");
        for(int x = 0x00 ; x < Numbers.length;x++){
            System.out.print(Numbers[x]+" ");
        }
        
    }
}
