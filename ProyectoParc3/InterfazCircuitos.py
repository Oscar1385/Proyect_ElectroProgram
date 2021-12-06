
/*
 * PROGRAMA ELECTRÓNICA_Parcial3
 * Autores: García Piña José de Jesús, Ortega Penagos Oscar Eduardo, Caballero López Alonso
 * 6/12/2021
 */


import tkinter
import turtle
from tkinter import *
from tkinter import messagebox, ttk
from PIL import ImageTk, Image
from turtle import *

ventana = Tk()
ventana.title("Circuitos electricos")
ventana.geometry('700x800')
ventana.state('zoomed')



# crear canva
canvas = tkinter.Canvas(ventana, width=600, height=400)
# turtle dentro de canva
turtle_screen=turtle.TurtleScreen(canvas)
canvas.grid(row=0, column=0, columnspan=6, padx=350, pady=5)
mostrar_inversor = turtle.RawTurtle(canvas)

def mostrar_inversor():
    title('Amplificador no inversor')
    speed(0)
    penup()
    left(180)
    forward(100)
    left(90)
    forward(100)
    left(90)
    pendown()
    # Tierra 1
    forward(15)
    penup()
    left(45)
    forward(10)
    left(135)
    pendown()
    forward(35)
    penup()
    right(45)
    forward(10)
    right(135)
    pendown()
    forward(55)
    backward(27.5)
    # Antes de fuente
    left(90)
    forward(30)
    right(90)
    # Fuente
    circle(15)
    penup()
    left(90)
    forward(30)
    pendown()
    # Pre R1
    forward(40)
    right(90)
    forward(40)
    # Resistencia 1
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R1
    forward(40)
    # Amplificador
    left(90)
    forward(20)
    right(120)
    forward(80)
    right(120)
    forward(80)
    right(120)
    forward(60)
    # Pre R2
    left(90)
    forward(20)
    right(90)
    forward(60)
    right(90)
    forward(40)
    # Resistencia 2
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R2
    forward(40)
    right(90)
    forward(80)
    right(90)
    backward(30)
    forward(60)
    penup()
    forward(67)
    left(90)
    forward(20)
    pendown()
    right(90)
    forward(30)
    left(90)
    forward(60)
    # Tierra 2
    right(90)
    backward(27.5)
    forward(55)
    left(135)
    penup()
    forward(10)
    pendown()
    left(45)
    forward(35)
    right(135)
    penup()
    forward(10)
    pendown()
    right(45)
    forward(15)
    # Hacia tierra 3
    right(180)
    penup()
    forward(128)
    pendown()
    # Tierra 3
    forward(15)
    penup()
    left(45)
    forward(10)
    left(135)
    pendown()
    forward(35)
    penup()
    right(45)
    forward(10)
    right(135)
    pendown()
    forward(55)
    backward(27.5)
    left(90)
    forward(50)
    # Hacia los signos
    penup()
    forward(10)
    left(90)
    forward(84)
    # Signo positivo
    pendown()
    forward(8)
    backward(4)
    right(90)
    backward(4)
    forward(8)

    penup()
    forward(36)
    pendown()
    # Signo negativo
    left(90)
    forward(4)
    backward(8)

    turtle.exitonclick()

boton1 = Button(ventana, text="Opamp Inversor", width=15, height=2, command = mostrar_inversor)
boton1.place(x=260, y=420)


def Resistencias():
    Res = Image.open('Res_Paralelo.jpg')
    Res = Res.resize((450, 214))
    Res = ImageTk.PhotoImage(Res)
    Res_label = Label(ventana, image=Res)
    Res_label.image = Res
    Res_label.grid(row=0, column=0, columnspan=6, padx=360, pady=5)


boton6 = Button(ventana, text="Resistencias\n en Paralelo", command=Resistencias, width=15, height=2)
boton6.grid(row=2, column=1, padx=15, pady=5)

def Resis_Serie():
    ResSerie = Image.open('Res_Serie.jpg')
    ResSerie = ResSerie.resize((450, 214))
    ResSerie = ImageTk.PhotoImage(ResSerie)
    ResSerie_label = Label(ventana, image=ResSerie)
    ResSerie_label.image = ResSerie
    ResSerie_label.grid(row=0, column=0, columnspan=6, padx=360, pady=5)


boton7 = Button(ventana, text="Resistencias\n en Serie", command=Resis_Serie, width=15, height=2)
boton7.grid(row=2, column=2, padx=10, pady=5)


