#include "cliente.h"

QString Cliente::cedula() const
{
    return m_cedula;
}

void Cliente::setCedula(const QString &cedula)
{
    m_cedula = cedula;
}

QString Cliente::nombre() const
{
    return m_nombre;
}

void Cliente::setNombre(const QString &nombre)
{
    m_nombre = nombre;
}

QString Cliente::telefono() const
{
    return m_telefono;
}

void Cliente::setTelefono(const QString &telefono)
{
    m_telefono = telefono;
}

QString Cliente::email() const
{
    return m_email;
}

void Cliente::setEmail(const QString &email)
{
    m_email = email;
}

QString Cliente::direccion() const
{
    return m_direccion;
}

void Cliente::setDireccion(const QString &direccion)
{
    m_direccion = direccion;
}

Cliente::Cliente(QObject *parent) : QObject(parent)
{
    this->m_cedula="";
    this->m_nombre="";
    this->m_telefono="";
    this->m_email="";
    this->m_direccion="";

}

Cliente::Cliente(QString cedula, QString nombre, QString telefono, QString email, QString direccion)
{
    this->m_cedula=cedula;
    this->m_nombre=nombre;
    this->m_telefono=telefono;
    this->m_email=email;
    this->m_direccion=direccion;

}
