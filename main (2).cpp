    /******************************************************************************
    
                                  Online C++ Compiler.
                   Code, Compile, Run and Debug C++ program online.
    Write your code in this editor and press "Run" button to compile and execute it.
    
    *******************************************************************************/
    
    #include <iostream>
    #include <cmath>
    
    using namespace std;
        void findZone(float x,float y){
         if(x > 0 && y>0){
            cout << "Точка знаходиться у перщій чверті координатної площини" << endl;
        }
        else if(x < 0 && y>0){
            cout << "Точка знаходиться у другій чверті координатної площини"<< endl;
        }else if(x < 0 && y<0){
            cout << "Точка знаходиться у третій чверті координатної площини"<< endl;
        }else if(x > 0 && y<0){
            cout << "Точка знаходиться у четвертій чверті координатної площини"<< endl;
        }
    };
    void isMidle(int a,int b,int c){

        cout << "Введіть перше будь-якие число: ";
        cin >> a; 
        cout << "Введіть друге будь-якие число: ";
        cin >> b;
        cout << "Введіть трете будь-якие число: ";
        cin >> c;
        if((a <b && b <c) || (a>b && b>c)){ // Умова за якою число b має бути посередені
            cout << "Число b знаходиться посередені: "<<endl;
        }
        else{ // Дії у вимадку якщо умова не виконується
            cout << "Число b не знаходиться посередені: " <<endl;
        }
    };
    void checkNumbers (int n){
         
        cout << " Введіть трьохзначне число: ";
        cin >> n; //Присвоєння значення змінній
        if(n>999 || n< -999){ //Умова за якою число має бути трьохзначним
            cout << "Ви ввели неправильне число";
            return;
            } 
        cout << "Останнє число (одиниці): " << n % 10 << endl; //Виведення першого результату
        cout << "Число посередені (десятки): " << n % 100 - n%10<< endl;  //Виведення другого результату
    }
    int main()
    {
        cout << "Перше задання Proc23: " << endl;
        int x,x1,x2, y,y1,y2;  //ініціалізація змінних
        cout << "Введіть координату x для першого виклику: ";
        cin >> x;
        cout << "Введіть координату x для другого виклику: ";
        cin >> x1;
        cout << "Введіть координату x для третього виклику: ";
        cin >> x2;
        cout << "Введіть координату y для першого виклику: ";
        cin >> y;
        cout << "Введіть координату y для другого виклику: ";
        cin >> y1;
        cout << "Введіть координату y для третього виклику: ";
        cin >> y2;
        findZone(x,y);
        findZone(x1,y1);
        findZone(x2,y2);
        cout << "Друге задання Boolean7: " << endl;
        int a,b,c;
        isMidle(a,b,c);
        cout <<"Третє завдання Integer10: "<< endl;
        int n; 
        checkNumbers(n);
        return 0;
    }

