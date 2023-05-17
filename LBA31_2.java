import java.util.*;

class LBA31_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String Arr = sobj.nextLine();

        MarvellousX obj = new MarvellousX();

        int iRet = obj.SmallCount(Arr);

        System.out.println("Number of small letters are:"+iRet);

    }
}

class MarvellousX
{
    public int SmallCount (String s)
    {
        int iCnt =0;
        for(int i =0; i< s.length(); i++)
        {
            if((s.charAt(i)>= 'a') && (s.charAt(i)<='z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
