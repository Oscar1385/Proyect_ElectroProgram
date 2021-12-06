
from tkinter import *
from tkinter import messagebox, ttk
from PIL import ImageTk, Image
from turtle import *
import tools
from tools import *


ventana = Tk()
ventana.title("Circuitos electricos")
ventana.geometry('500x600')
ventana.state('zoomed')




opInv = Image.open('opamp_Inversor.png')
opInv = opInv.resize((150, 150))
opInv = ImageTk.PhotoImage(opInv)
inversor_label = Label(ventana, image=opInv)
inversor_label.image = opInv
inversor_label.grid(row=0, column=0, padx=5, pady=5)



def mostrar_img():
    opInv = Image.open('opamp_Inversor.png')
    opInv = opInv.resize((110, 110))
    opInv = ImageTk.PhotoImage(opInv)
    inversor_label = Label(ventana, image=opInv)
    inversor_label.image = opInv
    inversor_label.grid(row=0, column=0, columnspan=2, padx=5, pady=5)

inversor_label = Label(ventana)
inversor_label.grid(row=0, columnspan=2, padx=5, pady=5)

boton1 = Button(ventana, text="Opamp Inversor", command= mostrar_img, width= 15, height=2)
boton1.grid(row=1, column=0, padx=50, pady=5)




def mostrar_NoInversor():
    title('Amplificador No Inversor')
    speed(0)

    penup()
    forward(10)
    left(90)
    pendown()
    forward(20)
    left(90)
    forward(70)

    # resistencia

    left(75)
    forward(8)
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
    # fin resistencia
    forward(30)
    left(90)
    forward(40)
    right(90)
    circle(10)
    penup()
    left(90)
    forward(20)
    pendown()
    forward(40)

    # triangulo

    penup()
    left(180)
    forward(100)
    right(90)
    forward(136)
    pendown()
    speed(0)
    right(180)
    forward(35)
    right(90)
    forward(50)
    right(90)
    forward(40)

    # resistencia

    left(75)
    forward(8)
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
    # fin
    forward(40)
    right(90)
    forward(70)
    left(90)
    forward(35)
    right(90)
    forward(100)
    left(180)
    forward(100)
    left(90)
    forward(70)
    right(40)
    forward(60)
    left(130)
    forward(75)
    left(130)
    forward(59)

    left(140)
    forward(50)

    mainloop()


boton2 = Button(ventana, text="Opamp No Inversor", command= mostrar_NoInversor, width= 15, height=2)
boton2.grid(row=1, column=1, padx=50, pady=5)


def mostrar_Sumador():
    title('Amplificador Sumador')
    speed(0)

    penup()
    forward(10)
    left(90)
    pendown()
    forward(20)
    left(90)
    forward(70)

    mainloop()

boton3 = Button(ventana, text="Opamp Sumador", command= mostrar_Sumador, width= 15, height=2)
boton3.grid(row=2, column=0, padx=5, pady=5)

def mostrar_Diferencial():
    title('Amplificador Diferencial')
    speed(0)

    penup()
    forward(10)
    left(90)
    pendown()
    forward(20)
    left(90)
    forward(70)

    mainloop()

boton4 = Button(ventana, text="Opamp Diferencial", command= mostrar_Diferencial, width= 15, height=2)
boton4.grid(row=2, column=1, padx=50, pady=5)


def Salir():
    salir = messagebox.askquestion("Salir", "¿Deseas salir de la ventana?")
    if salir == 'yes':
        ventana.quit()
        ventana.destroy()

boton5 = Button(ventana, text="Salir", command=Salir, width=20, height=2)
boton5.grid(row=3, column=0, columnspan=3, padx=50, pady=10)






#OpNoInv = Image.open('')
#OpNoInv = OpNoInv.resize((110, 110))
#OpNoInv = ImageTk.PhotoImage(OpNoInv)

#OpSum = Image.open('')
#OpSum = OpSum.resize((110, 110))
#OpSum = ImageTk.PhotoImage(OpSum)

#OpDif = Image.open('')
#OpDif = OpDif.resize((110, 110))
#OpDif = ImageTk.PhotoImage(OpDif)





#label_NoInv = Label(image=OpNoInv)




ventana.mainloop()
