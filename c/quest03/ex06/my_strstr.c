#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2)
{
    int i =0;
     while (param_1[i] != 0) //letter_s1 in s1
     {
         if (param_2[0] == 0) {
             return param_1;
         }
         int a = 0;
         while (param_2[a] != 0) //letter_s2 in s2
          {
              if (param_1[i + a] != param_2[a]) //letter_s1 != letter_s2
              {
                  break;
              }
              if (a == strlen(param_2)-1) //reach end of s2 
              {
                  return &param_1[i];
                  }    
            a++;
          }
          i++;
     }
      return NULL; 
}



// int main ()
// {
//   char str[] ="This is a simple string";
//   char * pch;
//   pch = strstr (str,"simple");
//   if (pch != NULL)
//     strncpy (pch,"sample",6);
//   puts (str);
//   return 0;


// int main (void)
// {    
//    // Массив со строкой для поиска
//    char str1 [11]=”0123456789”;
//    // Набор символов, которые должны входить в искомый сегмент
//    char str2 [10]=”345”;
//    // Переменная, в которую будет занесен адрес первой найденной строки
//    char *istr;
//    //Поиск строки
//    istr = strstr (str1,str2);
//    //Вывод результата поиска на консоль
//    if ( istr == NULL)
//       printf (“Строка не найдена\n“);
//    else
//       printf (“Искомая строка начинается с символа %d\n“,istr-str1+1);
//    return 0;
// }