import javax.swing.*;
import java.awt.*;

class Calculator extends JFrame
{
    Calculator()
    {
        JFrame f = new JFrame("My Calculator");
        f.setLayout(new FlowLayout());
        f.setSize(100,200);
        f.add(new TextField(10));
        f.add(new Button("7"));
        f.add(new Button("8"));
        f.add(new Button("9"));
        f.add(new Button("/"));
        f.add(new Button("4"));
        f.add(new Button("5"));
        f.add(new Button("6"));
        f.add(new Button("*"));
        f.add(new Button("1"));
        f.add(new Button("2"));
        f.add(new Button("3"));
        f.add(new Button("-"));
        f.add(new Button("0"));
        f.add(new Button("."));
        f.add(new Button("="));
        f.add(new Button("+"));
        f.setVisible(true);
    }
    
    public static void main(String args[])
    {
        Calculator c = new Calculator();
    }
}