def mostrar_NoInversor():
    title('Amplificador no inversor')
    speed(0)
    penup()
    left(180)
    forward(100)
    left(90)
    forward(100)
    left(90)
    pendown()
    # Tierra 1
    forward(15)
    penup()
    left(45)
    forward(10)
    left(135)
    pendown()
    forward(35)
    penup()
    right(45)
    forward(10)
    right(135)
    pendown()
    forward(55)
    # Antes de R1
    backward(27.5)
    left(90)
    forward(120)
    right(90)
    forward(20)
    # Resistencia 1
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Continuacion resistencia 1
    forward(40)
    backward(20)
    left(90)
    forward(70)
    right(90)
    forward(40)
    # Resistencia 2
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Despues de R2
    forward(50)
    right(90)
    forward(100)
    left(90)
    forward(30)
    # Tierra 3
    right(90)
    penup()
    forward(50)
    pendown()
    forward(20)
    right(90)
    pendown()
    forward(25.7)
    backward(55)
    left(45)
    penup()
    forward(10)
    right(45)
    pendown()
    forward(35)
    left(135)
    penup()
    forward(10)
    left(45)
    pendown()
    forward(15)
    # De regreso
    penup()
    backward(7.5)
    left(90)
    forward(83.5)
    right(90)
    # OpAmp
    pendown()
    backward(60)
    left(145)
    forward(90)
    left(125)
    forward(100)
    left(125)
    forward(90)
    # De regreso del OpAmp
    penup()
    backward(90)
    left(55)
    forward(20)
    left(90)
    pendown()
    forward(30)
    left(90)
    forward(30)
    right(90)
    # Fuente
    circle(15)
    # Linea despues de fuente
    penup()
    left(90)
    forward(30)
    pendown()
    forward(30)
    # Tierra 2
    right(90)
    forward(25.7)
    backward(55)
    left(45)
    penup()
    forward(10)
    right(45)
    pendown()
    forward(35)
    left(135)
    penup()
    forward(10)
    left(45)
    pendown()
    forward(15)
    # Signo positivo.
    penup()
    forward(33)
    left(90)
    forward(105)
    pendown()
    forward(8)
    backward(4)
    left(90)
    forward(4)
    backward(8)
    penup()
    forward(4)
    right(90)
    # Signo negativo.
    forward(54)
    left(90)
    pendown()
    forward(4)
    backward(8)

    turtle.exitonclick()

boton2 = Button(ventana, text="Opamp No Inversor", command=mostrar_NoInversor, width=15, height=2)
boton2.grid(row=2, column=3, padx=10, pady=5)



def mostrar_Sumador():
    title('Amplificador Sumador')
    speed(0)
    # Diagrama a la izquierda
    penup()
    backward(280)
    pendown()
    # Tierra 1
    forward(15)
    penup()
    left(45)
    forward(10)
    left(135)
    pendown()
    forward(35)
    penup()
    right(45)
    forward(10)
    right(135)
    pendown()
    forward(55)
    # Fuente 1
    backward(27.5)
    left(90)
    forward(40)
    right(90)
    circle(15)
    # Antes de R1
    penup()
    left(90)
    forward(30)
    pendown()
    forward(40)
    right(90)
    forward(250)
    # Resistencia 1
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R1
    forward(60)
    backward(40)
    right(90)
    forward(40)
    right(90)
    forward(20)
    # Resistencia 2
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R2
    forward(170)
    left(90)
    forward(30)
    # Fuente 2
    right(90)
    circle(15)
    # Post fuente 2
    penup()
    left(90)
    forward(30)
    pendown()
    forward(40)
    # Tierra 2
    right(90)
    backward(27.5)
    forward(55)
    left(135)
    penup()
    forward(10)
    pendown()
    left(45)
    forward(35)
    right(135)
    penup()
    forward(10)
    pendown()
    right(45)
    forward(15)
    # De regreso
    penup()
    backward(7.5)
    right(90)
    forward(115)
    right(90)
    forward(226)
    right(90)

    pendown()
    forward(40)
    right(90)
    forward(20)
    # Resistencia 3
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R3
    forward(90)
    left(90)
    forward(30)
    # Fuente 3
    right(90)
    circle(15)
    # Post fuente 3
    penup()
    left(90)
    forward(30)
    pendown()
    forward(40)
    # Tierra 3
    right(90)
    backward(27.5)
    forward(55)
    left(135)
    penup()
    forward(10)
    pendown()
    left(45)
    forward(35)
    right(135)
    penup()
    forward(10)
    pendown()
    right(45)
    forward(15)
    # De regreso
    penup()
    right(180)
    forward(154)
    left(90)
    forward(197)
    right(90)
    forward(40)
    pendown()
    # Triangulo
    left(90)
    forward(20)
    right(120)
    forward(80)
    right(120)
    forward(80)
    right(120)
    forward(60)
    # Post Triangulo
    penup()
    left(90)
    forward(20)
    pendown()
    right(90)
    forward(60)
    right(90)
    forward(30)
    # Resistencia f
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post Rf
    forward(40)
    right(90)
    forward(82)
    right(90)
    forward(19)
    backward(38)
    left(90)
    forward(20)
    # Resistencia L
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post Rl
    forward(20)
    # Tierra 5
    right(90)
    backward(27.5)
    forward(55)
    left(135)
    penup()
    forward(10)
    pendown()
    left(45)
    forward(35)
    right(135)
    penup()
    forward(10)
    pendown()
    right(45)
    forward(15)
    # De regreso
    penup()
    forward(14)
    right(90)
    forward(90)
    left(90)
    forward(85)
    left(90)
    forward(20)
    pendown()
    right(90)
    forward(20)
    left(90)
    forward(80)
    # Tierra 4
    right(90)
    backward(27.5)
    forward(55)
    left(135)
    penup()
    forward(10)
    pendown()
    left(45)
    forward(35)
    right(135)
    penup()
    forward(10)
    pendown()
    right(45)
    forward(15)
    # A los signos
    penup()
    right(180)
    forward(38)
    left(90)
    forward(90)
    pendown()
    # Signo positivo
    forward(8)
    backward(4)
    left(90)
    forward(4)
    backward(8)
    penup()
    forward(4)
    right(90)
    forward(40)
    pendown()
    # Signo negativo
    left(90)
    forward(4)
    backward(8)

    turtle.exitonclick()

