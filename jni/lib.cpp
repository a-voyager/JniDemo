/*
 * lib.c
 *
 *  Created on: 2016��2��11��
 *      Author: wuhaojie
 */

#include <iostream>
#include "top_wuhaojie_demo_Demo.h"
using namespace std;

JNIEXPORT jstring JNICALL Java_top_wuhaojie_demo_Demo_getString(JNIEnv *env,
		jclass cls, jstring j_str) {
	cout << "c++ running... " << endl;
	return j_str;
}

