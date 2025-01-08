#include <stdio.h>
#include <string.h>

struct sinhVien{
	char name[100];
	int age;
	char phoneNum[100];
};

typedef struct sinhVien sinhVien;

int main(){
	sinhVien arr[3];
	for(int i=0;i<5;i++){
		printf("Moi nhap ten sinh vien thu %d: ",i+1);
		fgets(arr[i].name,100,stdin);
		arr[i].name[strcspn(arr[i].name,"\n")]='\0';
		
		
		printf("Moi nhap tuoi sinh vien thu %d: ",i+1);
		scanf("%d",&arr[i].age);
		while(getchar() != '\n');
		
		
		printf("Moi nhap sdt sinh vien thu %d: ",i+1);
		fgets(arr[i].phoneNum,100,stdin);
		arr[i].name[strcspn(arr[i].name,"\n")]='\0';
	}
	printf("\n\n");
	printf("Day la thong tin cac sinh vien ban vua nhap:\n");
	for(int i=0;i<5;i++){
		printf("\n");
		printf("Ho va Ten: %s\n",arr[i].name);
		printf("Tuoi: %d\n",arr[i].age);
		printf("Sdt: %s\n",arr[i].phoneNum);
	}
}
