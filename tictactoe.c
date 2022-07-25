#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <time.h>


//Declaramos variables globales para cambiarlas dentro de las funciones implementadas

int contador;
char tablero[9] = {'-','-','-','-','-','-','-','-','-'};
char ficha = '-';
GtkWidget *button_1;
GtkWidget *button_2;
GtkWidget *button_3;
GtkWidget *button_4;
GtkWidget *button_5;
GtkWidget *button_6;
GtkWidget *button_7;
GtkWidget *button_8;
GtkWidget *button_9;
GtkWidget *label_player;
GtkWidget *label_1;
GtkWidget *label_2;
GtkWidget *label_3;
GtkWidget *label_4;
GtkWidget *label_5;
GtkWidget *label_6;
GtkWidget *label_7;
GtkWidget *label_8;
GtkWidget *label_9;

int checkHorizontal(){
    for(int i= 0; i < 3; ++i){
        if (tablero[i*3] == tablero[i*3+1] && 
            tablero[i*3] == tablero[i*3+2] && 
            tablero[i*3+1] == tablero[i*3+2]){
            ficha = tablero[i*3];
            if (ficha == 'X' || ficha == 'O'){
                return 1;
            }
        }
    }
    return 0;
}

int checkVertical(){
    for(int i= 0; i < 3; ++i){
        if (tablero[i] == tablero[i+3] && 
            tablero[i] == tablero[i+6] && 
            tablero[i+3] == tablero[i+6]){
            ficha = tablero[i];
            if (ficha == 'X' || ficha == 'O'){
                return 1;
            }
        }
    }
    return 0;
}

int checkDiagonal(){
        if (tablero[0] == tablero[4] && 
            tablero[0] == tablero[8] && 
            tablero[4] == tablero[8] || 
            tablero[2] == tablero[4] && 
            tablero[2] == tablero[6] && 
            tablero[4] == tablero[6]){
            ficha = tablero[4];
            if (ficha == 'X' || ficha == 'O'){
                return 1;
            }
        }
    return 0;
}

int checkDraw(){
    for(int i= 0; i < 9; ++i){
        if(tablero[i] == '-'){
            return 0;
        }
    }
    return 1;
}


