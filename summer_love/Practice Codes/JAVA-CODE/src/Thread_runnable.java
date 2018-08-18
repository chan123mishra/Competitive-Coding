/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Chanchal-IIITA
 */
public class Thread_runnable implements Runnable {
    String name;
    public Thread_runnable(String name)
    {
        this.name = name;
        
    }
    public void run()
    {
        System.out.printf("%s is working thread", name);
    }
}

class Run
{
    public static void main(String args[])
    {
        Thread_runnable t = new Thread_runnable("Thread_1");
        Thread o = new Thread(t);
        o.start();
    }
}
