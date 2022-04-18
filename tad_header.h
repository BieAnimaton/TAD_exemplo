#ifndef TAD_HEADER_H_INCLUDED
#define TAD_HEADER_H_INCLUDED

typedef struct data {
    int dia;
    int mes;
    int ano;
} Data;

int incrementa_tempo (Data data, Data *data_alterada) {
    (*data_alterada).dia = data.dia + 10;
    (*data_alterada).mes = data.mes + 5;
    (*data_alterada).ano = data.ano + 22;
}

#endif // TAD_HEADER_H_INCLUDED
