import javax.swing.*;
import javax.swing.text.NumberFormatter;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.NumberFormat;

public class Kalkulator {
    private JButton button1;
    private Container glownyPanel;
    private JFormattedTextField poleTekstowe;

    public Kalkulator() {
        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent actionEvent) {

            }
        });
    }
    public static void main(String[] args) {
        JFrame ramka = new JFrame("Kalkulator");
        ramka.setContentPane(new Kalkulator().glownyPanel);
        ramka.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        ramka.pack();
        ramka.setVisible(true);
    }

    private void createUIComponents() {
        // TODO: place custom component creation code here
        NumberFormat numberFormat = NumberFormat.getNumberInstance();
        numberFormat.setGroupingUsed(false);
        NumberFormatter numberFormatter = new NumberFormatter(numberFormat);

        JFormattedTextField aFormattedTextField = new JFormattedTextField(numberFormatter);
        JFormattedTextField bFormattedTextField = new JFormattedTextField(numberFormatter);
    }

}
