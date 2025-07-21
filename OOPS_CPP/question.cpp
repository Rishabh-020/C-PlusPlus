    #include<iostream>
    using namespace std;
    class Student {
        private:
        int rollNum;
        string name;
        float arr[3];
    public:
        void inputDetails(){
            cin>>rollNum>>name;
            for(int i=0;i<3;i++)cin>>arr[i];
        }
        float calculateTotal(){
            float sum=0.0;
            for(int i=0;i<3;i++){
                sum+=arr[i];
            }
            return sum;
        }
        float calculateAverage(){
            float sum=0.0;
            for(int i=0;i<3;i++){
                sum+=arr[i];
            }
            return sum/3;
        }
        void displayDetails(){
            cout<<"Roll Number: "<<rollNum<<endl<<"Name: "<<name<<endl;
            cout<<"Total Marks: "<<calculateTotal()<<endl<<"Avergae Marks: "<<calculateAverage();
        }
    };
    class circle{
    private:
        float area(float raduis){
            return 3.14*(raduis*raduis);
        }
    public:
        void print(int x){
            cout<<"The area if the circle is: "<<area(x);
        }
    };
    int main(){
        Student s1;
        // s1.inputDetails();
        // s1.displayDetails();
        circle c1;
        c1.print(2.4);
    }
