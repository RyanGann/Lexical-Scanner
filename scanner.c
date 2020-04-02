#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void readFile();
void buildToken(char *line);

int main() {
	
    readFile();

	return 0;
}

void readFile() {

    // www.programiz.com/c-programming/examples/read-file

    //Lines read will be 80 characters max +1 for \n character
    char currentLine[81] = {'\0'}; 


    FILE* fptr;
    if ((fptr = fopen("TestFile1.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads lines until no more lines are left to be read
    while (fgets(currentLine, sizeof(currentLine), fptr) != NULL) {
        //Step through each character of currentline
        buildToken(currentLine);
        memset(currentLine, '\0', sizeof(currentLine));
    }

    fclose(fptr);


}

void buildToken(char *line) {
    bool flag = true;
    char token[81] = {'\0'};
    int index = 0;

    // Will probably become a while loop to loop until reach stopper
    while(line[index] != '\n') {
        token[index] = line[index];
        printf("%c", token[index]);
        index++;
        switch (line[index]) {
            case 'A' :
                token[index] = line[index];
                break;
            case 'B' :
                token[index] = line[index];
                break;
            case 'C' :
                token[index] = line[index];
                break;
            case 'D' :
                token[index] = line[index];
                break;
            case 'E' :
                token[index] = line[index];
                break;
            case 'F' :
                token[index] = line[index];
                break;
            case 'G' :
                token[index] = line[index];
                break;
            case 'H' :
                token[index] = line[index];
                break;
            case 'I' :
                token[index] = line[index];
                break;
            case 'J' :
                token[index] = line[index];
                break;
            case 'K' :
                token[index] = line[index];
                break;
            case 'L' :
                token[index] = line[index];
                break;
            case 'M' :
                token[index] = line[index];
                break;
            case 'N' :
                token[index] = line[index];
                break;
            case 'O' :
                token[index] = line[index];
                break;
            case 'P' :
                token[index] = line[index];
                break;
            case 'Q' :
                token[index] = line[index];
                break;
            case 'R' :
                token[index] = line[index];
                break;
            case 'S' :
                token[index] = line[index];
                break;
            case 'T' :
                token[index] = line[index];
                break;
            case 'U' :
                token[index] = line[index];
                break;
            case 'V' :
                token[index] = line[index];
                break;
            case 'W' :
                token[index] = line[index];
                break;
            case 'X' :
                token[index] = line[index];
                break;
            case 'Y' :
                token[index] = line[index];
                break;
            case 'Z' :
                token[index] = line[index];
                break;
            case 'a' :
                token[index] = line[index];
                break;
            case 'b' :
                token[index] = line[index];
                break;
            case 'c' :
                token[index] = line[index];
                break;
            case 'd' :
                token[index] = line[index];
                break;
            case 'e' :
                token[index] = line[index];
                break;
            case 'f' :
                token[index] = line[index];
                break;
            case 'g' :
                token[index] = line[index];
                break;
            case 'h' :
                token[index] = line[index];
                break;
            case 'i' :
                token[index] = line[index];
                break;
            case 'j' :
                token[index] = line[index];
                break;
            case 'k' :
                token[index] = line[index];
                break;
            case 'l' :
                token[index] = line[index];
                break;
            case 'm' :
                token[index] = line[index];
                break;
            case 'n' :
                token[index] = line[index];
                break;
            case 'o' :
                token[index] = line[index];
                break;
            case 'p' :
                token[index] = line[index];
                break;
            case 'q' :
                token[index] = line[index];
                break;
            case 'r' :
                token[index] = line[index];
                break;
            case 's' :
                token[index] = line[index];
                break;
            case 't' :
                token[index] = line[index];
                break;
            case 'u' :
                token[index] = line[index];
                break;
            case 'v' :
                token[index] = line[index];
                break;
            case 'w' :
                token[index] = line[index];
                break;
            case 'x' :
                token[index] = line[index];
                break;
            case 'y' :
                token[index] = line[index];
                break;
            case 'z' :
                token[index] = line[index];
                break;  
            case '(' :
                token[index] = line[index];
                break;
            case ')' :
                token[index] = line[index];
                break;
            case '*' :
                token[index] = line[index];
                break;
            case ':' :
                token[index] = line[index];
                break;
            case '=' :
                token[index] = line[index];
                break;
                   
        }
    }

    printf("\n");
    
}



/*
Preprocessor macros for finding line number: 
https://stackoverflow.com/questions/2849832/c-c-line-number/2849850
*/