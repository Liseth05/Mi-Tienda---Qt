#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "producto.h"
#include "QMessageBox"

#define IVA 12

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_cmdAgregar_released();

    void on_inProducto_currentIndexChanged(int index);

    void on_cmdAgregar_clicked();


    void on_inCedula_textChanged(const QString &arg1);

    void on_inCedula_selectionChanged();

    void on_inCedula_editingFinished();

    void on_actionNuevo_triggered();

   private:
    Ui::Principal *ui;
    QList<Producto*> m_productos;
    float m_subtotal;
    void calcular(float stProducto);
    void nuevo();

};
#endif // PRINCIPAL_H