void button_clicked(GtkWidget *widget, gpointer data) {
    //Se le hace casting al label para poder modificarlo
    GtkLabel *label = (GtkLabel*) data;
    GtkLabel *label_ganador = (GtkLabel*) label_player;
    // El boton presionado se deshabilita
    gtk_widget_set_sensitive(widget, FALSE);

    // Le hacemos casting a widget para hacerlo tipo GtkBuildable
    GtkBuildable *button = (GtkBuildable*) widget;
    
    // Conseguimos el id del boton presionado
    const char *nombre;
    nombre = gtk_buildable_get_name(button);
    printf("%s\n", nombre);
    
    char *button_11 = "button_1";
    char *button_22 = "button_2";
    char *button_33 = "button_3";
    char *button_44 = "button_4";
    char *button_55 = "button_5";
    char *button_66 = "button_6";
    char *button_77 = "button_7";
    char *button_88 = "button_8";
    char *button_99 = "button_9";

    printf("%d \n", contador);

    if (strcmp(nombre,button_11) == 0){
        g_print("Button 1 Clicked\n");
        if (contador % 2 == 0){
            tablero[0] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[0] = 'O';
            gtk_label_set_text(label, "O");
        }
    }

    else if (strcmp(nombre,button_22) == 0){
        g_print("Button 2 Clicked\n");
        if (contador % 2 == 0){
            tablero[1] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[1] = 'O';
            gtk_label_set_text(label, "O");
        }
    }

    else if (strcmp(nombre,button_33) == 0){
        g_print("Button 3 Clicked\n");
        if (contador % 2 == 0){
            tablero[2] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[2] = 'O';
            gtk_label_set_text(label, "O");
        }
    }

    else if (strcmp(nombre,button_44) == 0){
        g_print("Button 4 Clicked\n");
        if (contador % 2 == 0){
            tablero[3] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[3] = 'O';
            gtk_label_set_text(label, "O");
        }
    }

    else if (strcmp(nombre,button_55) == 0){
        g_print("Button 5 Clicked\n");
        if (contador % 2 == 0){
            tablero[4] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[4] = 'O';
            gtk_label_set_text(label, "O");
        }
    }

    else if (strcmp(nombre,button_66) == 0){
        g_print("Button 6 Clicked\n");
        if (contador % 2 == 0){
            tablero[5] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[5] = 'O';
            gtk_label_set_text(label, "O");
        }
    }

    else if (strcmp(nombre,button_77) == 0){
        g_print("Button 7 Clicked\n");
        if (contador % 2 == 0){
            tablero[6] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[6] = 'O';
            gtk_label_set_text(label, "O");
        }
    }

    else if (strcmp(nombre,button_88) == 0){
        g_print("Button 8 Clicked\n");
        if (contador % 2 == 0){
            tablero[7] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[7] = 'O';
            gtk_label_set_text(label, "O");
        }
    }

    else if (strcmp(nombre,button_99) == 0){
        g_print("Button 9 Clicked\n");
        if (contador % 2 == 0){
            tablero[8] = 'X';
            gtk_label_set_text(label, "X");

        }
        else{
            tablero[8] = 'O';
            gtk_label_set_text(label, "O");
        }
    }
    // Revisamos si existen ganadores 
    
    int resultadoHor = checkHorizontal();
    int resultadoVer = checkVertical();
    int resultadoDia = checkDiagonal();
    int resultadoDraw = 0;

    //Si no hubiese ganador, la suma deberia dar 0.
    if ((resultadoHor + resultadoVer + resultadoDia) != 0){
        gtk_widget_set_sensitive(button_1, FALSE);
        gtk_widget_set_sensitive(button_2, FALSE);
        gtk_widget_set_sensitive(button_3, FALSE);
        gtk_widget_set_sensitive(button_4, FALSE);
        gtk_widget_set_sensitive(button_5, FALSE);
        gtk_widget_set_sensitive(button_6, FALSE);
        gtk_widget_set_sensitive(button_7, FALSE);
        gtk_widget_set_sensitive(button_8, FALSE);
        gtk_widget_set_sensitive(button_9, FALSE);

        if (ficha == 'X'){
            gtk_label_set_label(label_ganador, "GANADOR ES EL JUGADOR CON : X");
        }
        else{
            gtk_label_set_label(label_ganador, "GANADOR ES EL JUGADOR CON : O");
        }      
    }

    // Si suma es 0, hay que revisar si el tablero esta lleno. 
    else{
        resultadoDraw = checkDraw();
        // Si resultadoDraw == 1, significa que hay un empate.
        if (resultadoDraw == 1){
            gtk_label_set_label(label_ganador, "EL JUEGO FUE UN EMPATE");
        }
    }

    contador++;
}

void reset_clicked(GtkWidget *widget, gpointer data){

    GtkLabel *label_ganador = (GtkLabel*) label_player;

    // Reiniciamos el contador a otro numero aleatorio.
    contador = rand();

    // Habilitamos los botones de nuevo.
    gtk_widget_set_sensitive(button_1, TRUE);
    gtk_widget_set_sensitive(button_2, TRUE);
    gtk_widget_set_sensitive(button_3, TRUE);
    gtk_widget_set_sensitive(button_4, TRUE);
    gtk_widget_set_sensitive(button_5, TRUE);
    gtk_widget_set_sensitive(button_6, TRUE);
    gtk_widget_set_sensitive(button_7, TRUE);
    gtk_widget_set_sensitive(button_8, TRUE);
    gtk_widget_set_sensitive(button_9, TRUE);

    // Dejamos el label del gane a como estaba
    gtk_label_set_label(label_ganador, "RESULTADO DEL JUEGO: PENDIENTE");

    // Dejamos los labels de los botones originales (-)
    gtk_label_set_label((GtkLabel*) label_1, "-");
    gtk_label_set_label((GtkLabel*) label_2, "-");
    gtk_label_set_label((GtkLabel*) label_3, "-");
    gtk_label_set_label((GtkLabel*) label_4, "-");
    gtk_label_set_label((GtkLabel*) label_5, "-");
    gtk_label_set_label((GtkLabel*) label_6, "-");
    gtk_label_set_label((GtkLabel*) label_7, "-");
    gtk_label_set_label((GtkLabel*) label_8, "-");
    gtk_label_set_label((GtkLabel*) label_9, "-");

    // Reseteamos el tablero por uno nuevo
    for(int i = 0; i < 9; i++){
        tablero[i] = '-';
    }
    
}


