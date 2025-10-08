/*
 * software_timer.c
 *
 *  Created on: Oct 5, 2025
 *      Author: Admin
 */

#include "software_timer.h"
#define MAX_COUNTER 11

int timer1_flag[MAX_COUNTER];
int timer1_counter[MAX_COUNTER];
void setTimer1(int dur, int index){
	timer1_counter[index] = dur;
	timer1_flag[index] = 0;
}
void timerRun(){
	for(int i = 0; i < MAX_COUNTER; ++i){
		if(timer1_counter[i] > 0){
			--timer1_counter[i];
			if(timer1_counter[i] <= 0){
				timer1_flag[i] = 1;
			}
		}
	}
}
int isTimerExpried(int index){
	if(timer1_flag[index] == 1){
		timer1_flag[index] = 0;
		return 1;
	}
	return 0;
}

