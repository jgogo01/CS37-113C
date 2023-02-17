#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int L;
    long long int N;
    int count;
    int find = 0;

    scanf("%lld",&L);
    scanf("%lld",&N);

    char wordRef[L];
    char input[L];
    char chain[L];

    scanf("%s",wordRef);

    for (int i = 1; i < N; i++){
        scanf("%s",input);
        count = 0;
        for(int j = 0; j < (L); j++){
            if(wordRef[j] != input[j]){
                count++;
            }
        }
        if(find == 0){
            if(count > 2){
                for (int j = 0; j < L; j++)
                    chain[j] = wordRef[j];
                find = 1;
            }else{
                for (int j = 0; j < L; j++){
                    chain[j] = input[j];
                }
            }
            chain[L] = '\0'; 
        }
        for (int j = 0; j < L; j++){
            wordRef[j] = input[j];  
            wordRef[L] = '\0';
        }
    }
    printf("%s",chain);
}
