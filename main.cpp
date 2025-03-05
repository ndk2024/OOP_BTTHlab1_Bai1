#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Bài 4, Bài 5

struct SinhVien
{
    string ten;
    double toan, van;

};
struct Ngay
{
    int ngay, thang, nam;
};
void NhapNgay(Ngay &n)
{
    cin>>n.ngay>>n.thang>>n.nam;
}
void NhapSinhVien( SinhVien &a)
{
    getline(cin, a.ten);
    cin>>a.toan>>a.van;
}
Ngay NgayKT (Ngay a)
{
    Ngay b;
    if(a.nam %4==0)
    {
        if(a.thang==1|| a.thang==3||a.thang==5||a.thang==7||a.thang==8||a.thang==10)
        {
            if(a.ngay== 31)
            {
                b.ngay=1;
                b.thang=a.thang+1;
                b.nam=a.nam;
            }
            else
            {
                b.ngay=a.ngay+1;
                b.thang=a.thang;
                b.nam=a.nam;
            }
        }
        else if (a.thang==2)
        {
            if(a.ngay==29)
            {
                b.ngay=1;
                b.thang=3;
                b.nam=a.nam;
            }
            else
            {
                b.ngay=a.ngay+1;
                b.thang=2;
                b.nam=a.nam;
            }
        }
        else if (a.thang==12)
        {
            if(a.ngay==31)
            {
                b.ngay=1;
                b.thang=1;
                b.nam=a.nam+1;
            }
        }
        else
        {
            if(a.ngay== 30)
            {
                b.ngay=1;
                b.thang=a.thang+1;
                b.nam=a.nam;
            }
            else
            {
                b.ngay=a.ngay+1;
                b.thang=a.thang;
                b.nam=a.nam;
            }
        }
    }
    else
    {
        if(a.thang==1|| a.thang==3||a.thang==5||a.thang==7||a.thang==8||a.thang==10)
        {
            if(a.ngay== 31)
            {
                b.ngay=1;
                b.thang=a.thang+1;
                b.nam=a.nam;
            }
            else
            {
                b.ngay=a.ngay+1;
                b.thang=a.thang;
                b.nam=a.nam;
            }
        }
        else if (a.thang==2)
        {
            if(a.ngay==28)
            {
                b.ngay=1;
                b.thang=3;
                b.nam=a.nam;
            }
            else
            {
                b.ngay=a.ngay+1;
                b.thang=2;
                b.nam=a.nam;
            }
        }
        else if (a.thang==12)
        {
            if(a.ngay==31)
            {
                b.ngay=1;
                b.thang=1;
                b.nam=a.nam+1;
            }
        }
        else
        {
            if(a.ngay== 30)
            {
                b.ngay=1;
                b.thang=a.thang+1;
                b.nam=a.nam;
            }
            else
            {
                b.ngay=a.ngay+1;
                b.thang=a.thang;
                b.nam=a.nam;
            }
        }
    }
    return b;
}
int main()
{
    SinhVien a;
    NhapSinhVien(a);
    Ngay ngay1, ngaykt;
    NhapNgay(ngay1);
    ngaykt=NgayKT(ngay1);
    //Bài 4
    cout<<"Bai 4: "<<ngaykt.ngay<<"/"<<ngaykt.thang<<"/"<<ngaykt.nam<<endl;
    //Bài 5
    cout<<"Bai 5: ";
    cout<<(a.toan+a.van)/2<<endl;
    return 0;
}
