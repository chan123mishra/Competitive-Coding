import javax.swing.*;
import java.awt.*;

class ColorSelect
{
    public static void main(String args[])
    {
        JFrame f = new JFrame("ColorSelect");
        f.setSize(200,130);
        f.setLayout(new FlowLayout());
        Choice u =new Choice();
        u.setPreferredSize(new Dimension(150, 20));
        f.add(u);
        u.add("RED");
        u.add("BLUE");
        u.add("WHITE");
        u.add("BLACK");
        f.add(new Checkbox("Background"));
        f.add(new Checkbox("Foreground"));
        f.add(new Button("Ok"));
        f.add(new Button("Cancel"));
        f.setVisible(true);
    }
}