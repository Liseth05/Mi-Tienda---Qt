#ifndef VENTAS_H
#define VENTAS_H

#include <QObject>
#include "cliente.h"
#include "producto.h"

class Ventas : public QObject
{
    Q_OBJECT
   // Q_PROPERTY(Cliente READ cliente WRite setCliente)
private:
    Cliente *m_cliente;
    QList<Producto> m_productos;

public:
    explicit Ventas(QObject *parent = nullptr);
    void addProducto(const Producto &producto);

    Cliente *cliente() const;
    void setCliente(Cliente *cliente);

    QList <Producto>productos()const;



signals:

};

#endif // VENTAS_H
