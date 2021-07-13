#ifndef Koren_4_stepeni_H
#define Koren_4_stepeni_H
double VichWithDiffff(double BaseChislo, int Degree) {
    int DegreeDigit = 0;
    int tmpDigit = BaseChislo;
    for (int i = 0; tmpDigit != 0; i++) {
        tmpDigit /= Degree;
        DegreeDigit++;
    }
    int x0 = pow(DegreeDigit, Degree);
    int xRaise = BaseChislo - x0;
    double DegreeObratno = (double)1 / Degree;
    double DegreePostDiff = DegreeObratno - (double)1;
    double x0postdiff = (double)pow(x0, DegreePostDiff);
    double Proizvod = x0postdiff / Degree;
    double dfx0 = (double)Proizvod * (double)xRaise;
    double Diff = (double)DegreeDigit + (double)dfx0;
    return Diff;
}

#endif