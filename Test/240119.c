// #include <stdio.h>
// struct lapTop{
//     int namSX;
//     float gia;
// };
// typedef struct lapTop lapTop;


// struct SinhVien{
//     float toan;
//     char name[100];
// };

// void nhap(struct SinhVien *sv){
//     printf("Nhap diem toan: " );
//     scanf("%f", &sv->toan);
// }

// void xuat(struct SinhVien *sv){
//     printf("Diem toan la: %f", sv->toan);
// }

// struct HocSinh{
//     long long lop;
//     int tuoi;
//     int namSinh;
// };
// typedef struct HocSinh HS;

// struct HocSinh2{
//     int tuoi;
//     long long lop;
//     int namSinh;
// };
// typedef struct HocSinh2 HS2;

// struct ngay_sinh{
//     int ngay, thang, nam;
// };

// struct SinhVien2{
//     float toan, van;
//     char name[100];
//     struct ngay_sinh ns;
// };
// typedef struct SinhVien2 SV2;
// int main(){
//     // lapTop lt1;
//     // scanf("%d", &lt1.namSX);
//     // scanf("%f", &lt1.gia);

//     // printf("%d %.2f", lt1.namSX, lt1.gia);
//     // struct SinhVien sv;
//     // nhap(&sv);
//     // xuat(&sv);
//     // HS hs;
//     // HS2 hs2;
//     // printf("%d %d", sizeof(hs), sizeof(hs2));

//     SV2 sv2;
//     printf("Nhap ngay sinh: ");
//     scanf("%d", &sv2.ns.ngay);
//     printf("%d\n", sv2.ns.ngay);
//     return 0;
// }

// #include <stdio.h>
// int gcd(long long a, long b){
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

// struct phanSo{
//     long long x, y;
// };
// typedef struct phanSo PS;

// int main(){
//     PS ps;
//     scanf("%lld %lld", &ps.x, &ps.y);

//     long long GCD = gcd(ps.x, ps.y);
//     ps.x /= GCD;
//     ps.y /= GCD;

//     printf("%lld/%lld", ps.x, ps.y);
//     return 0;
// }


#include <stdio.h>

struct ngay_sx{
    int day, month, year;
};

struct infor{
    char name[100];
    int count;
    struct ngay_sx nsx;
};

typedef struct infor inf;

void nhap(inf *Mau1){
    printf("Nhập tên đơn hàng: ");
    gets(Mau1->name);
    printf("Nhập số lượng đơn hàng: ");
    scanf("%d", &Mau1->count);
    getchar();
    printf("Nhập ngày sản xuất hàng: ");
    scanf("%d %d %d", &Mau1->nsx.day, &Mau1->nsx.month, &Mau1->nsx.year);
    getchar();
}

void xuat(inf Mau1){
    printf("Ten don hang: %s\n", Mau1.name);
    printf("So luong don hang: %d\n", Mau1.count);
    printf("Ngay nhap hang: %02d/%02d/%04d\n", Mau1.nsx.day, Mau1.nsx.month, Mau1.nsx.year);
}

int main(){
    inf Mau1;

    nhap(&Mau1);
    xuat(Mau1);

    return 0;
}