package Util;

import java.sql.*;

public class DBUtil {

    public  static Connection getConnection() {

        try {
            //1 加载驱动
            Class.forName("com.mysql.cj.jdbc.Driver").newInstance();

        } catch (InstantiationException | IllegalAccessException | ClassNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        String user = "root";
        String password = "Mysql007";
        String url = "jdbc:mysql://localhost:3306/hotwords?useUnicode=true&characterEncoding=utf-8&";
        Connection connection = null;
        try {
            //2 创建链接对象connection
            connection = DriverManager.getConnection(url+"useSSL=false",user,password);

        } catch (SQLException e) {
            // TODO Auto-generated catch block

            e.printStackTrace();
        }
        return connection;
    }

    //关闭资源的方法
    public static void close(Connection connection ) {
        try {
            if (connection != null) {
                connection.close();
            }

        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
    public static void close(PreparedStatement preparedStatement ) {
        try {
            if (preparedStatement != null) {
                preparedStatement.close();
            }

        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
    public static void close(ResultSet resultSet ) {
        try {
            if (resultSet != null) {
                resultSet.close();
            }

        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }



}
