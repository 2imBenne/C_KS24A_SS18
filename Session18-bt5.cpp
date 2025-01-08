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
void fixIFSV(sinhVien arr[],int sizeSVList);

int main(){
	system("color 4");
	int sizeSVList=5;
	sinhVien arr[max] = {
		{1,"Lam Gia Huy", 18,"0751321544"},
		{2,"Lu Nhut Dinh",20,"0123456789"},
		{3,"Pham Quang Huy",18,"7894561230"},
		{4,"Nguyen Gia Huy",62,"8562479203"},
		{5,"Hoang Dinh Tung",40,"7814425218"},
	};
	
	printf("Day la danh sach sinh vien truoc khi sua:\n");
	showSVList(arr,sizeSVList);
	
	fixIFSV(arr,sizeSVList);
	
	printf("Danh sach sinh vien cua ban sau khi sua:\n");
	showSVList(arr,sizeSVList);
}

void showSVList(sinhVien arr[],int sizeSVList){
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf("|%-5s%-20s%-5s%-15s|\n","ID","Name","Age","Phone Number");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	for(int i=0;i<sizeSVList;i++){
		printf("|%-5d%-20s%-5d%-15s|\n",arr[i].id,arr[i].name,arr[i].age,arr[i].phoneNum);
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	}
}

void fixIFSV(sinhVien arr[],int sizeSVList){
	int fixID;
	printf("Moi nhap vao ID sinh vien ban can sua: ");	scanf("%d",&fixID);
	fflush(stdin);
	
	for(int i=0;i<sizeSVList;i++){
		if(arr[i].id == fixID){
			sinhVien fixIF;
			fixIF = arr[i];
			printf("Moi nhap vao ten sinh vien can sua: "); gets(fixIF.name);
			printf("Moi nhap vao tuoi sinh vien can sua: ");	scanf("%d",&fixIF.age);
			fflush(stdin);
			
			arr[i] = fixIF;
			return;
		}
	}
	
	printf("ID sinh vien khong ton tai !!!");
}
