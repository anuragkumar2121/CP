#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[25];
    int regNo;
    float marks[6];
};
typedef struct Student Student;
float avg(float arr[6])
{
    float total=0;
    for(int i = 0;i<6;i++)
    {
        total +=arr[i];
    }
    return total/6;
}
void sortByAvg(Student arr[],int n);
void sort(Student arr[],int n);
int search(Student arr[],int reg,int n);
int main()
{
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    Student s[n];
    for(int i = 0;i<n;i++)
    {
        fflush(stdin);
        scanf("%s",s[i].name);
        scanf("%d",&s[i].regNo);
        for(int j = 0;j<6;j++)
        scanf("%f",&s[i].marks[j]);
    }
    sort(s,n);
    for(int i = 0;i<n;i++)
    {
        printf("Name:%s\nRegNo:%d\n",s[i].name,s[i].regNo);
    }
    int key;
    printf("Enter search reg No:");
    scanf("%d",&key);
    if(search(s,key,n) == -1)
    {
        printf("NOT FOUND\n");
    }
    else
    {
        int i = search(s,key,n);
        printf("Name:%s\nRegNo:%d\n",s[i].name,s[i].regNo);
    }

    sortByAvg(s,n);
    for(int i = 0;i<n;i++)
    {
        printf("Name:%s\nRegNo:%d\nAverage:%f\n",s[i].name,s[i].regNo,avg(s[i].marks));
    }
    return 0;
}
void sort(Student arr[],int n)
{
    Student temp;
    for(int i = 0;i<n;i++)
    {
        for(int j = 1;j<n-i;j++)
        {
            if(arr[j-1].regNo>arr[j].regNo)//sort by regno is similiar only condition needs to be changed
            {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sortByAvg(Student arr[],int n)
{
    Student temp;
    for(int i = 0;i<n;i++)
    {
        for(int j =1;j<n-i;j++)
        {
            if(avg(arr[j-1].marks) > avg(arr[j].marks))
            {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int search(Student arr[],int reg,int n){
    Student res;
    int s = 0,e = n-1,mid;
    while(s<=e)
    {
        mid = s + (e-s)/2;
        if(arr[mid].regNo == reg)
        {
            return mid;
        }
        else if(arr[mid].regNo < reg)
        {
            s = mid+1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}