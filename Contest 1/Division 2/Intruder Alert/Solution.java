import java.util.Scanner;

class Solution
{
    static int findElement(int list[], int n)
    {
        int ans=list[0];
        for(int i=1; i<2*n+1; i++)
        {
            ans = ans^list[i];
        }
        return ans;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        for(int t=0; t<test; t++)
        {
            int n = sc.nextInt();
            int arr[] = new int[2*n+1];
            for(int i=0; i<2*n+1; i++)
            {
                arr[i] = sc.nextInt();
            }
            int ans = findElement(arr,n);
            System.out.println(ans);
        }
        sc.close();
    }
}
