#include<iostream>
#include<cstring>

using namespace std;

class Product
{
    int productprice;
    int productQuantity;
    char *productName;

    public:
        Product()
        {
            productprice=0;
            productQuantity=0;
        }
        Product(int p, int q, const char *name)
        {
            productprice=p;
            productQuantity=q;
            productName = new char[strlen(name)+1];//'\0'// dynamic attributes of a class instance
            strcpy(productName,name);
        }
        void addProductInfo(int p, int q)
        {
            productprice=p;
            productQuantity=q;
        }

        void SingleSale()
        {
            productQuantity--;
        }
        void checkStockValue()
        {
            cout<<productName<<":::Product Price: "<<productprice<<" and quantity "<<productQuantity<<" Stock Value : "<<(productprice*productQuantity)<<endl;
        }
        void updateProductQuantity(int q)
        {
            productQuantity+=q;
        }
        //sale operation
        //update stock operation
        // check current stock valuation price x quantity
};

int main()
{
    Product pobj;
    Product *ptrObj;//null pointer
    ptrObj = &pobj;

    ptrObj->checkStockValue();
    

    //Product plist[10];
    int productNo;
    cout<<"Enter the number of products that you want to add in inventory(max=10);";
    cin>>productNo;

    Product **plist= new Product*[productNo]; // the list was of null pointers  plist[0]=Product *ptrobj;
    cout<<"===>>>Size of static pList"<<sizeof(plist)<<endl;
    
    cout<<"Great lets complete the inventory!!"<<endl;
    for(int i=0;i<productNo;i++)
    {
        int p,q;
        char a[10];
        cout<<"Enter the product "<<i<<" price & quantity:";
        cin>>p>>q;
        cin>>a;
        //plist[i] = Product(p,q);
        plist[i] = new Product(p,q,a);// plist[i]= &product the dynamic memory allocation of a new product object is being done.
        //plist[i]->addProductInfo(p,q);
    }
int option;

do{
    cout<<"\n";
    for(int i=0;i<productNo;i++)
    {
        cout<<"Enter "<<i<<" for working on product::>>";
        plist[i]->checkStockValue();
    }
    int selectedProduct;
    cin>>selectedProduct;


    cout<<"What operation do you want to perform?"<<endl;
    cout<<"1 for Single sale"<<endl;
    cout<<"2 for print current stock"<<endl;
    cout<<"3 for update current stock"<<endl;
    cin>>option;

    switch(option)
    {
        case 1://sale
            plist[selectedProduct]->SingleSale();
            plist[selectedProduct]->checkStockValue();
            break;
        case 2://check stock
            plist[selectedProduct]->checkStockValue();
            break;
        case 3:
            int quat;
            cout<<"What qunatity you want to add for product No"<<selectedProduct<<endl;
            cin>>quat;
            plist[selectedProduct]->updateProductQuantity(quat);
            cout<<"Here are the update values"<<endl;
            plist[selectedProduct]->checkStockValue();
            break;
        default:
            cout<<"Invalid value for operation";
    }
    cout<<"Do you want to perform other operations? 1= yes, 0=No";
    cin>>option;
}while(option);
    

return 0;
}