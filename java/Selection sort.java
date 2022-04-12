public class Test
{
    public static void main(String[] args)
    {
    	int a[] = {10, 53, 35, 100, 87}
        int i = 0;
        int temp = 0;
        do
        {
            int j = i;
            do
            {
            	if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                j++;
            }
            while(j < 5);
            i++;
        }
        while(i < 4);
        for (int b = 0; b < 5; b++)
        {
            System.out.printf(a[b] + "\t");
        }
    }
}
