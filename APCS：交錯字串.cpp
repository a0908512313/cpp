#include "bits/stdc++.h"
using namespace std;

int main() {
	int k;
	char s[100000];
	printf("Input k (Integer): ");  //��J k ��(���) 
	scanf("%d", &k);
	printf("Input string: ");  //��J�r�� 
	scanf("%s", s);
	
	int contUpper = 0, contLower = 0;  //�s��j�B�p�g�r���ƶq
	int lenCross = 0, lenFinal = 0;  //�ثe������פγ̲׵���
	char prev;  //�e�@�r���O�j�g�Τp�g
	//�B�z�Ĥ@�Ӧr��
	if(isupper(s[0])) {  //�j�g�r�� 
		prev = 'u';  //�]�w�e�@�r�����j�g
		contUpper = 1;  //�s��j�g��1
		if(k==1) {  //�Yk=1�N���s��r��
			lenCross = k;
			lenFinal = k;
		}
	}
	else {  //�p�g�r��
		prev = 'l';  //�]�w�e�@�r�����p�g
		contLower = 1;  //�s��p�g��1
		if(k==1) {
			lenCross = k;
			lenFinal = k;
		}
	}	
	
	//�B�z��2�ӥH�᪺�r�� 
	for(int i=1; i<strlen(s); i++) {
		if(isupper(s[i]) && prev=='u') {  //���r�����j�g�B�e�r���]�O�j�g 
			contUpper += 1;  //�s��j�g�[1 
			contLower = 0;  //�s��p�g��0 
			if(contUpper==k) {  //�s��j�g�ŦX���� 
				lenCross += k;  //�ثe������ץ[k 
				lenFinal = max(lenCross, lenFinal);  //���ثe������פγ̲׵��׸��j�� 
			}
			if(contUpper>k)  lenCross = k;  //�s��j�g�W�Lk, �W�L��������
		}
		else if(islower(s[i]) && prev=='l') {  //���r�����p�g�B�e�r���]�O�p�g 
			contLower += 1;
			contUpper = 0;
			if(contLower==k) {
				lenCross += k;
				lenFinal = max(lenCross, lenFinal);
			}
			if(contLower>k)  lenCross = k;
		}
		else if(isupper(s[i]) && prev=='l') {  //���r�����j�g�B�e�r�����p�g 
			if(contLower<k)  lenCross = 0;  //�ഫ�j�p�g�ɭY���F�s��j�g����A�s��j�g�k�s���s�p�� 
			contUpper = 1;  //�s��j�g��1 
			contLower = 0;  //�s��p�g��0 
			if(k==1) {  //�YK=1�N�ŦX���� 
				lenCross += k;  //�ثe������ץ[k 
				lenFinal = max(lenCross, lenFinal);
			}
			prev = 'u';  //�]�w�e�@�r�����j�g 
		}
		else if(islower(s[i]) && prev=='u') {  //���r�����p�g�B�e�r�����j�g 
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
