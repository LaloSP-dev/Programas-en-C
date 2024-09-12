#ifndef INVENTARIO_VENTAS
#define INVENTARIO_VENTAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define NUM_PRODUCTOS 15

typedef char cadena[256];

typedef struct
{
    cadena nameProducto;
    float compra;
    float venta;
    int stock;
    float valorTotal;
} InfoProducto;

typedef struct
{
    InfoProducto infoProducto[NUM_PRODUCTOS];
    int totalProductos;
    float ventasDia;
} Inventario;

int menu();
void agregarProducto(InfoProducto *infoProducto, cadena nameProducto, float compra, float venta, int stock);
void mostrarInventarioActualizado(Inventario inventario);
void desplegarRegistro(InfoProducto infoProducto);
int menuProductos(Inventario inventario);
void realizarVenta(Inventario *inventario);
void agregarStockProducto(Inventario *inventario);
void calcularVentasDia(Inventario inventario);

void inicializaInventario(Inventario *inventario)
{
    agregarProducto(&inventario->infoProducto[inventario->totalProductos], "Televisor", 300.50, 450.00, 10);
    (inventario->totalProductos)++;
    agregarProducto(&inventario->infoProducto[inventario->totalProductos], "Laptop", 800.00, 1200.00, 5);
    (inventario->totalProductos)++;
    agregarProducto(&inventario->infoProducto[inventario->totalProductos], "Smartphone", 500.50, 750.00, 20);
    (inventario->totalProductos)++;
    agregarProducto(&inventario->infoProducto[inventario->totalProductos], "Tablet", 200.00, 350.00, 15);
    (inventario->totalProductos)++;
    agregarProducto(&inventario->infoProducto[inventario->totalProductos], "Camara", 250.50, 400.00, 8);
    (inventario->totalProductos)++;
}

#endif