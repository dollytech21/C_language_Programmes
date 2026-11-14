#include<stdio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
int i;
void toLowerCase(char str[]) {
	for(i = 0; str[i]; i++) {
		str[i] = tolower((unsigned char)str[i]);
	}
}
int main() {
	char input[100];
	char userName[50] = "Dost";
	int nameAsked = 0;
	printf("========================================\n");
	printf("C-Bot: Nameste! Main aapka personal chatbot hoon.\n");
	printf("Band karne ke liye 'bye'\n");
	printf("=======================================\n\n");
	while (1) {
		printf("%s: ",userName);
		fgets(input, sizeof(input), stdin);
		input[strcspn(input, "\n")] = 0;
		toLowerCase(input);
		if (strcmp(input, "exit")==0 || strcmp(input, "bye")==0 || strcmp(input,"tata")==0){
			printf("C-Bot: Alvida %s! Phir milenge. Have a good day!\n",userName);
			break;
		}
		else if (strstr(input,"hello") || strstr(input,"hi") || strstr(input,"hey") ||strstr(input,"Ram Ram")) {
			printf("C-Bot: Hello! How are you?\n");
		}
		else if(strstr(input,"kaise ho") ||strstr(input,"how are you")) {
			printf("C-Bot: Mai ekdum mst hoon! Aap batao, aap kaise ho, kaisa raha apka khubsurat din?\n");
		}
		else if(strstr(input,"aapka shubh naam") || strstr(input,"tera naam bol") || strstr(input,"what is your name,Dear!")) {
			printf("C-Bot: Mera naam C-Bot hai! Mai apka friend hoon.!\n");
		}
		else if(strstr(input,"mera naam") ||strstr(input,"my name is")) {
			printf("C-Bot: Waah! acha naam hai! Mujhe apko kos naam se bulana chahiye?(Apna nik name batao):");
			scanf("%s", userName);
			getchar();
			printf("C-Bot: Arey wah! Ab se mai apko'%s' kahunga.\n", userName);
		}
		else if (strstr(input,"time") || strstr(input, "samay") || strstr(input, "date")) {
			time_t t = time(NULL);
			struct tm tm = *localtime(&t);
			printf("C-Bot: Is wakt samay aur tarikh hai: %s", asctime(&tm));
		}
		else if(strstr(input, "achhe ho") || strstr(input, "good job") || strstr(input, "nice")) {
			printf("C-Bot: Thank you! Aap se baat karke mujhe bhi bahut khushi hui.\n", userName);
		}
		else {
			printf("C-Bot: Hummm, mai abhi sikh raha hu, aap kuch dushra puche\n");
		}
		printf("\n");
	}
	return 0;
}
