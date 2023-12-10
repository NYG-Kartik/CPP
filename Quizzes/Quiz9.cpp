//
//Author: Kartik Vanjani
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Quiz 9
//


if(row % 2 == 0 && col % 2 == 0){
    out[row][col] = 0;
}
else if(row%2 !=0 && col%2 != 0){
    out[row][col] = 0;
}
else{
    out[row][col] = img[row][col];
}


