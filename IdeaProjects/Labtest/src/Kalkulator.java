import javax.swing.*;
import javax.swing.text.NumberFormatter;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.NumberFormat;

public class Kalkulator extends Component {
    private JButton button1;
    private JFormattedTextField aFormattedTextField;
    private JPanel glownyPanel;
    private JButton dzielenie;
    private JButton button3;
    private JButton dodawanie;
    private JButton button5;
    private JFormattedTextField bformattedTextField;
    private JFormattedTextField Wynik;
    private JFormattedTextField Blad;

    public Kalkulator() {
        dzielenie.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent actionEvent) {
                try {
                    float a = Integer.parseInt(aFormattedTextField.getText());
                    float b = Integer.parseInt(bformattedTextField.getText());
                    int d = Integer.parseInt(bformattedTextField.getText());
                    float c = 1/d;
                    c = a/b;
                    Wynik.setText(Float.toString(c));
                }
                catch(NullPointerException e){
                    JOptionPane.showMessageDialog(Kalkulator.this, e, "Błąd", JOptionPane.ERROR_MESSAGE);
                }
                catch (NumberFormatException e){
                    JOptionPane.showMessageDialog(Kalkulator.this, e, "Błąd", JOptionPane.ERROR_MESSAGE);
                }
                catch(RuntimeException e) {
                    JOptionPane.showMessageDialog(Kalkulator.this, e, "Błąd", JOptionPane.ERROR_MESSAGE);
                }
                //catch(ArithmeticException e)
            }
        });
        dodawanie.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent actionEvent) {
                try {
                    float a = Integer.parseInt(aFormattedTextField.getText()) + Integer.parseInt(bformattedTextField.getText());
                    Wynik.setText(Float.toString(a));
                }
                catch(NullPointerException e){
                    JOptionPane.showMessageDialog(Kalkulator.this, e, "Błąd", JOptionPane.ERROR);
                }
                catch (NumberFormatException e){
                    JOptionPane.showMessageDialog(Kalkulator.this, e, "Błąd", JOptionPane.ERROR);
                }
                catch(RuntimeException e) {
                    JOptionPane.showMessageDialog(Kalkulator.this, e, "Błąd", JOptionPane.ERROR);
                }
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
