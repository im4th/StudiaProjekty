#include <iostream>
#include "Tinstrument.h"
#include "Ttrabka.h"
#include "Tskrzypce.h"
#include "Tfigura.h"
#include "Tkolo.h"
#include "Tkwadrat.h"
#include "Tprostokat.h"

using namespace std;

int main()
{
    Tinstrument instrument1;
    instrument1.muzyka(4);

    Ttrabka trabka1;
    trabka1.muzyka(10);

    Tskrzypce skrzypce1("bajojajo");
    skrzypce1.dzwiek();
    skrzypce1.muzyka(10);

    /*Ttrabka*wsk;
    wsk = new Ttrabka;
    cout << wsk -> dzwiek();
    delete wsk;*/

    /*Tfigura figura1;
    figura1.wyswietl();

    Tkolo kolo1;
    kolo1.wyswietl();

    Tprostokat prostokat1;
    prostokat1.wyswietl();

    Tkwadrat kwadrat1;
    kwadrat1.wyswietl();*/
    return 0;
}
