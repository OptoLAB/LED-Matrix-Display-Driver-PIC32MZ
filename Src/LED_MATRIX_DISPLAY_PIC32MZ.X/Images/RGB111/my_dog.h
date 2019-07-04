/*
*
* Author: J. Bajic, 2018.
*
*/

#ifndef MY_DOG_H
#define MY_DOG_H

const unsigned char my_dog_IMG[]={
0x00,0x00,0x00,0x00,0x13,0x13,0x37,0x77,0x77,0x67,0x26,0x26,0x76,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x20,0x20,0x22,0x20,0x22,0x22,0x02,0x22,0x00,0x00,0x00,0x00,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x17,0x03,0x77,0x77,0x77,0x62,0x22,0x22,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x77,0x66,0x66,0x66,0x62,0x22,0x00,0x00,0x00,0x66,0x66,0x20,0x22,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x71,0x07,0x77,0x77,0x76,0x22,0x22,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x77,0x76,0x66,0x66,0x76,0x22,0x22,0x20,0x00,0x02,0x66,0x66,0x66,0x66,0x66,0x66,0x22,0x00,0x00,0x22,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x22,0x20,0x00,0x00,0x77,0x33,0x77,0x77,0x66,0x66,0x66,0x66,0x66,0x26,0x22,0x26,0x76,0x66,0x66,0x62,0x66,0x67,0x77,0x66,0x66,0x22,0x22,0x26,0x66,0x66,0x76,0x62,0x22,0x22,0x22,0x02,0x22,0x26,0x62,0x22,0x20,0x00,0x00,0x00,0x00,0x00,0x00,
0x26,0x76,0x20,0x02,0x00,0x77,0x32,0x62,0x66,0x66,0x76,0x66,0x66,0x26,0x66,0x66,0x66,0x62,0x22,0x22,0x00,0x02,0x22,0x77,0x66,0x26,0x66,0x66,0x66,0x62,0x66,0x66,0x66,0x66,0x62,0x22,0x22,0x22,0x26,0x66,0x20,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
0x66,0x77,0x26,0x66,0x62,0x66,0x67,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x26,0x66,0x66,0x22,0x22,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x62,0x26,0x20,0x00,0x00,0x00,0x00,0x00,
0x66,0x77,0x67,0x66,0x66,0x66,0x66,0x26,0x66,0x22,0x66,0x22,0x66,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x66,0x67,0x66,0x66,0x77,0x66,0x66,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x76,0x66,0x26,0x66,0x66,0x62,0x00,0x22,
0x66,0x62,0x66,0x67,0x67,0x66,0x62,0x66,0x66,0x62,0x66,0x22,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x66,0x67,0x77,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x62,
0x66,0x66,0x66,0x67,0x77,0x66,0x76,0x62,0x22,0x66,0x62,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x66,0x77,0x62,0x22,0x26,0x66,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x77,0x77,0x76,0x77,0x66,0x76,0x77,0x66,0x66,0x67,0x66,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x66,0x76,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x77,0x66,0x66,0x66,0x66,0x76,0x66,0x66,0x76,0x62,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x77,0x76,0x66,0x67,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x76,0x62,0x26,0x76,0x66,0x66,0x66,0x66,0x66,0x22,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x76,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x77,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x76,0x67,0x66,0x66,0x62,0x62,0x66,0x62,0x76,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x76,0x66,0x66,0x66,0x66,0x76,0x66,0x76,0x66,0x76,0x66,0x76,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x77,0x66,0x66,0x66,0x26,0x66,0x66,0x66,0x66,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x67,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x76,0x66,
0x76,0x66,0x67,0x76,0x67,0x66,0x76,0x66,0x62,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x66,0x66,0x62,0x66,0x66,0x67,0x66,0x66,0x66,0x66,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x77,0x66,0x66,0x76,0x77,0x77,0x66,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x62,0x22,0x66,0x22,0x26,0x66,0x66,0x66,0x66,0x22,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x76,0x66,0x66,0x76,0x66,0x66,0x66,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x66,0x66,0x66,0x62,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x66,0x66,0x66,0x27,0x72,0x66,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x66,0x66,0x66,0x66,0x76,0x26,0x22,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x66,0x67,0x66,0x66,0x66,0x66,0x60,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x66,0x66,0x67,0x66,0x66,0x66,0x22,0x26,0x66,0x22,0x62,0x26,0x66,0x66,0x66,0x66,0x66,0x66,
0x67,0x66,0x67,0x76,0x77,0x76,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x66,0x66,0x66,0x62,0x66,0x62,0x66,0x26,0x66,0x66,0x62,0x66,0x66,0x62,0x26,0x66,0x66,
0x66,0x66,0x67,0x76,0x76,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x10,0x00,0x00,0x00,0x26,0x66,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x67,0x66,0x76,0x77,0x76,0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x22,0x66,0x66,0x77,0x66,0x62,0x66,0x27,0x66,0x66,0x62,0x26,0x66,0x66,0x66,
0x76,0x66,0x67,0x66,0x67,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x76,0x67,0x66,0x66,0x66,0x76,0x76,0x66,0x66,0x66,0x76,0x66,0x66,0x66,
0x77,0x66,0x67,0x66,0x76,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x67,0x66,0x66,0x62,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x66,0x66,0x76,0x76,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x66,0x62,0x26,0x66,0x66,0x66,0x66,0x66,0x67,0x66,0x76,
0x67,0x76,0x66,0x72,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x77,0x66,0x66,0x66,0x66,0x77,0x26,0x66,0x66,0x66,
0x62,0x66,0x66,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x76,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x26,0x66,0x76,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x77,0x77,0x66,0x26,0x66,0x66,0x66,0x66,0x66,0x66,
0x66,0x76,0x66,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x77,0x77,0x66,0x22,0x72,0x26,0x66,0x66,0x67,0x66,
0x66,0x22,0x66,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x73,0x02,0x26,0x26,0x66,0x66,0x66,0x66,0x66,0x66,
0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x66,0x26,0x66,0x66,0x66,0x67,0x66,0x62,
0x26,0x26,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06,0x66,0x66,0x66,0x66,0x26,0x66,0x66,0x67,
0x66,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x66,0x66,0x76,0x66,0x66,0x66,0x66,0x66,0x66,
0x66,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x22,0x26,0x66,0x66,0x66,0x62,0x66,0x66,0x66,
0x66,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x66,0x77,0x67,0x66,0x22,0x76,0x66,0x66,0x67,
0x62,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x66,0x67,0x66,0x66,0x26,0x66,0x66,0x67,0x67,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x66,0x26,0x26,0x66,0x22,0x76,0x66,0x26,0x76,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x22,0x66,0x27,0x62,0x26,0x66,0x66,0x62,0x66,0x66,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x66,0x76,0x22,0x66,0x26,0x66,0x66,0x66,0x67,0x62,0x66,0x62,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x75,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x62,0x62,0x26,0x66,0x26,0x66,0x26,0x26,0x26,0x66,0x62,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x50,0x00,0x00,0x00,0x00,0x77,0x77,0x77,0x75,0x77,0x62,0x66,0x66,0x66,0x62,0x26,0x62,0x62,0x66,0x66,0x66,0x62,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x77,0x77,0x77,0x77,0x26,0x62,0x26,0x67,0x22,0x22,0x66,0x66,0x62,0x26,0x66,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x05,0x77,0x77,0x77,0x76,0x66,0x66,0x26,0x66,0x26,0x67,0x66,0x66,0x26,0x66,0x62,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x47,0x40,0x66,0x66,0x66,0x67,0x67,0x66,0x66,0x66,0x27,0x26,0x22,0x26,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x71,0x26,0x66,0x26,0x66,0x66,0x66,0x67,0x66,0x67,0x22,0x22,0x66,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x66,0x26,0x66,0x26,0x62,0x26,0x62,0x66,0x66,0x62,0x26,0x26,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x66,0x26,0x22,0x62,0x26,0x26,0x62,0x67,0x22,0x67,0x66,0x66,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x62,0x66,0x66,0x22,0x00,0x00,0x00,0x02,0x26,0x26,0x22,0x22,0x22,0x22,0x66,0x26,0x66,0x22,0x66,0x66,0x66,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x76,0x62,0x67,0x66,0x62,0x66,0x26,0x62,0x77,0x72,0x26,0x22,0x22,0x26,0x02,0x26,0x62,0x77,0x66,0x67,0x66,0x22,0x22,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x62,0x62,0x26,0x26,0x66,0x66,0x66,0x66,0x66,0x62,0x26,0x62,0x26,0x22,0x22,0x22,0x66,0x77,0x67,0x66,0x67,0x22,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x62,0x66,0x26,0x62,0x26,0x62,0x67,0x22,0x62,0x62,0x26,0x66,0x26,0x66,0x22,0x32,0x66,0x67,0x72,0x26,0x66,0x22,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x67,0x66,0x76,0x62,0x26,0x66,0x66,0x26,0x62,0x62,0x26,0x62,0x26,0x66,0x62,0x72,0x62,0x67,0x66,0x66,0x66,0x67,0x77,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x67,0x66,0x66,0x66,0x22,0x27,0x26,0x62,0x22,0x26,0x66,0x26,0x22,0x26,0x76,0x63,0x22,0x67,0x77,0x27,0x66,0x27,0x76,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x66,0x76,0x66,0x26,0x62,0x26,0x22,0x62,0x62,0x26,0x66,0x67,0x66,0x62,0x66,0x66,0x27,0x26,0x66,0x66,0x22,0x76,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x62,0x67,0x76,0x27,0x62,0x26,0x22,0x22,0x22,0x26,0x66,0x26,0x62,0x22,0x66,0x66,0x66,0x22,0x67,0x22,0x66,0x26,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x62,0x76,0x66,0x66,0x62,0x72,0x22,0x62,0x22,0x26,0x66,0x62,0x22,0x22,0x22,0x26,0x22,0x22,0x77,0x27,0x22,0x77,0x77,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x62,0x26,0x66,0x62,0x26,0x66,0x26,0x62,0x62,0x62,0x22,0x26,0x22,0x22,0x22,0x66,0x67,0x22,0x67,0x27,0x72,0x66,0x77,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x62,0x22,0x22,0x26,0x22,0x66,0x66,0x76,0x76,0x72,0x62,0x77,0x26,0x26,0x26,0x62,0x66,0x22,0x66,0x26,0x20,0x66,0x77,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x62,0x62,0x62,0x26,0x62,0x22,0x26,0x66,0x76,0x62,0x66,0x26,0x26,0x27,0x62,0x66,0x22,0x66,0x67,0x66,0x76,0x76,0x67,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x77,0x22,0x22,0x62,0x66,0x62,0x26,0x77,0x76,0x26,0x76,0x26,0x22,0x22,0x62,0x22,0x62,0x76,0x76,0x66,0x77,0x62,0x77,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x77,0x62,0x26,0x66,0x76,0x72,0x26,0x77,0x76,0x22,0x26,0x26,0x26,0x67,0x22,0x22,0x22,0x66,0x62,0x67,0x72,0x66,0x27,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x22,0x62,0x26,0x66,0x67,0x72,0x22,0x62,0x76,0x66,0x22,0x26,0x22,0x27,0x77,0x66,0x62,0x22,0x22,0x62,0x26,0x77,0x62,0x27,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x22,0x26,0x66,0x67,0x62,0x72,0x22,0x27,0x72,0x62,0x22,0x67,0x62,0x63,0x77,0x22,0x26,0x22,0x22,0x22,0x62,0x77,0x62,0x66,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x22,0x26,0x62,0x62,0x67,0x26,0x62,0x26,0x22,0x22,0x22,0x66,0x22,0x26,0x77,0x26,0x22,0x22,0x22,0x62,0x22,0x67,0x77,0x26
};

const image_t my_dog={96,64,0,2,my_dog_IMG};

#endif
