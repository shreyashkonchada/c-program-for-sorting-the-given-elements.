#include<stdio.h>
int main(){
	char s;
	scanf(" %c",&s);
	if ((s>='a'&&s<='z')||(s>='A'&&s<='Z')){
		switch (s){
			case 'a':
					case 'A':
						case 'e':
							case 'E':
								case 'i':
									case 'I':
										case 'o':
												case 'O':
													case 'u':
														case 'U':printf("vowel");
														break;
														default : printf("consonant");
		}
	}
	else {
		printf("not a character");
		
	}
	return 0;
}
