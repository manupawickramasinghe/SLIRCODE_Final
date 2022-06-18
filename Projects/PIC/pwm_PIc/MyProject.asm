
_InitMain:

;MyProject.c,3 :: 		void InitMain() {
;MyProject.c,9 :: 		PORTA = 255;
	MOVLW      255
	MOVWF      PORTA+0
;MyProject.c,10 :: 		TRISA = 255;                        // configure PORTA pins as input
	MOVLW      255
	MOVWF      TRISA+0
;MyProject.c,11 :: 		PORTB = 0;                          // set PORTB to 0
	CLRF       PORTB+0
;MyProject.c,12 :: 		TRISB = 0;                          // designate PORTB pins as output
	CLRF       TRISB+0
;MyProject.c,13 :: 		PORTC = 0;                          // set PORTC to 0
	CLRF       PORTC+0
;MyProject.c,14 :: 		TRISC = 0;                          // designate PORTC pins as output
	CLRF       TRISC+0
;MyProject.c,15 :: 		PWM1_Init(5000);                    // Initialize PWM1 module at 5KHz
	BCF        T2CON+0, 0
	BCF        T2CON+0, 1
	MOVLW      199
	MOVWF      PR2+0
	CALL       _PWM1_Init+0
;MyProject.c,16 :: 		PWM2_Init(5000);                    // Initialize PWM2 module at 5KHz
	BCF        T2CON+0, 0
	BCF        T2CON+0, 1
	MOVLW      199
	MOVWF      PR2+0
	CALL       _PWM2_Init+0
;MyProject.c,17 :: 		}
L_end_InitMain:
	RETURN
; end of _InitMain

_main:

;MyProject.c,19 :: 		void main() {
;MyProject.c,20 :: 		InitMain();
	CALL       _InitMain+0
;MyProject.c,21 :: 		current_duty  = 16;                 // initial value for current_duty
	MOVLW      16
	MOVWF      _current_duty+0
;MyProject.c,22 :: 		current_duty1 = 16;                 // initial value for current_duty1
	MOVLW      16
	MOVWF      _current_duty1+0
;MyProject.c,24 :: 		PWM1_Start();                       // start PWM1
	CALL       _PWM1_Start+0
;MyProject.c,25 :: 		PWM2_Start();                       // start PWM2
	CALL       _PWM2_Start+0
;MyProject.c,26 :: 		PWM1_Set_Duty(current_duty);        // Set current duty for PWM1
	MOVF       _current_duty+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;MyProject.c,27 :: 		PWM2_Set_Duty(current_duty1);       // Set current duty for PWM2
	MOVF       _current_duty1+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;MyProject.c,29 :: 		while (1) {                         // endless loop
L_main0:
;MyProject.c,30 :: 		if (RA0_bit) {                    // button on RA0 pressed
	BTFSS      RA0_bit+0, BitPos(RA0_bit+0)
	GOTO       L_main2
;MyProject.c,31 :: 		Delay_ms(40);
	MOVLW      52
	MOVWF      R12+0
	MOVLW      241
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	NOP
	NOP
;MyProject.c,32 :: 		current_duty++;                 // increment current_duty
	INCF       _current_duty+0, 1
;MyProject.c,33 :: 		PWM1_Set_Duty(current_duty);
	MOVF       _current_duty+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;MyProject.c,34 :: 		}
L_main2:
;MyProject.c,36 :: 		if (RA1_bit) {                    // button on RA1 pressed
	BTFSS      RA1_bit+0, BitPos(RA1_bit+0)
	GOTO       L_main4
;MyProject.c,37 :: 		Delay_ms(40);
	MOVLW      52
	MOVWF      R12+0
	MOVLW      241
	MOVWF      R13+0
L_main5:
	DECFSZ     R13+0, 1
	GOTO       L_main5
	DECFSZ     R12+0, 1
	GOTO       L_main5
	NOP
	NOP
;MyProject.c,38 :: 		current_duty--;                 // decrement current_duty
	DECF       _current_duty+0, 1
;MyProject.c,39 :: 		PWM1_Set_Duty(current_duty);
	MOVF       _current_duty+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;MyProject.c,40 :: 		}
L_main4:
;MyProject.c,42 :: 		if (RA2_bit) {                    // button on RA2 pressed
	BTFSS      RA2_bit+0, BitPos(RA2_bit+0)
	GOTO       L_main6
;MyProject.c,43 :: 		Delay_ms(40);
	MOVLW      52
	MOVWF      R12+0
	MOVLW      241
	MOVWF      R13+0
L_main7:
	DECFSZ     R13+0, 1
	GOTO       L_main7
	DECFSZ     R12+0, 1
	GOTO       L_main7
	NOP
	NOP
;MyProject.c,44 :: 		current_duty1++;                // increment current_duty1
	INCF       _current_duty1+0, 1
;MyProject.c,45 :: 		PWM2_Set_Duty(current_duty1);
	MOVF       _current_duty1+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;MyProject.c,46 :: 		}
L_main6:
;MyProject.c,48 :: 		if (RA3_bit) {                    // button on RA3 pressed
	BTFSS      RA3_bit+0, BitPos(RA3_bit+0)
	GOTO       L_main8
;MyProject.c,49 :: 		Delay_ms(40);
	MOVLW      52
	MOVWF      R12+0
	MOVLW      241
	MOVWF      R13+0
L_main9:
	DECFSZ     R13+0, 1
	GOTO       L_main9
	DECFSZ     R12+0, 1
	GOTO       L_main9
	NOP
	NOP
;MyProject.c,50 :: 		current_duty1--;                // decrement current_duty1
	DECF       _current_duty1+0, 1
;MyProject.c,51 :: 		PWM2_Set_Duty(current_duty1);
	MOVF       _current_duty1+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;MyProject.c,52 :: 		}
L_main8:
;MyProject.c,54 :: 		Delay_ms(5);                      // slow down change pace a little
	MOVLW      7
	MOVWF      R12+0
	MOVLW      125
	MOVWF      R13+0
L_main10:
	DECFSZ     R13+0, 1
	GOTO       L_main10
	DECFSZ     R12+0, 1
	GOTO       L_main10
;MyProject.c,55 :: 		}
	GOTO       L_main0
;MyProject.c,56 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
