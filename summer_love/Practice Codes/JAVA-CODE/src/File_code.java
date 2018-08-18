/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Chanchal-IIITA
 */
import java.io.*;
public class File_code extends Thread {
    @Override
    public void run()
    {
        System.out.println("T1");
        
    }
    
}
class Llol
{
    public static void main(String args[])
    {
        File inFile = new File("/C:/Users/Chanchal-IIITA/Desktop/Input.txt");
        File outFile = new File("/C:/Users/Chanchal-IIITA/Desktop/Output.txt");
        FileReader ins = null;
        FileWriter outs = null;
    
        try
        {
            ins = new FileReader(inFile);
            outs = new FileWriter(outFile);
            int ch;
            while((ch = ins.read()) != -1)
            {
                outs.write(ch);
            }
            
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    
    
    finally
        {
        try{
            ins.close();
            outs.close();
            
        }
        catch(IOException e)
        {
            
        }
    }
    }
    }
