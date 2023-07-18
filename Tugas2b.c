#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    do
    {
        int i;

        printf("\n\n=== Text To Morse ===\n\n");
        printf("Masukkan Kata = ");
        fgets(string, 1000, stdin);

        for (i = 0; i <= strlen(string); i++)
        {
            if (string[i] == ' ')
            {
                printf("\\");
            }
            else if (string[i] == '0')
            {
                printf("-----");
            }
            else if (string[i] == '1')
            {
                printf(".----");
            }
            else if (string[i] == '2')
            {
                printf("..---");
            }
            else if (string[i] == '3')
            {
                printf("...--");
            }
            else if (string[i] == '4')
            {
                printf("....-");
            }
            else if (string[i] == '5')
            {
                printf(".....");
            }
            else if (string[i] == '6')
            {
                printf("-....");
            }
            else if (string[i] == '7')
            {
                printf("--...");
            }
            else if (string[i] == '8')
            {
                printf("---..");
            }
            else if (string[i] == '9')
            {
                printf("----.");
            }
            else if (string[i] == '.')
            {
                printf(".-.-.-");
            }
            else if (string[i] == ',')
            {
                printf("--..--");
            }
            else if (string[i] == '?')
            {
                printf("..--..");
            }
            else if (string[i] == '!')
            {
                printf("-.-.--");
            }
            else if (string[i] == '-')
            {
                printf("-....-");
            }
            else if (string[i] == '/')
            {
                printf("-..-.");
            }
            else if (string[i] == '@')
            {
                printf(".--.-.");
            }
            else if (string[i] == '(')
            {
                printf("-.--.");
            }
            else if (string[i] == ')')
            {
                printf("-.--.-");
            }
            else if (string[i] == 'A' || string[i] == 'a')
            {
                printf(".-");
            }
            else if (string[i] == 'B' || string[i] == 'b')
            {
                printf("-...");
            }
            else if (string[i] == 'C' || string[i] == 'c')
            {
                printf("-.-.");
            }
            else if (string[i] == 'D' || string[i] == 'd')
            {
                printf("-..");
            }
            else if (string[i] == 'E' || string[i] == 'e')
            {
                printf(".");
            }
            else if (string[i] == 'F' || string[i] == 'f')
            {
                printf("..-.");
            }
            else if (string[i] == 'G' || string[i] == 'g')
            {
                printf("--.");
            }
            else if (string[i] == 'H' || string[i] == 'h')
            {
                printf("....");
            }
            else if (string[i] == 'I' || string[i] == 'i')
            {
                printf("..");
            }
            else if (string[i] == 'J' || string[i] == 'j')
            {
                printf(".---");
            }
            else if (string[i] == 'K' || string[i] == 'k')
            {
                printf("-.-");
            }
            else if (string[i] == 'L' || string[i] == 'l')
            {
                printf(".-..");
            }
            else if (string[i] == 'M' || string[i] == 'm')
            {
                printf("--");
            }
            else if (string[i] == 'N' || string[i] == 'n')
            {
                printf("-.");
            }
            else if (string[i] == 'O' || string[i] == 'o')
            {
                printf("---");
            }
            else if (string[i] == 'P' || string[i] == 'p')
            {
                printf(".--.");
            }
            else if (string[i] == 'Q' || string[i] == 'q')
            {
                printf("--.-");
            }
            else if (string[i] == 'R' || string[i] == 'r')
            {
                printf(".-.");
            }
            else if (string[i] == 'S' || string[i] == 's')
            {
                printf("...");
            }
            else if (string[i] == 'T' || string[i] == 't')
            {
                printf("-");
            }
            else if (string[i] == 'U' || string[i] == 'u')
            {
                printf("..-");
            }
            else if (string[i] == 'V' || string[i] == 'v')
            {
                printf("...-");
            }
            else if (string[i] == 'W' || string[i] == 'w')
            {
                printf(".--");
            }
            else if (string[i] == 'X' || string[i] == 'x')
            {
                printf("-..-");
            }
            else if (string[i] == 'Y' || string[i] == 'y')
            {
                printf("-.--");
            }
            else if (string[i] == 'Z' || string[i] == 'z')
            {
                printf("--..");
            }
        }
    } while (strlen(string) <= 0 || strlen(string) >= 0);
}