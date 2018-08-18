class thread_prac extends Thread
{
    @Override
    public void run()
    {
        for(int i = 1 ; i < 4; i++)
        {
              
        System.out.println("Hey Check");
    }
        System.out.println("OUT OF THREAD 1");
    }
}
class B extends Thread
{
    @Override
    public void run()
    {
       /* try{
        sleep(1000);
        }
        catch(Exception e)
        {
            System.out.println("Error LOLWA");
        }*/
        
        System.out.println("Hey i m in secnd thread");
    
}
}
 class Threadcheck
{
    public static void main(String args[])
    {
        new thread_prac().start();
        new B().start();
       
    }
}