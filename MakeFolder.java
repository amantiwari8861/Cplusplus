import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;

public class MakeFolder 
{
    public static void main(String[] args) throws IOException 
    {
        BufferedReader br=new BufferedReader(new FileReader("C++Content.txt"));
        String s;
        int i=1;
        while ((s=br.readLine()) != null) 
        {
            if (i<10) 
            {
                System.out.println(String.format("0%d.%s",i++,s));
                // Process p=Runtime.getRuntime().exec("cmd.exe "+"/c "+"mkdir "+s);
                // new File(String.format("0%d.%s",i++,s)).mkdir();
            }
            else
            {
                System.out.println(String.format("%d.%s",i++,s));
                // new File(String.format("%d.%s",i++,s)).mkdir();
            }
        }
        br.close();

    }
}