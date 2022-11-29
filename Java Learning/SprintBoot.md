
### Deploy the Springboot api on Alicloud Ubutun Server

1. Generate the jar file

   [Spring Boot: How to create executable JAR](https://www.concretepage.com/questions/510) 

   [SpringBoot项目如何打包、部署](https://juejin.cn/post/7032680721684627486)

2. Test the jar file in the local

3. SSH login the Ubutun server via the final shell

   3.1 make sure you turn on the port 21 and 20 is accesble through the firewall

   

4. FTP upload the jar file from the local to the Server root directory

5. cd move to the this directory

6. run the command below to enable the spring boot app running.

   6.1 make sure you run the command below to configure the java enviroment first:

   ```
   sudo apt-get update
   sudo apt install default-jre            
   sudo apt install openjdk-11-jre-headless
   sudo apt install openjdk-8-jre-headless 
   ```

   [无法连接阿里镜像，这个怎么处理？新手，求指导，谢谢大家。](https://developer.aliyun.com/ask/55079)

   6.2 also turn on the 28019 port through the firewall in alicloud

   6.3 then run the router below to visit the api test router:

   ```
   http://8.210.207.119:28019/swagger-ui/index.html
   ```

   

7. 

[这个执行方式windows和linux上都一样](https://www.jianshu.com/p/c616380095f0)



800220221128083883379



sudo apt-get update

sudo apt install default-jre            
sudo apt install openjdk-11-jre-headless
sudo apt install openjdk-8-jre-headless 



8.210.207.119:28019/swagger-ui/index.html

http://8.210.207.119:28019/swagger-ui/index.html

E: Failed to fetch http://mirrors.cloud.aliyuncs.com/ubuntu/pool/main/o/openjdk-lts/openjdk-11-jre-headless_11.0.15+10-0ubuntu0.18.04.1_amd64.deb  404  Not Found [IP: 100.100.2.148 80]






## Web server failed to start Port 8080 was already in use

[Web server failed to start Port 8080 was already in use](https://springhow.com/web-server-failed-to-start-port-8080-was-already-in-use/#:~:text=So%20in%20general%2C%20If%20you,proper%20startup%20and%20shutdown%20scripts.)  
