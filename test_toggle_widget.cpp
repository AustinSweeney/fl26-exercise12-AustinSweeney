#include <QtTest/QtTest>
#include <QtWidgets>
#include <QDebug>

#include "toggle_widget.h"

class TestToggleWidget : public QObject {
  Q_OBJECT

private slots:
	void testToggle();
  // Define tests here
  
};


void TestToggleWidget::testToggle()
{
	ToggleWidget widget;
	widget.show();

	QPushButton* button = widget.findChild<QPushButton*>();

	QVERIFY(button != nullptr);
	QVERIFY(!widget.isOn());

	QTest::mouseClick(button, Qt::LeftButton);
	QVERIFY(widget.isOn());

	QTest::mouseClick(button, Qt::LeftButton);
	QVERIFY(!widget.isOn());
}
// Implement the tests here


QTEST_MAIN(TestToggleWidget)
#include "test_toggle_widget.moc"
