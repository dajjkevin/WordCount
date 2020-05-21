#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
    char ch, ch1 = 'y';
    char inputChar[10];
    scanf("%s", &inputChar);
    char fileName[20];
    scanf("%s", &fileName);
    int num = 0;
    FILE* fp;
    if ((fp = fopen(fileName, "r")) != NULL) {
        if (strcmp(inputChar, "-c") == 0) {
            while ((ch = fgetc(fp)) != EOF) {
                num++;
            }
            printf("×Ö·ûÊý£º%d", num);
        }

        if (strcmp(inputChar, "-w") == 0) {
            while ((ch = fgetc(fp)) != EOF) {
                if (ch == ',' || ch == ' ' || ch == '\t' || ch == '\n') {
                    if (ch1 == ',' || ch1 == ' ' || ch1 == '\t' || ch1 == '\n') {
                    }
                    else {
                        num++;
                    }
                }
                ch1 = ch;
            }
            if(ch1== ',' || ch1 == ' ' || ch1 == '\t' || ch1 == '\n'){
			}
			else{
				num++;
			}
            printf("µ¥´ÊÊý£º%d", num);
        }
    }
    else {
        printf("fail to open! \n");
    }
    fclose(fp);
    return 0;
}
