//
// Created by 20694 on 2020/3/26.
//

#ifndef UNTITLED_ABOUTMAP_H
#define UNTITLED_ABOUTMAP_H


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct position{
    int x;
    int y;
    int cnt;
    int bag;
}typedef pos ;
typedef int elemtype;
#define row 5
#define col 5
#define f(i,j,k) for(i=k;i<j;i++)
pos Switch(int**map,char c,pos loc);
#endif //UNTITLED_ABOUTMAP_H
