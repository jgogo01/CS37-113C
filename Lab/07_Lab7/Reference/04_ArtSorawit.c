//By P'Art Sorawit CS36

#include<stdio.h>
#include<stdlib.h>


int main()
{
    long long int L; //จำนวนอักขระของคำ
    long long int N; //จำนวนคำ
    int i; //เดินลูป
    int j; //เดินลูป
    int count; // นับจำนวนตัวที่ไม่เหมือนกัน
    int finded = 0; // 0 คือ ยังหาตุดที่โซ่ขาดไม่เจอ 1 คือหาเจอแล้ว

    scanf("%lld",&L);
    scanf("%lld",&N);


    char word_ref[L]; // คำเปรียบเทียบ
    char input[L]; //รับคำมาเปรียบเทียบ
    char before_chain_break[L]; //เก็บคำสุดท้ายก่อนโว่จะขาด

    scanf("%s",word_ref);

    for (i = 1; i < N; i++)
    {
        scanf("%s",input);
        count = 0;
        for (j = 0; j < (L); j++) //ตรวจตำแหน่งของคำหาความต่าง
            if (word_ref[j] != input[j])
                count++;
        
        if (finded == 0) 
        {
            if(count > 2) //เมื่อเจอคำที่ตัวอักษรต่างมากกว่า2ตำแหน่ง
            {
                for (j = 0; j < L; j++)
                    before_chain_break[j] = word_ref[j];
                finded = 1;
            }
                
            else 
            {
                for (j = 0; j < L; j++)
                    before_chain_break[j] = input[j];
            }

            before_chain_break[L] = '\0'; 
        }

        for (j = 0; j < L; j++) //เอาคำที่รับมาล่าสุดเป็นคำเปรียบเทียบแทน
            word_ref[j] = input[j];  
        word_ref[L] = '\0';

    }

    printf("%s",before_chain_break);
    
    return 0;
}
