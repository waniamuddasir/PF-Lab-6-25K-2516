#include <stdio.h>
int main(){
	char arr[100];
	int counter = 0, i;
	char ch;
	printf("Enter a string to reverse the words: ");
	while (counter < 100){
		ch = getchar();
		if (ch == '\n'){
			break;
		} else{
			arr[counter] = ch;
			counter++;
		}
	}
	arr[counter] = '\0';
	int length = counter;
	for (i = 0; i < length/2; i++){
		char temp = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i - 1] = temp;
	}
	printf("\nWord reversed string: %s", arr);
	int start = 0;
	for (i = 0; i <= length; i++){
		if (arr[i] == ' ' || arr[i] == '\0'){
			int end = i - 1;
				while (start < end){
					char temp = arr[start];
					arr[start] = arr[end];
					arr[end] = temp;

					start ++;
					end --;
				}
			start = i + 1;
		}
	}
	printf("\nWord reversed string: %s", arr);
	return 0;
}

