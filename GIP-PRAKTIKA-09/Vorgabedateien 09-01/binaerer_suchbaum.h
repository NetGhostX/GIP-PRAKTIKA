namespace suchbaum
{
       struct BaumKnoten
       {
              int wert;
              BaumKnoten *links;
              BaumKnoten *rechts;
       };
       void einfuegen(BaumKnoten *anker, int wert);
       void ausgeben(BaumKnoten *anker);
       void knoten_ausgaben(BaumKnoten* knoten, unsigned int tiefe);
}