boton3 = Button(ventana, text="Opamp Sumador", command=mostrar_Sumador, width=15, height=2)
boton3.grid(row=3, column=0, padx=100, pady=5)


def mostrar_Diferencial():
    title('Amplificador de Diferencia')
    speed(0)
    # Diagrama a la izq.
    penup()
    backward(200)
    pendown()
    # Tierra 1
    forward(15)
    penup()
    left(45)
    forward(10)
    left(135)
    pendown()
    forward(35)
    penup()
    right(45)
    forward(10)
    right(135)
    pendown()
    forward(55)
    # Fuente 1
    backward(27.5)
    left(90)
    forward(40)
    right(90)
    circle(15)
    # Antes de R1
    penup()
    left(90)
    forward(30)
    pendown()
    forward(40)
    right(90)
    forward(230)
    # Resistencia 1
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R1
    forward(60)
    backward(30)
    right(90)
    penup()
    forward(40)
    right(90)
    pendown()
    backward(30)
    forward(60)
    # Resistencia 2
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R2
    forward(150)
    left(90)
    forward(30)
    # Fuente 2
    right(90)
    circle(15)
    # Post fuente 2
    penup()
    left(90)
    forward(30)
    pendown()
    forward(30)
    # Tierra 2
    right(90)
    backward(27.5)
    forward(55)
    left(135)
    penup()
    forward(10)
    pendown()
    left(45)
    forward(35)
    right(135)
    penup()
    forward(10)
    pendown()
    right(45)
    forward(15)
    # De regreso
    penup()
    right(180)
    forward(230)
    left(90)
    forward(106)
    forward(40)
    right(90)
    forward(25)
    # Triangulo
    pendown()
    left(90)
    forward(20)
    right(120)
    forward(80)
    right(120)
    forward(80)
    right(120)
    forward(60)
    # Post triangulo
    left(90)
    forward(30)
    right(90)
    forward(60)
    right(90)
    forward(30)
    # Resistencia 3
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R3
    forward(53)
    right(90)
    forward(82)
    right(90)
    forward(19)
    backward(38)
    left(90)
    forward(40)
    # Resistencia L
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post Rl
    forward(20)
    # Tierra 4
    right(90)
    backward(27.5)
    forward(55)
    left(135)
    penup()
    forward(10)
    pendown()
    left(45)
    forward(35)
    right(135)
    penup()
    forward(10)
    pendown()
    right(45)
    forward(15)
    # De regreso
    penup()
    forward(132)
    right(90)
    forward(91)
    pendown()
    right(180)
    forward(30)
    # Resistencia 4
    left(75)
    forward(10)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(20)
    right(145)
    forward(20)
    left(145)
    forward(10)
    right(75)
    # Post R4
    forward(20)
    # Tierra 3
    right(90)
    backward(27.5)
    forward(55)
    left(135)
    penup()
    forward(10)
    pendown()
    left(45)
    forward(35)
    right(135)
    penup()
    forward(10)
    pendown()
    right(45)
    forward(15)
    # A los signos
    penup()
    right(180)
    forward(45)
    left(90)
    forward(96)
    # Signo positivo
    pendown()
    forward(8)
    backward(4)
    left(90)
    forward(4)
    backward(8)
    penup()
    forward(4)
    right(90)
    forward(40)
    pendown()
    # Signo negativo
    left(90)
    forward(4)
    backward(8)

    turtle.exitonclick()

boton4 = Button(ventana, text="Opamp Diferencial", command=mostrar_Diferencial, width=15, height=2)
boton4.grid(row=3, column=3, padx=10, pady=5)


def Salir():
    salir = messagebox.askquestion("Salir", "¿Deseas salir de la ventana?")
    if salir == 'yes':
        ventana.quit()
        ventana.destroy()


boton5 = Button(ventana, text="Salir", command=Salir, width=20, height=2)
boton5.grid(row=4, column=0, columnspan=6, padx=360, pady=10)




ventana.mainloop()
