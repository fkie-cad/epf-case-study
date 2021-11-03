all: server_taint_analysis

CFLAGS += -g -DHAVE_CONFIG_H -I. -I.. -O0

LIBOBJ = \
    buffer_frame-pre.o \
    cpXXtime2a-pre.o \
    cs101_asdu-pre.o \
    cs101_bcr-pre.o \
    cs101_information_objects-pre.o \
    cs101_master_connection-pre.o \
    cs101_master-pre.o \
    cs101_queue-pre.o \
    cs101_slave-pre.o \
    cs104_connection-pre.o \
    cs104_frame-pre.o \
    frame-pre.o \
    lib60870_common-pre.o \
    lib_memory-pre.o \
    linked_list-pre.o \
    link_layer-pre.o \
    serial_port_linux-pre.o \
    serial_transceiver_ft_1_2-pre.o \
    socket_linux-pre.o \
    thread_linux-pre.o \
    cs104_slave-pre.o \
    time-pre.o

# simple_client-pre.o \
# multi_client_server-pre.o \
# simple_server-pre.o \
# master_example-pre.o \
# cs104_redundancy_server-pre.o \
# cs104_server_no_threads-pre.o \
# slave_example-pre.o \

%.o : %.c
	$(CC) $(CFLAGS) -c $< -fPIC -DPIC -o $@

server_taint_analysis: $(LIBOBJ) cs104_server_taint_analysis-pre.o
	$(CC) -g $(CFLAGS) -o $@ $^ -lpthread


server_taint_analysis_asan: $(LIBOBJ) cs104_server_taint_analysis-pre.o
	$(CC) -g $(CFLAGS) -fsanitize=address -fno-omit-frame-pointer -o $@ $^ -lpthread

clean:
	rm -f *.o
	rm -rf simple_client
	rm -rf simple_server
	rm -rf server_taint_analysis
	rm -rf server_taint_analysis_asan

