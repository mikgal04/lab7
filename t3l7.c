#include <stdio.h>

int main()
{
char word[100], *ptr;
int vowels = 0, consonants = 0;

printf("Введите слово на латинице без заглавных символов: ");
scanf("%s", word);

ptr = word;
while (*ptr != '\0') {
if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
*ptr == 'o' || *ptr == 'u') {
vowels++;
} else {
consonants++;
}
ptr++;
}

printf("Количество гласных: %d\n", vowels);
printf("Количество согласных: %d\n", consonants);

return 0;
}