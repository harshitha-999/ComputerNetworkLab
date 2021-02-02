#include<stdio.h>
void encryption(char message[100] , int key){
      char ch;
      for(int i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("\nEncrypted message: \n%s\n", message);
}
void decryption(char message[100], int key){
      char ch;
      for(int i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("\nDecrypted message: \n%s\n", message);
}
 
int main()
{
	char message1[100], ch1;
      char message2[100], ch2;
	int  key1, key2;
	
	printf("\nEnter a message to encrypt: ");
	scanf("%s",message1);
	printf("Enter key: ");
	scanf("%d", &key1);

      encryption(message1,key1);

      printf("\nEnter a message to decrypt: ");
	scanf("%s",message2);
	printf("Enter key: ");
	scanf("%d", &key2);

      decryption(message2,key2);
	
	
	
	return 0;
}