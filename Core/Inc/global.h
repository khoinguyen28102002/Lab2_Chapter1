/*
 * global.h
 *
 *  Created on: 29 thg 11, 2024
 *      Author: NGUYEN KHOI NGUYEN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT 			0
#define NORMAL 			1
#define MODIFY_HOUR		2
#define MODIFY_MIN		3
#define MODIFY_SEC		4
#define ALARM_HOUR		5
#define ALARM_MIN		6
#define ALARM_SEC 		7
#define CHECK_ALARM		8


int systemState = INIT;
uint8_t alarm_hour;
uint8_t alarm_min;
uint8_t count_blink = 0;
uint8_t blink_state = 0;
uint8_t set_alarm_flag = 0;
uint8_t hour_alarm_flag = 0;
uint8_t min_alarm_flag = 0;

#endif /* INC_GLOBAL_H_ */
