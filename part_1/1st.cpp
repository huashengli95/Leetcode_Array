
    vector<int> flag;
    string c;
    int cmt=0;
    auto it = S.begin();
    while(it!=S.end()){

        if (*it<65 || (*it>90&&*it<97)){
            flag.push_back(cmt);
            c.push_back(*it);
            S.erase(it);
            it--;
        }
        cmt++;
        it++;
    }

    reverse(S.begin(),S.end());
    for (int j=0;j<flag.size();j++){
        S.insert(flag[j],1,c[j]);
    }
    return S;
