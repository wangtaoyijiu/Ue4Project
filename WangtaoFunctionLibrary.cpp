// Fill out your copyright notice in the Description page of Project Settings.


#include "WangtaoFunctionLibrary.h"

TArray<int> UWangtaoFunctionLibrary::PackingSort(int index,int remove_index,int page_Num)
{
    TArray<int> a;
    
    int u;    //行数
    int v;    //列数
    int index2;         //列序位置
    int remove_index2;  //列序位置
    index2=(index % 3+page_Num*3)*6+(index/3);
    remove_index2=(remove_index % 3+page_Num*3)*6+(remove_index/3);
    
    return a;
}
