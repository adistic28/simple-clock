#include stdio.h 
#include time.h
#include unistd.h
#include stlib.h
int main() ; { 
    int m , h , s ; 
    m=h=s=0 ; 
    while (1){
        clrscr ; 
        printf("%02d : %02d : %02d"  , h , m , s) ;
        fflush (stdout) ;
        s++ ;  
        if (s==60) {
            m +=1 ; 
            s = 0 ; 
            
        }   
    }  if (  m == 60 ) {
        h += 1  ; 
        m = 0 ; 

    } sleep (1)  ; 
    return 0  ; 
}