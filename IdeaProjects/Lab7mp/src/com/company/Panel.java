package com.company;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.util.ArrayList;
import javax.swing.JPanel;
import javax.swing.Timer;
public class Panel extends JPanel {
    private ArrayList<Kula> listaKul;
    private int size = 20;
    private Timer timer;
    private final int DELAY = 33;

    //dla 30fps -> 1s/30 = 0,033s
    public Panel() {
        listaKul = new ArrayList<>();
        setBackground(Color.BLACK);
        addMouseListener(new Event());
        timer = new Timer(DELAY, new Event());
        timer.start();
    }

    @Override
    protected
    void paintComponent(Graphics g) {
        super.paintComponent(g);
        for (Kula k : listaKul) {
            g.setColor(k.color);
            g.drawOval(k.x, k.y, k.size, k.size);
        }
        g.setColor(Color.YELLOW);
        g.drawString(Integer.toString(listaKul.size()), 40, 40);
    }
    private class Kula {
        public int x, y, size, xspeed, yspeed;
        public Color color;
        private final int MAX_SPEED = 5;

        public Kula(int x, int y, int size) {
            this.x = x;
            this.y = y;
            this.size = size;
            color = new Color((float) Math.random(), (float) Math.random(), (float) Math.random());
            xspeed = (int) (Math.random() * MAX_SPEED * 2 - MAX_SPEED);
            yspeed = (int) (Math.random() * MAX_SPEED * 2 - MAX_SPEED);
            while(xspeed==0 || yspeed==0) {
                xspeed = (int) (Math.random() * MAX_SPEED * 2 - MAX_SPEED);
                yspeed = (int) (Math.random() * MAX_SPEED * 2 - MAX_SPEED);
            }
        }

        public void update() {
            x += xspeed;
            y += yspeed;
            if (x <= 0 || x >= getWidth()) {
                xspeed = -xspeed;
            }
            if (y <= 0 || y >= getHeight()) {
                yspeed = -yspeed;
            }
        }
        public void zderzenie(Kula k2) {
            //wektor normalny do powierzchni kuli
            Wektor normalny = new Wektor(x, y, k2.x, k2.y);
            normalny = normalny.normalny();
            //wektor styczny do powierzchni kuli
            Wektor styczny = normalny.prostopadly();

            //prędkości przed zderzeniem
            Wektor v1 = new Wektor(xspeed, yspeed);
            Wektor v2 = new Wektor(k2.xspeed, k2.yspeed);

            //rzut prędkości na wektor normalny (składowa prędkości równoległa do normalnej)
            double v1n = normalny.iloczynSkalarny(v1);
            double v2n = normalny.iloczynSkalarny(v2);

            //zderzenie sprężyste wzdłuż normalnej
            //składowe prędkości po zderzeniu równodległe do normalnej
            double v1n2 = (v1n * (size - k2.size) + 2 * k2.size * v2n) / (size + k2.size);
            double v2n2 = (v2n * (k2.size - size) + 2 * size * v1n) / (size + k2.size);

            //składowa normalna prędkości
            Wektor v12n = normalny.mnozPrzezSkalar(v1n2);
            Wektor v22n = normalny.mnozPrzezSkalar(v2n2);

            //rzut prędkości na wektor styczny (składowa prędkości równoległa do stycznej)
            //ta składowa się nie zmienia
            double v1s = styczny.iloczynSkalarny(v1);
            double v2s = styczny.iloczynSkalarny(v2);

            //składowa styczna prędkości
            Wektor v12s = styczny.mnozPrzezSkalar(v1s);
            Wektor v22s = styczny.mnozPrzezSkalar(v2s);

            //nowe prędkości
            Wektor v12 = v12n.dodaj(v12s);
            Wektor v22 = v22n.dodaj(v22s);

            //konwersja na prędkości całkowite - ceil i floor aby uniknąć zaokrągleń do 0
            xspeed = (int) (v12.x > 0 ? Math.ceil(v12.x) : Math.floor(v12.x));
            yspeed = (int) (v12.y > 0 ? Math.ceil(v12.y) : Math.floor(v12.y));
            k2.xspeed = (int) (v22.x > 0 ? Math.ceil(v22.x) : Math.floor(v22.x));
            k2.yspeed = (int) (v22.y > 0 ? Math.ceil(v22.y) : Math.floor(v22.y));
        }
    }
    private class Event implements MouseListener, ActionListener{
        @Override
        public void mouseClicked(MouseEvent e) {
        }@Override
        public void mousePressed(MouseEvent e) {
            listaKul.add(new Kula(e.getX(), e.getY(), size));
            repaint();
        }
        @Override
        public void mouseReleased(MouseEvent e) {
        }
        @Override
        public void mouseEntered(MouseEvent e) {
        }
        @Override
        public void mouseExited(MouseEvent e) {
        }@Override
        public void actionPerformed(ActionEvent e) {
            for (Kula k : listaKul) {k.update();}repaint();
        }
    }
    private class Wektor {
        public double x;
        public double y;

        public Wektor(double x, double y) {
            this.x = x;
            this.y = y;
        }

        public Wektor(double xp, double yp, double xk, double yk) {
            x = xk - xp;
            y = yk - yp;
        }

        public Wektor normalny() {
            double l = Math.sqrt(x * x + y * y);
            return new Wektor(x / l, y / l);
        }

        public Wektor prostopadly() {
            return new Wektor(-y, x);
        }

        public double iloczynSkalarny(Wektor w2) {
            return x * w2.x + y * w2.y;
        }

        public Wektor mnozPrzezSkalar(double s) {
            return new Wektor(s * x, s * y);
        }

        public Wektor dodaj(Wektor w2) {
            return new Wektor(x + w2.x, y + w2.y);
        }
    }

}
