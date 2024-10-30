#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int big = 0;
    int small = 0;
    
    if(sizes[0][0] > sizes[0][1]){
        big = sizes[0][0];
        small = sizes[0][1];
    }
    else{
        big = sizes[0][1];
        small = sizes[0][0];
    }
    
    for(int i = 1;i<sizes_rows;i++){
        if(sizes[i][0] > sizes[i][1])
        {
            if(big < sizes[i][0])
                big = sizes[i][0];
            
            if(small < sizes[i][1])
                small = sizes[i][1];
        }
        else
        {
            if(big < sizes[i][1])
                big = sizes[i][1];
            if(small < sizes[i][0])
                small = sizes[i][0];
        }
    }
    return big * small;
}