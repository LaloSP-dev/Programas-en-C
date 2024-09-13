/**
 * Programa: Gestión de inventario y ventas
 * Autor: Eduardo Sanchez
 * Version: 1.0.0
 */

#include "ventas.h"

int main(int argc, char const *argv[])
{
    Inventario inventario;
    int optionMenu;

    inventario.totalProductos = 0;
    inventario.ventasDia = 0.00;

    // Se inicializa los productos
    inicializaInventario(&inventario);

    do
    {
        optionMenu = menu();

        switch (optionMenu)
        {
        case 1:
            mostrarInventarioActualizado(inventario);
            break;

        case 2:
            realizarVenta(&inventario);
            break;

        case 3:
            agregarStockProducto(&inventario);
            break;

        case 4:
            calcularVentasDia(inventario);
            break;

        case 5:
            printf("\n¡Hasta luego!\n\n");
            break;

        default:
            printf("\n La opción %d no es valida\n", optionMenu);
            break;
        }
    } while (optionMenu != 5);

    return 0;
}

int menu()
{
    int option;

    printf("\nMenú de opciones:\n");
    printf("1. Mostrar inventario actualizado\n");
    printf("2. Realizar venta\n");
    printf("3. Agregar stock a un producto\n");
    printf("4. Calcular total de ventas al día\n");
    printf("5. Salir\n");
    printf("\nIngrese su opción: ");
    scanf("%d", &option);

    return option;
}

void agregarProducto(InfoProducto *infoProducto, cadena nameProducto, float compra, float venta, int stock)
{
    strcpy(infoProducto->nameProducto, nameProducto);
    infoProducto->compra = compra;
    infoProducto->venta = venta;
    infoProducto->stock = stock;
    infoProducto->valorTotal = venta * stock;
}

void mostrarInventarioActualizado(Inventario inventario)
{
    printf("\n---------- Inventario Actualizado ----------\n\n");
    printf("%-15s %-15s %-20s %-20s\n", "PRODUCTO", "PRECIO VENTA", "STOCK DISPONIBLE", "VALOR TOTAL EN INVENTARIO");

    for (int i = 0; i < inventario.totalProductos; i++)
        desplegarRegistro(inventario.infoProducto[i]);
}

void desplegarRegistro(InfoProducto infoProducto)
{
    printf("%-15s %-15.2f %-20d %-20.2f\n", infoProducto.nameProducto, infoProducto.venta, infoProducto.stock, infoProducto.valorTotal);
}

void realizarVenta(Inventario *inventario)
{
    int optionMenuProducto, numItems;
    float montoTotal;
    bool flagStock = false;

    printf("\n---------- Ventas ----------\n");
    optionMenuProducto = menuProductos(*inventario);

    // Verificar si hay stock del producto
    if (inventario->infoProducto[optionMenuProducto - 1].stock > 0)
    {
        while (!flagStock) // Repite hasta que el número de stock sea correcto
        {
            printf("\nIngrese la cantidad de unidades a vender: ");
            scanf("%d", &numItems);

            // Se verifica si hay stock del producto
            if (numItems <= inventario->infoProducto[optionMenuProducto - 1].stock > 0)
            {
                printf("\nVenta realizada exitosamente\n");

                // Se calcula el monto total de la compra
                montoTotal = inventario->infoProducto[optionMenuProducto - 1].venta * numItems;
                printf("Monto total: %.2f\n", montoTotal);
                inventario->ventasDia += montoTotal;

                // Se actualiza el stock del producto seleccionado
                inventario->infoProducto[optionMenuProducto - 1].stock -= numItems;

                // Se cambia bandera a true para salir del bucle
                flagStock = true;
            }
            else
            {
                printf("\nLa venta no pudo realizarse, stock insuficiente\nTotal de productos disponibles: %d\n", inventario->infoProducto[optionMenuProducto - 1].stock);

                // Esperar a que el usuario presione 'Enter'
                printf("\nPresione 'Enter' para continuar...");
                getchar(); // Consumir el salto de línea previo
                getchar(); // Esperar a que el usuario presione 'Enter'

                // Limpiar las últimas 7 líneas de la consola
                for (int i = 0; i < 7; i++)
                    printf("\033[A\033[2K"); // Sube una línea y la limpia
            }
        }
    }
    else
        printf("\nNo hay artículos disponibles\n");
}

int menuProductos(Inventario inventario)
{
    int option;

    printf("\nLista de Productos.\n");
    for (int i = 0; i < inventario.totalProductos; i++)
        printf("%d. %s\n", i + 1, inventario.infoProducto[i].nameProducto);

    printf("\nSeleccione el producto a vender: ");
    scanf("%d", &option);

    return option;
}

void agregarStockProducto(Inventario *inventario)
{
    int optionMenuProducto, numItems;

    printf("\n---------- Agregar stock a un producto ----------\n");
    optionMenuProducto = menuProductos(*inventario);

    printf("\nIngrese la cantidad de unidades a agregar: ");
    scanf("%d", &numItems);

    inventario->infoProducto[optionMenuProducto - 1].stock += numItems;

    printf("\nStock actualizado. Nuevo stock de %s: %d\n", inventario->infoProducto[optionMenuProducto - 1].nameProducto, inventario->infoProducto[optionMenuProducto - 1].stock);
}

void calcularVentasDia(Inventario inventario)
{
    printf("\n---------- Ventas del dia ----------\n");
    printf("\nTotal de ventas del dia: %.2f\n", inventario.ventasDia);
}