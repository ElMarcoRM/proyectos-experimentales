#include <QtTest>
#include "..\server\task5.h"

// add necessary includes here

class task_5_test : public QObject
{
    Q_OBJECT

public:
    task_5_test();
    ~task_5_test();

private slots:
    void test_case_task5_11_1_4__1_9__2_5__2_9__3_5__3_7__4_6__4_7__4_9__6_7__7_8__8_9();


};

task_5_test::task_5_test()
{

}

task_5_test::~task_5_test()
{

}

void task_5_test::test_case_task5_11_1_4__1_9__2_5__2_9__3_5__3_7__4_6__4_7__4_9__6_7__7_8__8_9()
{
    QString ans = "1,9;2,5;2,9;3,5;3,7;4,6;4,7;4,9;6,7;7,8;8,9;";
    QString numtask = "11";
    QString list_rebro = "1,4;1,9;2,5;2,9;3,5;3,7;4,6;4,7;4,9;6,7;7,8;8,9";
    QString ansTask5 = task5(numtask, list_rebro);
    QCOMPARE(ans, ansTask5);

}

QTEST_APPLESS_MAIN(task5_class_test)

#include "tst_task5_class_test.moc"
