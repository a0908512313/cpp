#include "bits/stdc++.h"
using namespace std;

int main() {
	int k;
	char s[100000];
	printf("Input k (Integer): ");  //輸入 k 值(整數) 
	scanf("%d", &k);
	printf("Input string: ");  //輸入字串 
	scanf("%s", s);
	
	int contUpper = 0, contLower = 0;  //連續大、小寫字元數量
	int lenCross = 0, lenFinal = 0;  //目前交錯長度及最終答案
	char prev;  //前一字元是大寫或小寫
	//處理第一個字元
	if(isupper(s[0])) {  //大寫字母 
		prev = 'u';  //設定前一字元為大寫
		contUpper = 1;  //連續大寫為1
		if(k==1) {  //若k=1就有連續字元
			lenCross = k;
			lenFinal = k;
		}
	}
	else {  //小寫字母
		prev = 'l';  //設定前一字元為小寫
		contLower = 1;  //連續小寫為1
		if(k==1) {
			lenCross = k;
			lenFinal = k;
		}
	}	
	
	//處理第2個以後的字元 
	for(int i=1; i<strlen(s); i++) {
		if(isupper(s[i]) && prev=='u') {  //此字元為大寫且前字元也是大寫 
			contUpper += 1;  //連續大寫加1 
			contLower = 0;  //連續小寫為0 
			if(contUpper==k) {  //連續大寫符合條件 
				lenCross += k;  //目前交錯長度加k 
				lenFinal = max(lenCross, lenFinal);  //取目前交錯長度及最終答案較大值 
			}
			if(contUpper>k)  lenCross = k;  //連續大寫超過k, 超過部分不算
		}
		else if(islower(s[i]) && prev=='l') {  //此字元為小寫且前字元也是小寫 
			contLower += 1;
			contUpper = 0;
			if(contLower==k) {
				lenCross += k;
				lenFinal = max(lenCross, lenFinal);
			}
			if(contLower>k)  lenCross = k;
		}
		else if(isupper(s[i]) && prev=='l') {  //此字元為大寫且前字元為小寫 
			if(contLower<k)  lenCross = 0;  //轉換大小寫時若未達連續大寫條件，連續大寫歸零重新計算 
			contUpper = 1;  //連續大寫為1 
			contLower = 0;  //連續小寫為0 
			if(k==1) {  //若K=1就符合條件 
				lenCross += k;  //目前交錯長度加k 
				lenFinal = max(lenCross, lenFinal);
			}
			prev = 'u';  //設定前一字元為大寫 
		}
		else if(islower(s[i]) && prev=='u') {  //此字元為小寫且前字元為大寫 
			if(contUpper<k)  lenCross = 0;
			contLower = 1;
			contUpper = 0;
			if(k==1) {
				lenCross += k;
				lenFinal = max(lenCross, lenFinal);
			}
			prev = 'l';
		}
	}
	printf("%d\n", lenFinal);

	return 0;
}
