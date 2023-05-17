import java.util.*;

class LBA31_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");

        String Arr = sobj.nextLine();

        MarvellousX obj = new MarvellousX();

        int iRet = obj.Diff(Arr);

        System.out.println("Difference is: "+iRet);

    }
}

class MarvellousX
{
    public int Diff(String s)
    {
        int iCapCnt =0;
        int iSmallCnt =0;
        int iAns = 0;

        for (int i = 0; i<s.length(); i++ )
        {
            if(( s.charAt(i)>='A') && ( s.charAt(i)<= 'Z'))
            {
                iCapCnt++;
            }
             else if(( s.charAt(i)>='a') && ( s.charAt(i)<= 'z'))
            {
                iSmallCnt++;
            }
            else
            {
                continue;
            }
        }
        iAns = iSmallCnt - iCapCnt;

         return iAns;

    }
   
}