#include "ventas.h"

void Ventas::setCliente(Cliente *cliente)
{
    m_cliente = cliente;
}

Ventas::Ventas(QObject *parent) : QObject(parent)
{
    m_cliente=nullptr;
}

void Ventas::addProducto(const Producto &producto)
{
    m_productos.append(producto);

}

Cliente *Ventas::cliente() const
{
    return m_cliente;

}

Ventas::Ventas(QObject *parent) : QObject(parent)
{
    m_cliente = nullptr;
}
