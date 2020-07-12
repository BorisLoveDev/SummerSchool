CC = g++
CFLAGS = -I/usr/local/include/opencv4 -L/usr/local/lib/libopencv
HZFLAGS	= -Wl,-rpath,/usr/local/lib
LIBRARIES = -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_videoio

opencv1: camera.cpp
	$(CC) $(CFLAGS) $(HZFLAGS)  -o camera camera.cpp $(LIBRARIES) 

clean:
	rm -f *.o
