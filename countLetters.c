#include <stdio.h>
int main(){
    char S[100];
    scanf("%s", &S);

    int i;
    int cntelse;
    int cntA = 0, cntB = 0, cntC = 0, cntD = 0, cntE = 0, cntF = 0, cntG = 0, cntH = 0, cntI = 0,cntJ = 0, cntK = 0, cntL = 0, cntM = 0, cntN = 0, cntO = 0, cntP = 0, cntQ = 0, cntR = 0, cntS = 0, cntT = 0, cntU = 0, cntV = 0, cntW = 0, cntX = 0, cntY = 0, cntZ = 0;
    for (i=0; i<100; i++){
        if (S[i] == 'a' || 'A'){
            cntA++;
        }
        if (S[i] == 'b' || 'B'){
            cntB++;
        }
        if (S[i] == 'c' || 'C'){
            cntC++;
        }
        if (S[i] == 'd' || 'D'){
            cntD++;
        }
        if (S[i] == 'e' || 'E'){
            cntE++;
        }
        if (S[i] == 'f' || 'F'){
            cntF++;
        }
        if (S[i] == 'g' || 'G'){
            cntG++;
        }
        if (S[i] == 'h' || 'H'){
            cntH++;
        }
        if (S[i] == 'i' || 'I'){
            cntI++;
        }
        if (S[i] == 'j' || 'J'){
            cntJ++;
        }
        if (S[i] == 'K' || 'K'){
            cntK++;
        }
        if (S[i] == 'l' || 'L'){
            cntL++;
        }
        if (S[i] == 'm' || 'M'){
            cntM++;
        }
        if (S[i] == 'n' || 'N'){
            cntN++;
        }
        if (S[i] == 'o' || 'O'){
            cntO++;
        }
        if (S[i] == 'p' || 'P'){
            cntP++;
        }
        if (S[i] == 'q' || 'Q'){
            cntQ++;
        }
        if (S[i] == 'r' || 'R'){
            cntR++;
        }
        if (S[i] == 's' || 'S'){
            cntS++;
        }
        if (S[i] == 't' || 'T'){
            cntT++;
        }
        if (S[i] == 'u' || 'U'){
            cntU++;
        }
        if (S[i] == 'v' || 'V'){
            cntV++;
        }        
        if (S[i] == 'w' || 'W'){
            cntW++;
        }
        if (S[i] == 'x' || 'X'){
            cntX++;
        }
        if (S[i] == 'y' || 'Y'){
            cntY++;
        }
        if (S[i] == 'z' || 'Z'){
            cntZ++;
        }     
        else {
        	cntelse++;
        }
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", &cntA,&cntB,&cntC,&cntD,&cntE,&cntF,&cntG,&cntH,&cntI,&cntJ,&cntK,&cntL,&cntM,&cntN,&cntO,&cntP,&cntQ,&cntR,&cntS,&cntT,&cntU,&cntV,&cntW,&cntX,&cntY,&cntZ);
    return 0;
}
