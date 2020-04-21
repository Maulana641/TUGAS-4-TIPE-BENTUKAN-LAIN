#include <iostream>

struct matkul { 

char matkul[500];
float nilai ;

} ;
void display(struct matkul st)
{

std::cout << "nama matkul : " << st.matkul;
std::cout << "\nnilai : " << st.nilai;
}
int main()
{

matkul data_matakuliah;
std::cout <<"nama matkul : "; std::cin>>data_matakuliah.matkul;
std::cout <<"nilai : "; std::cin>>data_matakuliah.nilai;
display(data_matakuliah);
return 0;

}
