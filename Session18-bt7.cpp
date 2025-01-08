#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 50

struct sinhVien{
	int id;
	char name[20];
	int age;
	char phoneNum[20];
};

typedef struct sinhVien sinhVien;
void showSVList(sinhVien arr[],int sizeSVList);
int findDeleteList(sinhVien arr[],int *sizeSVList);


int main(){
	system("color 6");
	int sizeSVList=5;
	sinhVien arr[max] = {
		{1,"Son Tung-MTP", 31,"0914546810"},
		{2,"Jack 5 milion",20,"5000000"},
		{3,"Nguyen Van A",45,"0901224461"},
		{4,"K ICM",25,"12614347"},
		{5,"Hoai Linh",65,"9217822090"},
	};
	
	printf("Day la danh sach sinh vien cua ban truoc khi xoa:\n");
	showSVList(arr,sizeSVList);
	
	if(findDeleteList(arr,&sizeSVList)){
		printf("Sinh vien ban can xoa co trong danh sach, day la danh sach sau khi xoa\n");
		showSVList(arr,sizeSVList);
	}
	else{
		printf("Ten sinh vien ban can tim kiem khong ton tai trong danh sach");
	}
}

void showSVList(sinhVien arr[],int sizeSVList){
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf("|%-6s%-21s%-6s%-16s|\n","ID","Name","Age","Phone Number");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	for(int i=0;i<sizeSVList;i++){
		printf("|%-6d%-21s%-6d%-16s|\n",arr[i].id=i+1,arr[i].name,arr[i].age,arr[i].phoneNum);
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	}
}

int findDeleteList(sinhVien arr[],int *sizeSVList){
	char deleteName[20];
	printf("Moi ban nhap vao ten sinh vien can xoa: ");	gets(deleteName);
	int i=0,j=0;
	for(i;i<*sizeSVList;i++){
		if(strcmp(arr[i].name,deleteName)){
			arr[j] = arr[i];
			j++;
		}
	}
	(*sizeSVList)--;
	return !(i==j);
}
