/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Chanchal-IIITA
 */
import java.util.*;
public class OS_test extends Thread {
    double luck = 0;
    double mood = 1;
    static double effort;
    double [] achieve = new double [10000];
    double score;
    @Override
    public synchronized void run()
    {
        mood = mood * effort;
        luck = luck + effort;
        score = mood * luck * luck;
}
    Random r = new Random();
    public void good()
    {
       mood = r.nextDouble();
    }
}