class Aircraft {
    public:
        Aircraft();
        virtual ~Aircraft();
        virtual void fly() {//some implementation 
        }
};

class Boeing: public Aircraft {
    public:
        Boeing();
        ~Boeing();
        void fly() {//alt implementation
        }
};

int main() {
    Aircraft *af;
    af = new Boeing();
    af->fly();
    delete af;
}
