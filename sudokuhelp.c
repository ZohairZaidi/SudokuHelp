#include <stdio.h>
#include <stdbool.h>

void fillSudoko(const int Size, int sudoko[Size][Size]){
    //to keep track of similar numbers
    int count = 0;
     int counttwo = 0;

    for(int i =0;i<Size;i++){ //runs throught the grid row by row
        for (int j=0;j<Size;j++){
            if (sudoko[i][j] == 0){ //if a number is equal to zero
                for (int z =1; z<=Size;z++){
                    if (sudoko[i][0]==z){ //check for the other numbers in the row
                        count ++; //if there are other numbers count increments
                    }
                    else if (sudoko[i][1]==z){
                        count++; 
                    }
                    else if (sudoko[i][2]==z){
                        count ++;
                    }
                    else if (sudoko[i][3]==z){
                        count++;
                    }
                    else{ //if no other numbers count 0
                        count = 0;
                    }

                    if (count == 0){ //if count is zero it checks columns
                        if (sudoko[0][j]==z){ //check for the other numbers in the column
                            counttwo ++; //if other numbers found column it increments 
                        }
                        else if (sudoko[1][j]==z){
                            counttwo ++;
                        }
                        else if (sudoko[2][j]==z){
                            counttwo ++;
                        }
                        else if (sudoko[3][j]==z){
                            counttwo ++;
                        }
                        else{
                            counttwo = 0; //if not it stays zero
                        }
                        if (counttwo==0){ //if column and row pass then the i and j value become the number
                            sudoko[i][j] = z;
                        }
                    }
                }    
            }
        }
    }
}