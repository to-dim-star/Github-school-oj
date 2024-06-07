#include <stdio.h>
#include <string.h>

void copySubstring(const char* input, int i, int j, char* output) {
    // 检查输入范围是否合法
    if (i < 0 || j >= strlen(input) || i > j) {
        strcpy(output, "");
        return;
    }

    // 提取子串
    strncpy(output, input + i, j - i + 1);
    output[j - i + 1] = '\0';
}

int main() {
    char input[100];
    int i, j;
    char output[100];
    while (fgets(input,sizeof(input),stdin)) {
        // 去除输入字符末尾的换行符
        input[strcspn(input, "\n")] = '\0';

        // 读取要复制的范围
        scanf("%d %d", &i ,&j);
        
         // 清除输入缓冲区中的换行符，以便下一次输入
         while (getchar() != '\n');

         copySubstring(input,i,j,output);

          printf("%s\n",output);
     }

     return 0;
 }
