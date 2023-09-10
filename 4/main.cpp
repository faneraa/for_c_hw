#include <stdio.h>
#include "limits.h"
#include "string"
using namespace std;

int main() {
    int n;
    scanf("%i", &n);
    int max = INT_MIN;
    int max_nech = INT_MIN;
    int min = INT_MAX;
    int min_ch = INT_MAX;
    int count_ch = 0;
    int count_nech = 0;
    string f = "None";
    int count_max = 0;
    int prog = 0;
    int flag = 0;
    int a_pr = 0;

    for (int i = 0; i < n; ++i){
        int a;
        scanf("%i", &a);

        if (a == max)
            count_max += 1;
        if (a > max) {
            max = a;
            count_max = 1;
        }
        if (a < min)
            min = a;
        if ((a > max_nech) && (a % 2 == 1)){
            max_nech = a;
            count_nech += 1;
        }
        if ((a < min_ch) && (a % 2 == 0)){
            min_ch = a;
            count_ch += 1;
        }

        if (i == 0)
            prog = 0;

        else{
            if (a_pr < a){
                prog += 1;
                flag = 1;
            }
            if (a_pr > a){
                prog -= 1;
                flag = 1;
            }
        }

        a_pr = a;
    }
    printf("Min = %i; Max = %i\n", min, max);

    if ((count_nech == 0) && (count_ch != 0))
        printf("Min even = %i; Max odd = %s\n", min_ch, f.c_str());
    if ((count_nech != 0) && (count_ch == 0))
        printf("Min even = %s; Max odd = %i\n", f.c_str(), max_nech);
    if ((count_nech != 0) && (count_ch != 0))
        printf("Min even = %i; Max odd = %i\n", min_ch, max_nech);

    printf("Max = %i; count max = %i\n", max, count_max);

    if (prog == n - 1)
        printf("Increasing");
    else{
        if (prog == (-1) * (n - 1))
            printf("Decreasing");
        else{
            if ((prog == 0) && (flag == 0))
                printf("Equal");
            else
                printf("None");
        }
    }

    return 0;
}
