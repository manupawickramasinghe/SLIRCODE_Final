
_main:

;MyProject.c,1 :: 		void main() {while(1){
L_main0:
;MyProject.c,2 :: 		TRISB.B0 = 1;
	BSF        TRISB+0, 0
;MyProject.c,3 :: 		TRISB.B1 = 0;
	BCF        TRISB+0, 1
;MyProject.c,4 :: 		if (PORTB.B0 ==1){
	BTFSS      PORTB+0, 0
	GOTO       L_main2
;MyProject.c,5 :: 		PORTB.B1 = 1;
	BSF        PORTB+0, 1
;MyProject.c,6 :: 		}
	GOTO       L_main3
L_main2:
;MyProject.c,8 :: 		PORTB.B1 = 0;
	BCF        PORTB+0, 1
;MyProject.c,9 :: 		}
L_main3:
;MyProject.c,10 :: 		}               }
	GOTO       L_main0
L_end_main:
	GOTO       $+0
; end of _main
