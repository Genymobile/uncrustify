class Foo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Bar * bar READ bar WRITE setBar NOTIFY barChanged)

public:
    Foo();

    Bar* bar() const;

    void setBar(Bar *);

Q_SIGNALS:
    void barChanged(Bar *);

private:
    Q_DISABLE_COPY(Foo)
    Bar * mBar;
};
