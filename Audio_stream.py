import matplotlib.pyplot as plt
import numpy as np
import pyaudio as pa
from scipy.io import wavfile
import IPython
from numpy import savetxt
import struct
import time
Rate = 44100
CHUNK = 8192
Record_Second = 600

p = pa.PyAudio()
#Stream Data input for processing

print("Processing Stream input...\n")
#checking the connection for stream
#         try:
            
#         except PinError:
#             stream.stop_stream()
#             stream.close()       
#iniciating the the data into python data
        #while true:

stream = p.open(format=pa.paInt16, 
                channels=2,rate=Rate,input=True,
                output=True, frames_per_buffer=CHUNK)
print("the stream is going...\n")

data = np.fromstring(stream.read(CHUNK),dtype=np.int16)
stream.start_stream()


fig, (ax,ax1) = plt.subplots(2)
x_fft = np.linspace(0, Rate, CHUNK)
x = np.arange(0,2*CHUNK,2)
line, = ax.plot(x, np.random.rand(CHUNK),'r')
line_fft, = ax1.semilogx(x_fft, np.random.rand(CHUNK), 'b')
ax.set_ylim(-32000,32000)
ax.ser_xlim = (0,CHUNK)
ax1.set_xlim(20,Rate/2)
ax1.set_ylim(0,1)
fig.show()

while 1:
    tstart = time.time()
    DataRead= stream.read(CHUNK)
    dataInt = struct.unpack(str(CHUNK) + 'i', DataRead)
    line.set_ydata(dataInt)
    line_fft.set_ydata(np.abs(np.fft.fft(dataInt))*2/(11000*CHUNK))
    fig.canvas.draw()
    fig.canvas.flush_events()
else:
    stream.stop_stream()
    stream.close()
    print("Can't initiating data stream...\n")

#The noise filter Law pass filter

