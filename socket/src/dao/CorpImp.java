/**
 * Author:   amos
 * Date:     2018/6/7 下午8:57
 * Description:
 */
package dao;

import Utils.DBUtil;
import model.*;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

public class CorpImp implements wordsInfoDao {
    public Corp load(String condition) {
        Connection connection = DBUtil.getConnection();
        //准备sql语句
        String sql = "select * from T_CORP " + condition;


        //创建语句传输对象
        PreparedStatement preparedStatement = null;
        ResultSet resultSet = null;
        Corp corp = null;
        try {
            preparedStatement = connection.prepareStatement(sql);
            resultSet = preparedStatement.executeQuery();
            while (resultSet.next()) {
                corp = new Corp();
                corp.setORG(resultSet.getInt("ORG"));
                corp.setID(resultSet.getInt("ID"));
                corp.setSEQ_ID(resultSet.getInt("SEQ_ID"));

                corp.setCORP_NAME(resultSet.getString("CORP_NAME"));
                corp.setADDR(resultSet.getString("ADDR"));

                corp.setADDR(resultSet.getString("ADDR"));
                corp.setWEB_URL(resultSet.getString("WEB_URL"));
                corp.setEMAIL(resultSet.getString("EMAIL"));
                corp.setREG_CAPI(resultSet.getInt("REG_CAPI"));
            }


        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } finally {
            DBUtil.close(resultSet);
            DBUtil.close(preparedStatement);
            DBUtil.close(connection);
        }
        return corp;

    }

    @Override
    public ArrayList<Stock> loadStocks(String CorpName) {
        Connection connection = DBUtil.getConnection();
        //准备sql语句
        String sql = "select S.* from T_CORP as A,T_CORP_STOCK as S,T_M_CORP_CORP_STOCK as M " +
                "where  A.ORG = M.ORG AND A.ID = M.ID And A.SEQ_ID = M.SEQ_ID AND " +
                "S.ORG = M.SUB_ORG AND S.ID = M.SUB_ID And S.SEQ_ID = M.SUB_SEQ_ID "+
                "And A.CORP_NAME ='"+CorpName+"'";


        //创建语句传输对象
        PreparedStatement preparedStatement = null;
        ResultSet resultSet = null;
        ArrayList<Stock> list = new ArrayList<>();
        try {
            preparedStatement = connection.prepareStatement(sql);
            resultSet = preparedStatement.executeQuery();

            while (resultSet.next()) {
                Stock stock = new Stock();
                stock.setORG(resultSet.getInt("ORG"));
                stock.setID(resultSet.getInt("ID"));
                stock.setSEQ_ID(resultSet.getInt("SEQ_ID"));

                stock.setSTOCK_TYPE(resultSet.getString("STOCK_TYPE"));
                stock.setCOUNTRY(resultSet.getString("COUNTRY"));
                stock.setCERTIFICATE_TYPE(resultSet.getString("CERTIFICATE_TYPE"));
                stock.setCERTIFICATE_NO(resultSet.getString("CERTIFICATE_NO"));
                stock.setSTOCK_NAME(resultSet.getString("STOCK_NAME"));

                stock.setSTOCK_CAPI(resultSet.getInt("STOCK_CAPI"));
                stock.setSTOCK_CAPI_DOLLAR(resultSet.getInt("STOCK_CAPI_DOLLAR"));
                stock.setSTOCK_CAPI_RMB(resultSet.getInt("STOCK_CAPI_RMB"));
                stock.setSTOCK_CAPI_TYPE(resultSet.getString("STOCK_CAPI_TYPE"));

                stock.setSTOCK_PERCENT(resultSet.getString("STOCK_PERCENT"));
                stock.setSTOCK_RATE_DOLLAR(resultSet.getInt("STOCK_RATE_DOLLAR"));
                stock.setSTOCK_RATE_RMB(resultSet.getInt("STOCK_RATE_RMB"));

                list.add(stock);

            }


        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } finally {
            DBUtil.close(resultSet);
            DBUtil.close(preparedStatement);
            DBUtil.close(connection);
        }
        return list;

    }



    //根据名称找到这个公司
    private Corp loadCorps(String CorpName) {
        Connection connection = DBUtil.getConnection();
        //准备sql语句
        String sql = "select * from T_CORP where CORP_NAME ='"+CorpName+"'";

        //创建语句传输对象
        PreparedStatement preparedStatement = null;
        ResultSet resultSet = null;
        Corp corp = null;
        try {
            preparedStatement = connection.prepareStatement(sql);
            resultSet = preparedStatement.executeQuery();

            while (resultSet.next()) {
                corp = new Corp();
                corp.setORG(resultSet.getInt("ORG"));
                corp.setID(resultSet.getInt("ID"));
                corp.setSEQ_ID(resultSet.getInt("SEQ_ID"));

                corp.setCORP_NAME(resultSet.getString("CORP_NAME"));
                corp.setADDR(resultSet.getString("ADDR"));

                corp.setADDR(resultSet.getString("ADDR"));
                corp.setWEB_URL(resultSet.getString("WEB_URL"));
                corp.setEMAIL(resultSet.getString("EMAIL"));
                corp.setREG_CAPI(resultSet.getInt("REG_CAPI"));
            }


        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } finally {
            DBUtil.close(resultSet);
            DBUtil.close(preparedStatement);
            DBUtil.close(connection);
        }
        return corp;

    }

