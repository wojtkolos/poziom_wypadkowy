#include "pch.h"
#include "Form1.h"

/*
# Program SourLine
NL = sprintf ( '%s%s' , char (13) , char (10 ) ) ;
PS = 'Proszê podaæ  ' ;
formul = { 'Wl * atan ( l / ( 2 * r ) ) / ( 2 * pi * r )' ; 'Wl * l / ( 4 * pi * r * sqrt ( l^2 / 4 + r^2 ) )' } ;
# * ----------------------------------------------------------------------------------------------------------------------------------------------------
#                                                    Interface u¿ytkownika programu
# * -----------------------------------------------------------------------------------------------------------------------------------------------------
         printf ( '%s%s' , PS , NL ) ;
         W = input ( ' ca³kowit¹ moc Ÿród³a ( zestawu Ÿróde³ )   ' ) ;
         N = input ( ' liczbê Ÿróde³ elementarnych    ' ) ;
         l = input ( ' d³ugoœæ Ÿród³a liniowego    ' ) ;
         r = input ( ' odleg³oœæ ( np. punktu pomiarowego ) od Ÿród³a     ' ) ;
         printf ( '%s%s' , 'Dziêkujê ' , NL ) ;
         Wl = W / l ;     #   liniowa gêstoœæ mocy
         We = W / N  ;    #   moc Ÿród³a elementarnego
         Dl = l / N ;   #  odstêp pomiêdzy Ÿród³ami elementarnymi
         do_ilu = fix ( N / 2 ) ;
         choix = menu ( 'Proszê wybrac sposób sumowania przyczynków natê¿enia  ' , ' 1 - bez uwzglêdniania wektorowego charakteru natê¿enia ' , ' 2 - z uwzglêdnieniem wektorowego charakteru natê¿enia' ) ;
# * -------------------------------------------------------------------------------------------------------------------------------------------------------------------
#                                             Obliczanie  natê¿enia na  zasadzie  `gêstego`  sumowania
# * -------------------------------------------------------------------------------------------------------------------------------------------------------------------
                        warto = zeros ( do_ilu , 1 ) ;
                        for ky = 1 : do_ilu
                        switch choix
                        case 1
                        warto ( ky ) = We / ( 2 * pi *  ( r^2 + ( ky * Dl )^2 ) ) ;
                        case 2
                        warto ( ky ) = We / ( 2 * pi *  ( r^2 + ( ky * Dl )^2 * sqrt ( 1 + ( ky * Dl / r) ^2 ) ) )  ;
                        end  #  switch choix
                        end  #  for ky = 1 : do_ilu
                        I1 = sum ( warto ) ;
#  * --------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#                               Obliczanie natê¿enia poprzez wykorzystanie gotowego wzoru powsta³ego we wyniku ca³kowania
#  * ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                             oro = char ( formul ( choix ) ) ;
                             I2 = eval ( oro ) ;
                             printf ( '%s%f%s' , 'Natê¿enie sumowane = ' , I1 , NL ) ;
                             printf ( '%s%f%s' , 'Natê¿enie ca³kowane = ' , I2 , NL ) ;
                             if ( r < 0.1 * l )
                             I3 = Wl / ( 2 * pi * r ) ;
                             printf ( '%s%f%s' , 'Natê¿enie `uproszczone` = ' , I3 , NL ) ;
                             end  #  if ( r < 0.1 * l )
                             if ( r > 10 * l )
                             I4 = W / ( 4 * pi * r^2 ) ;
                             printf ( '%s%f%s' , 'Natê¿enie `uproszczone` = ' , I4 , NL ) ;
                             end  #  if ( r > 10 * l )
*/
double fun1() {
    ///ca³kowit¹ moc Ÿród³a(zestawu Ÿróde³)
    double W = 1; //boxW;

    //liczba Ÿróde³ elementarnych
    double N = 1;

    //d³ugoœæ Ÿród³a liniowego
    double l = 1;

    //odleg³oœæ(np.punktu pomiarowego) od Ÿród³a
    double r = 1;


    return r;
}