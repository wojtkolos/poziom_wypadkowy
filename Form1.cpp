#include "pch.h"
#include "Form1.h"

/*
# Program SourLine
NL = sprintf ( '%s%s' , char (13) , char (10 ) ) ;
PS = 'Prosz� poda�  ' ;
formul = { 'Wl * atan ( l / ( 2 * r ) ) / ( 2 * pi * r )' ; 'Wl * l / ( 4 * pi * r * sqrt ( l^2 / 4 + r^2 ) )' } ;
# * ----------------------------------------------------------------------------------------------------------------------------------------------------
#                                                    Interface u�ytkownika programu
# * -----------------------------------------------------------------------------------------------------------------------------------------------------
         printf ( '%s%s' , PS , NL ) ;
         W = input ( ' ca�kowit� moc �r�d�a ( zestawu �r�de� )   ' ) ;
         N = input ( ' liczb� �r�de� elementarnych    ' ) ;
         l = input ( ' d�ugo�� �r�d�a liniowego    ' ) ;
         r = input ( ' odleg�o�� ( np. punktu pomiarowego ) od �r�d�a     ' ) ;
         printf ( '%s%s' , 'Dzi�kuj� ' , NL ) ;
         Wl = W / l ;     #   liniowa g�sto�� mocy
         We = W / N  ;    #   moc �r�d�a elementarnego
         Dl = l / N ;   #  odst�p pomi�dzy �r�d�ami elementarnymi
         do_ilu = fix ( N / 2 ) ;
         choix = menu ( 'Prosz� wybrac spos�b sumowania przyczynk�w nat�enia  ' , ' 1 - bez uwzgl�dniania wektorowego charakteru nat�enia ' , ' 2 - z uwzgl�dnieniem wektorowego charakteru nat�enia' ) ;
# * -------------------------------------------------------------------------------------------------------------------------------------------------------------------
#                                             Obliczanie  nat�enia na  zasadzie  `g�stego`  sumowania
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
#                               Obliczanie nat�enia poprzez wykorzystanie gotowego wzoru powsta�ego we wyniku ca�kowania
#  * ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                             oro = char ( formul ( choix ) ) ;
                             I2 = eval ( oro ) ;
                             printf ( '%s%f%s' , 'Nat�enie sumowane = ' , I1 , NL ) ;
                             printf ( '%s%f%s' , 'Nat�enie ca�kowane = ' , I2 , NL ) ;
                             if ( r < 0.1 * l )
                             I3 = Wl / ( 2 * pi * r ) ;
                             printf ( '%s%f%s' , 'Nat�enie `uproszczone` = ' , I3 , NL ) ;
                             end  #  if ( r < 0.1 * l )
                             if ( r > 10 * l )
                             I4 = W / ( 4 * pi * r^2 ) ;
                             printf ( '%s%f%s' , 'Nat�enie `uproszczone` = ' , I4 , NL ) ;
                             end  #  if ( r > 10 * l )
*/
double fun1() {
    ///ca�kowit� moc �r�d�a(zestawu �r�de�)
    double W = 1; //boxW;

    //liczba �r�de� elementarnych
    double N = 1;

    //d�ugo�� �r�d�a liniowego
    double l = 1;

    //odleg�o��(np.punktu pomiarowego) od �r�d�a
    double r = 1;


    return r;
}