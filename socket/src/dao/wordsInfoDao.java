package dao;


import Model.wordInfo;

import java.util.ArrayList;


public interface wordsInfoDao {

    public wordInfo load(String condition);

    public ArrayList<wordInfo> loadStocks(String CorpName);
    public ArrayList<wordInfo> loadOut(String CorpName);






}
