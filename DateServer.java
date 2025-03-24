import java.net.*;
import java.io.*;

public class DateServer {

    public static void main(String[] args) throws Exception{
        ServerSocket server = new ServerSocket(6013);

        // Listen for connections
        while (true) {
            System.out.println("Listening...");
            Socket client = server.accept();
            PrintWriter pout = new PrintWriter(client.getOutputStream(), true);
            System.out.println("New client is connected");

            // write the Data to the socket
            pout.println(new java.util.Date().toString());

            // close the socket and resume listening for connections
            client.close();
        }
        
    }
}