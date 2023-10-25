import java.util.*;
public class matrixchainmul {
    public static void main(String[] args)
    {
        int i,j,k,l,q;
        Scanner sc= new Scanner(System.in);

        System.out.print("Enter the total number of matrices: ");
		int n=sc.nextInt();

        int[] p =new int[n+1];
        int[][] m=new int[n+1][n+1];

        for (i=0;i<n+1;i++)
        {
            System.out.print("Enter the value of p");
            System.out.print(i);
            System.out.print(": ");
            p[i]=sc.nextInt();
        }
        for (i=1;i<=n;i++)
    
        {
            for(j=i;j<=n;j++)
            {
                if (i==j)
                    m[i][i]=0;
                else
                    m[i][j]= Integer.MAX_VALUE;
            }
        }
        for (l=1;l<n;l++)
        {
            for(i=1;i<=n-l;i++)
            {
                j=i+l;
                for (k=i;k<j;k++)
                {
                    q= m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
                    if (q<m[i][j])
                        m[i][j]=q;
                }
            }

        }
        System.out.print("The minimum number of multiplication required is: ");
        System.out.println(m[1][n]);
    }
    
}
