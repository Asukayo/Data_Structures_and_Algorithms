//
// Created by 86150 on 2024/3/1.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"
#include "stdbool.h"
#define CR printf("\n")

int main(){
    char* mergeAlternately(char* word1, char* word2);
//    printf("%s\n", mergeAlternately("abc","defgh"));
    char findTheDifference(char* s, char* t);
//    printf("%c", findTheDifference("abcd","abcde"));
    void moveZeroes(int* nums, int numsSize);
    int nums[] = {0,1,13,2,0,31};
    moveZeroes(nums,6);
    CR;CR;
    int a[5] = {1,2,3,4,5},*returnSize;
    int* plusOne(int* digits, int digitsSize, int* returnSize);
    int *new = plusOne(a,5,returnSize);
//    for(int i =0;i<*returnSize;i++){
//        printf("%d,",new[i]);
//    }
//    printf("%d",12346/10000);
    CR;
    CR;
    int ne = '-2'-'0';
    printf("%d",ne);
}

char* mergeAlternately(char* word1, char* word2) {
    char *new=(char*)malloc(sizeof(char)*(strlen(word1)+strlen(word2)+1));
    auto int i,j,k;
    int strWord1 = strlen(word1);
    int strWord2 = strlen(word2);
    for (i = 0;j<strWord1 && k<strWord2;) {
        new[i++] = word1[j++];
        new[i++] = word2[k++];
    }
    while (j<strWord1){
        new[i++] = word1[j++];
    }
    while (k<strWord2){
        new[i++] = word2[k++];
    }
    *(new+i) = '\0';
    return new;
}

char findTheDifference(char* s, char* t) {
    int cs[26] = {0},cs2[26] = {0};
    int i;
    for(i = 0;i<strlen(s);i++){
        cs[s[i]-'a']++;
        cs2[t[i]-'a']++;
    }
    cs2[t[i]-'a']++;
    for(i = 0;i<26;i++){
//        printf("cs1 = %d,cs2 = %d\n",cs[i],cs2[i]);
        if(cs[i] != cs2[i]){
            break;
        }
    }
    return (char)('a'+i);
}

void moveZeroes(int* nums, int numsSize) {
    int i,j,k;
    for(i = 0;i<numsSize;i++){
        if(nums[i]==0){
            for(j = i;j<numsSize-1&&nums[j]==0;j++);//[0,0,0,0,1,99] numsSize = 6
            if(j==numsSize-1){
                nums[i] = nums[j];
                nums[j] = 0;
                return;
            } else{
                for(k = i;j<numsSize;){
                    nums[k++] = nums[j];
                    nums[j++] = 0;
                }
            }
        }

    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i,sum = 0;
    returnSize = &sum;
    for(i = 0;i<digitsSize;i++){
        sum += digits[i]*((int)pow(10,digitsSize-i-1));
    }
    sum++;
    printf("%d\n",sum);
    if(sum%(int)pow(10,digitsSize)!=0){
        *returnSize = digitsSize;
        int* returnNum = (int *)malloc(sizeof(int)*(digitsSize));
        for(i = 0;i<digitsSize;i++){
            returnNum[i] = sum/(int)pow(10,digitsSize-1-i);
            printf("%d,",((int)pow(10,digitsSize-1-i)));
            sum = sum%(int)pow(10,digitsSize-1-i);
        }
        return returnNum;
    }else{
        *returnSize = digitsSize+1;
        int* returnNum = (int *)malloc(sizeof(int)*(digitsSize+1));
        for(i = 1;i<=digitsSize;i++) returnNum[i] = 0;
        returnSize[0] = 1;
        return returnNum;
    }

}

bool isRobotBounded(char* instructions) {
    enum orientations {
        north = 0, east, south, west
    } orient;
    int i, j, pivot[2] = {0};
    orient = north;
    for (j = 0; j < 4; j++) {
        for (i = 0; instructions[i] != '\0'; i++) {
            if (instructions[i] == 'G') {
                switch (orient) {
                    case 0:
                        ++pivot[0];
                        break;
                    case 1:
                        ++pivot[1];
                        break;
                    case 2:
                        --pivot[0];
                        break;
                    case 3:
                        --pivot[1];
                        break;
                }
            } else {
                switch (instructions[i]) {
                    case 'L':
                        orient = (orient - 1 + 4) % 4;
                        break;
                    case 'R':
                        orient = (orient + 1) % 4;
                        break;
                }
            }
        }
        return pivot[0] == 0 && pivot[1] == 0 ? true : false;
    }
}