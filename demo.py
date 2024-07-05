import socket
import ctypes
import os

# Load the shared library
if os.name == 'nt':
    lib = ctypes.CDLL('./data_processor.dll')
else:
    lib = ctypes.CDLL('./libdata_processor.so')

lib.process_data.argtypes = [ctypes.c_char_p, ctypes.c_char_p, ctypes.c_int]

def process_data(input_str):
    input_bytes = input_str.encode('utf-8')
    output_buffer = ctypes.create_string_buffer(len(input_bytes) + 1)
    lib.process_data(input_bytes, output_buffer, len(input_bytes) + 1)
    return output_buffer.value.decode('utf-8')

# Socket server setup
HOST = '127.0.0.1'
PORT = 65432

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    print(f'Server listening on {HOST}:{PORT}')

    while True:
        conn, addr = s.accept()
        with conn:
            print(f'Connected by {addr}')
            data = conn.recv(1024)
            if not data:
                break
            processed_data = process_data(data.decode('utf-8'))
            conn.sendall(processed_data.encode('utf-8'))
