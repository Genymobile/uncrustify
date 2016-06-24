class Foo
{
public:
    Foo() {
        int i = 2 + 2;
    };

private:
    Q_DISABLE_COPY(Foo)
    Bar* mBar;
};
