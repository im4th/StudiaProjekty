#ifndef TDATA_H
#define TDATA_H

class Tdata
{
    public:
        Tdata();
        Tdata(int dzien, int miesiac, int rok):d(dzien), m(miesiac), r(rok){};
        void wczytaj();
        void wyswietl();
        int getR();
        virtual ~Tdata();

    protected:

    private:
        int d, m, r;
};

#endif // TDATA_H