int main(int argc, char *argv[]){

    srand(time(NULL));
    contador = rand();

    GtkBuilder *builder;
    GtkWidget *window;
    GtkWidget *button_reset;
    
    
    

    gtk_init(&argc, &argv);
    builder = gtk_builder_new_from_file("template.glade");
    window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Asignamos los punteros al id del .glade para los botones y los labels
    button_1 = GTK_WIDGET(gtk_builder_get_object(builder, "button_1"));
    button_2 = GTK_WIDGET(gtk_builder_get_object(builder, "button_2"));
    button_3 = GTK_WIDGET(gtk_builder_get_object(builder, "button_3"));
    button_4 = GTK_WIDGET(gtk_builder_get_object(builder, "button_4"));
    button_5 = GTK_WIDGET(gtk_builder_get_object(builder, "button_5"));
    button_6 = GTK_WIDGET(gtk_builder_get_object(builder, "button_6"));
    button_7 = GTK_WIDGET(gtk_builder_get_object(builder, "button_7"));
    button_8 = GTK_WIDGET(gtk_builder_get_object(builder, "button_8"));
    button_9 = GTK_WIDGET(gtk_builder_get_object(builder, "button_9"));
    button_reset = GTK_WIDGET(gtk_builder_get_object(builder, "button_reset"));

    label_1 = GTK_WIDGET(gtk_builder_get_object(builder, "label_1"));
    label_2 = GTK_WIDGET(gtk_builder_get_object(builder, "label_2"));
    label_3 = GTK_WIDGET(gtk_builder_get_object(builder, "label_3"));
    label_4 = GTK_WIDGET(gtk_builder_get_object(builder, "label_4"));
    label_5 = GTK_WIDGET(gtk_builder_get_object(builder, "label_5"));
    label_6 = GTK_WIDGET(gtk_builder_get_object(builder, "label_6"));
    label_7 = GTK_WIDGET(gtk_builder_get_object(builder, "label_7"));
    label_8 = GTK_WIDGET(gtk_builder_get_object(builder, "label_8"));
    label_9 = GTK_WIDGET(gtk_builder_get_object(builder, "label_9"));
    label_player = GTK_WIDGET(gtk_builder_get_object(builder, "label_player"));

    //Conectamos las senales para que vayan a la funcion 'button_clicked'
    //NO OLVIDAR LOS LABELS QUE INDICAN LAS JUGADAS
    g_signal_connect(button_1, "clicked", G_CALLBACK(button_clicked), label_1);
    g_signal_connect(button_2, "clicked", G_CALLBACK(button_clicked), label_2);
    g_signal_connect(button_3, "clicked", G_CALLBACK(button_clicked), label_3);
    g_signal_connect(button_4, "clicked", G_CALLBACK(button_clicked), label_4);
    g_signal_connect(button_5, "clicked", G_CALLBACK(button_clicked), label_5);
    g_signal_connect(button_6, "clicked", G_CALLBACK(button_clicked), label_6);
    g_signal_connect(button_7, "clicked", G_CALLBACK(button_clicked), label_7);
    g_signal_connect(button_8, "clicked", G_CALLBACK(button_clicked), label_8);
    g_signal_connect(button_9, "clicked", G_CALLBACK(button_clicked), label_9);
    g_signal_connect(button_reset, "clicked", G_CALLBACK(reset_clicked), label_player);

    // Mostramos todo
    gtk_widget_show_all(window);
    gtk_main();
}