client_server: client server

client: tcp.o
	gcc -o client client.c tcp.o

client_server_file: client_file server_file

client_file: tcp.o
	gcc -o client_recv_file client_recv_file.c tcp.o

server: tcp.o
	gcc -o server server.c tcp.o

server_file: tcp.o
	gcc -o server_send_file server_send_file.c tcp.o

tcp.o:
	gcc -c tcp.c

clean:
	rm -f tcp.o client server client_recv_file server_send_file leercadena
