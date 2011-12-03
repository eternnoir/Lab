#include <stdio.h>
/*
char xddd[]= 
           "\x55"                  //push %ebp
           "\x89\xe5"              //mov %esp,%ebp
           //start                 
           "\x31\xc0\x31\xdb\x31\xd2\x31\xc9" //clean

           "\x68\x6f\x72\x7a\x0a"  //orz\n
           "\x89\xe1"              //mov ecx,esp
           
           "\xb0\x04"              //type of the system call
           "\xb3\x01"              //print to the screen
           "\xb2\x04"              //print 4 charactor
           "\xcd\x80"              //call

           //"\x59"                  //pop out the 4 char in stack
           //"\x31\xd2\x31\xc9"           

           "\x31\xc0"              //xor eax,eax
           "\xb0\x01"
           "\x31\xdb"              //xor ebx,ebx              
           "\xcd\x80"              
           //end
           "\xbd\xde\x83\x04\x08"
           "\xc3";                   
           //"\x5d\xc3";             //pop out  %ebp and ret
*/
/*
char xddd[] = //<_start>
              "\x55"      //push ebp
              "\x89\xec"  //mov %esp,%ebp
              "\xeb\x13"                             //call ender

              //<starter>
              "\x31\xc0\x31\xdb\x31\xd2\x31\xc9"     //clean the register
              "\xb0\x04\xb3\x01\x59\xb2\x0f\xcd\x80" //set how to print
              "\xc9\xc3"  //lea ret
              
              //<ender>
              "\xe8\xe8\xff\xff\xff"                 //call start
              "\x45\x74\x68\x61\x6e\x20\x48\x75\x6e\x74\x20"
              "\x52\x75\x6e\x21";
              //"Ethan Hunt Run!\n";
              //"\x5d\xc3";             //pop out  %ebp and ret
*/
 
int main(){
    int (*func)();
    func = (int (*)()) xddd;
    printf("ya1\n");
    (int)(*func)();
    //int abc=1;
    printf("ya2\n");

//__asm__(
    //    "movl $xddd,%eax; \
    //    jmp *%eax;" \
    //);
    
}
