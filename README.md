# C-C-Notes  
C/C++相关  
Tips:  
            // 处理int型输入的非法输入  
            bool SafeIntCin(int &num) {  
                cin>>num;  
                // 第一种，非Int型数据  
                if(cin.fail()) {  
                 &emsp; cout<<"输入非法，请重新输入"<<endl;  
                 &emsp; cin.clear();  
                 &emsp; cin.sync();  
                 &emsp; system("pause");  
                 &emsp; system("cls");  
                 &emsp; return false;  
                }  
                // 第二种，int型数据但是中间有空格，导致自动读取，  
                // 例：输入1231231 1 2，空格后的1，2无用数据也会被读取，  
                // 影响下一项的输入，导致程序崩溃。  
                // 吸收掉第一个空格后的无用数据  
                string str = "";  
                getline(cin, str);  
                if(str != "")  {  
                  &emsp;  cout<<"输入非法，请重新输入"<<endl;  
                  &emsp;  system("pause");  
                  &emsp;  system("cls");  
                  &emsp; return false;  
                }  
                return true;  
            }  
