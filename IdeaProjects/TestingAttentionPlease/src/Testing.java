import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionAdapter;


public class Testing {

    private JLabel NazwaStrony;
    private JPanel GlownyPanel;
    private JPanel Kup;
    private JPanel Wystaw;
    private JLabel SprzedajLabel;
    private JLabel KupLabel;
    public Testing() {
        NazwaStrony.setForeground(Color.ORANGE);
        Kup.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseEntered(MouseEvent e) {
                super.mouseEntered(e);
                Kup.setBackground(Color.ORANGE);
                SprzedajLabel.setVisible(false);
                KupLabel.setVisible(true);
                KupLabel.setForeground(Color.red);
            }

            @Override
            public void mouseExited(MouseEvent e) {
                super.mouseExited(e);
                Kup.setBackground(Color.getColor("#0C400F"));
                SprzedajLabel.setVisible(true);
                KupLabel.setVisible(true);
                KupLabel.setForeground(Color.ORANGE);
                SprzedajLabel.setForeground(Color.ORANGE);
            }
        });
        Wystaw.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseEntered(MouseEvent e) {
                super.mouseEntered(e);
                Wystaw.setBackground(Color.ORANGE);
                SprzedajLabel.setVisible(true);
                KupLabel.setVisible(false);
                SprzedajLabel.setForeground(Color.red);
            }

            @Override
            public void mouseExited(MouseEvent e) {
                super.mouseExited(e);
                Wystaw.setBackground(Color.getColor("#0C400F"));
                SprzedajLabel.setVisible(true);
                KupLabel.setVisible(true);
                KupLabel.setForeground(Color.ORANGE);
                SprzedajLabel.setForeground(Color.ORANGE);
            }
        });
    }

    public static void main(String[] args) {
        JFrame ramka = new JFrame("Stronka");
        ramka.setContentPane(new Testing().GlownyPanel);
        ramka.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        ramka.pack();
        ramka.setSize(1280,720);
        ramka.setVisible(true);
    }
}
