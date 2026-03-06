Cuando imprimimos un arreglo: printf("\nDireccion de temp[24]: %d",temp); 
imprime la dirección de memoria porque al colocarle la [24] temp se convierte en un apuntador.

Para imprimir una posción del arreglo, se toma a partir del 0, es decir, usando el ejemplo de temp[24], para imprimir la última posición es:
printf("\nDireccion de la ultima posicion de temp[24]: %d", &temp[23]);

Los valores de la dirección van cambiando de 4 en 4 debido a que el tipo de dato float e int tienen un espacio de memoria de 4 bytes
