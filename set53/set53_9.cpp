#include<iostream>
using namespace std;
class RupeetoDollor
{
public:
      virtual float doConversion()
      {
          int rup1=100;
          float dollar=(float)rup1/84.5;
          return dollar;
      }

};
class RupeetoYen:public RupeetoDollor
{
public:
    float doConversion()
    {
        int rup2=120;
        float yen=(float)rup2/0.56;
        return yen;
    }



};
class RupeetoPound:public RupeetoYen
{
public: float doConversion()
        {
            int rup3=10;
            float pound=(float)rup3/106.25;
            return pound;
        }


};
class RupeetoEuro:public RupeetoPound
{
public:
    float doConversion()
    {
        int rup4=50;
        float euro=(float)rup4/90.2;
        return euro;

    }

} ;
class RupeetoRubel:public RupeetoEuro
{
    public:
        float doConversion()
        {
            int rup5=15;
            float rubel=(float)rup5/0.91;
            return rubel;

        }
};
class RupeetoDinar:public RupeetoRubel
{
    public:
        float doConversion()
        {
            int rup6=30;
            float dinar=(float)rup6/273.5;
            return dinar;
        }
};
int main()
{
    RupeetoDollor rd,*ptr;
    ptr=&rd;
    cout<<"\nRupee to Dollar Conversion:"<<ptr->doConversion();

    RupeetoYen ry;
    ptr=&ry;
     cout<<"\nRupee to Yen Conversion:"<<ptr->doConversion();

    RupeetoPound rp;
    ptr=&rp;
    cout<<"\nRupee to Pound Conversion:"<<ptr->doConversion();

    RupeetoEuro re;
    ptr=&re;
    cout<<"\nRupee to Euro Conversion:"<<ptr->doConversion();

    RupeetoDinar rdn;
    ptr=&rdn;
    cout<<"\nRupee to Dinar Conversion:"<<ptr->doConversion();
    return 0;
}