    //根据这个公司找到其所有的投资人，也就是股东
    private ArrayList<Stock> loadTmpStocks(Corp corp) {
        Connection connection = DBUtil.getConnection();
        //准备sql语句
        String sql = "select S.* from T_CORP_STOCK as S,T_M_CORP_CORP_STOCK as M " +
                "where  S.ORG = M.SUB_ORG AND S.ID = M.SUB_ID And S.SEQ_ID = M.SUB_SEQ_ID " +
                "And M.ID ='"+corp.getID()+"'"+"And M.SEQ_ID ='"+corp.getSEQ_ID()+"'"+"And M.ORG ='"+corp.getORG()+"'";

        //创建语句传输对象
        PreparedStatement preparedStatement = null;
        ResultSet resultSet = null;
        ArrayList<Stock> list = new ArrayList<>();
        try {
            preparedStatement = connection.prepareStatement(sql);
            resultSet = preparedStatement.executeQuery();

            while (resultSet.next()) {
                Stock stock = new Stock();
                stock.setID(resultSet.getInt("ID"));
                stock.setSEQ_ID(resultSet.getInt("SEQ_ID"));
                stock.setORG(resultSet.getInt("ORG"));

                stock.setSTOCK_NAME(resultSet.getString("STOCK_NAME"));
                stock.setSTOCK_RATE_RMB(resultSet.getInt("ID"));
                stock.setSTOCK_RATE_DOLLAR(resultSet.getInt("ID"));
                stock.setSTOCK_CAPI_RMB(resultSet.getInt("ID"));
                stock.setSTOCK_CAPI(resultSet.getInt("ID"));
                stock.setSTOCK_CAPI_DOLLAR(resultSet.getInt("ID"));
                stock.setCERTIFICATE_NO(resultSet.getString("CERTIFICATE_NO"));
                stock.setCERTIFICATE_TYPE(resultSet.getString("CERTIFICATE_TYPE"));
                stock.setCOUNTRY(resultSet.getString("COUNTRY"));
                stock.setSTOCK_TYPE(resultSet.getString("STOCK_TYPE"));
                stock.setSTOCK_CAPI_TYPE(resultSet.getString("STOCK_CAPI_TYPE"));
                stock.setSTOCK_PERCENT(resultSet.getString("STOCK_PERCENT"));

                list.add(stock);
            }


        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } finally {
            DBUtil.close(resultSet);
            DBUtil.close(preparedStatement);
            DBUtil.close(connection);
        }
        return list;

    }

    //根据一个股东找到股东投资的所有公司
    private ArrayList<Corp> loadTmpCorps(Stock stock) {
        Connection connection = DBUtil.getConnection();

        //准备sql语句
        String sql = "select A.* from T_CORP A,T_M_CORP_CORP_STOCK as M " +
                "where  A.ORG = M.ORG AND A.ID = M.ID And A.SEQ_ID = M.SEQ_ID " +
                "And M.SUB_ID ='"+stock.getID()+"'"+"And M.SUB_SEQ_ID ='"+stock.getSEQ_ID()+"'"+"And M.SUB_ORG ='"+stock.getORG()+"'";

        //创建语句传输对象/
        PreparedStatement preparedStatement = null;
        ResultSet resultSet = null;
        ArrayList<Corp> list = new ArrayList<>();
        try {
            preparedStatement = connection.prepareStatement(sql);
            resultSet = preparedStatement.executeQuery();

            while (resultSet.next()) {
                Corp store = new Corp();
                store.setID(resultSet.getInt("ID"));
                store.setORG(resultSet.getInt("ORG"));
                store.setSEQ_ID(resultSet.getInt("SEQ_ID"));
                store.setCORP_NAME(resultSet.getString("CORP_NAME"));
                store.setREG_CAPI(resultSet.getInt("REG_CAPI"));
                store.setEMAIL(resultSet.getString("EMAIL"));
                store.setWEB_URL(resultSet.getString("WEB_URL"));
                store.setADDR(resultSet.getString("ADDR"));
                store.setTEL(resultSet.getString("TEL"));
                list.add(store);

            }


        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } finally {
            DBUtil.close(resultSet);
            DBUtil.close(preparedStatement);
            DBUtil.close(connection);
        }
        return list;

    }

    @Override
    //最后找到这个公司所有的对外投资
    public ArrayList<Corp> loadOut(String name){
        Corp corp = loadCorps(name);

        ArrayList<Stock> stocks = loadTmpStocks(corp);

        ArrayList<Corp> result = new ArrayList<>();
        for (Stock stock:stocks){
            ArrayList<Corp> tmpCorp = loadTmpCorps(stock);
            for(Corp c:tmpCorp){
                if(!c.getCORP_NAME().equals(name)){
                    result.add(c);
                }
            }
        }
        return result;
    }


}

