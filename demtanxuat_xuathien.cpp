void demTanXuat(danhsach a){
  for(int i=0;i<a.n;i++){
    bool daxuathien=false;
    for(int j=0;j<i;j++){
      if(a.a[j]==a.a[i]){
        daxuathien=true;
        break;
      }
    }
    if(!daxuathien){
      int dem=0;
      for(int j=i;j<a.n;j++){
        if(a.a[j]==a.a[i])
          dem++;
      }
      cout << "\nGia Tri" << a.a[i] << " xuat hien " << dem << " lan: " << endl;
    }
  }
}
