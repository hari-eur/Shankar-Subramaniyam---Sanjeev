#include <stdio.h>
int main() {
    int m,n,o,i,j;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
    printf("Enter element to be replaced:");
    scanf("%d",&o);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==o && i!=0){
                arr[i][j]=arr[i-1][j];
            }
        }
    }
    printf("After changing:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Output:


Enter number of rows:5
Enter number of columns:5
Enter element to be replaced:7
1
2
7
7
5
6
7
7
4
1
2
3
5
6
7
1
7
6
3
9
3
9
2
1
5
1	2	7	7	5	
6	7	7	4	1	
2	3	5	6	7	
1	7	6	3	9	
3	9	2	1	5	
After changing:
1	2	7	7	5	
6	2	7	4	1	
2	3	5	6	1	
1	3	6	3	9	
3	9	2	1	5	


Enter number of rows:3
Enter number of columns:3
Enter element to be replaced:8
1
2
3
8
5
6
7
8
9
1	2	3	
8	5	6	
7	8	9	
After changing:
1	2	3	
1	5	6	
7	5	9	

