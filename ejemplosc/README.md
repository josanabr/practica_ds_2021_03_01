# Ejemplos varios

* [leercadena.c](leercadena.c) código que muestra como leer una cadena de caracteres de teclado. 

```
gcc -o leercadena leercadena.c
./leercadena
```

## Ejemplos TCP

* Un ejemplo muestra la transferencia básica de una cadena de caracteres de un cliente([client.c](client.c)) a un servidor([server.c](server.c)). Para compilar los programas ejecute el comando `make client_server`. Este comando generará dos archivos `client` y `server`.

* Otro ejemplo muestra la transferencia de archivos de un servidor([server_send_file.c](server_send_file.c)) a un cliente([client_recv_file.c](client_recv_file.c)). Para compilar ejecute el comando `make client_server_file` y esto generará dos archivos `client_recv_file` y `server_send_file`.



