1、工程介绍  
  借助开源的串口通信和调试代码qextserialbase和posix_qtextserialport，封装serialservice类，包含串口的初始化，数据写入，读取，关闭等操作。  
tem_humi_light.cpp进行温湿度的计算与设置。  
  工程中添加了motor类，表示电机的控制，不仅仅可以通过串口进行数据的获取，也可以通过串口进行数据的写入，从而实现电机的开关控制。  
  mainwindow.cpp中包含所有的ui控件的初始化，各种控件的更新操作，串口的打开，数据的读取与写入函数的封装实现。同时定义定时器定时获取串口的数据并更新界面。  
  socketclient类定义QTcpSocket，作为socket的客户端，并设置IP与端口进行连接，并封装实现readmsg()和sendmsg()函数进行数据的发送与接收。  
2、交叉编译程序  
  代码完成后，用命令行窗口进入工程目录下，执行qmake-arm，产生makefile文件。  
  编译：make，产生可执行文件Gateway（如果之前已经编译过一次，需要先make clean）