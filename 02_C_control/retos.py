# Reto 1

print('Bienvenido al Reto 1')
name = input('¿Cuál es tu nombre: ?')
greeting = f'Hola {name}, gusto en conocerte!'

print(greeting)

# Reto 2
print('Bienvenido al Reto 2')
name = input('¿Cuál es tu nombre: ?')
surname = input('¿Cuál es tu apellido: ?')
greeting = f'Hola {name} {surname}, gusto en conocerte!'

print(greeting)

# Reto 3 

platzi_categorias = ['Desarrollo e Ingenieria','Diseño y UX', 'Marketing','Negocios y emprendimiento','Producción Audiovisual','Crecimiento Profesional']

print('Platzi cuenta con cursos de: ')
for categorias in platzi_categorias:
  print(categorias)

# Reto 4
num1=float(input('escribe numero: '))
num2=float(input('escribe otro número: '))

suma_num1_num2 = num1+num2

print(f'La suma de {num1} y {num2} es = {suma_num1_num2}')

# Reto 5

num1=float(input('escribe un número:'))
num2=float(input('escribe otro número:'))

suma_num1_num2 = num1+num2

print(f'La suma de {num1} y {num2} es = {suma_num1_num2}')

num3=float(input('escribe otro número: '))

mult_num3 = suma_num1_num2*num3

print(f'La multiplicación de {suma_num1_num2}({num1} + {num2}) es = {mult_num3}')

# Reto 6
# Fiesta pizza
cant_rebanadas_pizza = int(input('¿Cúantas rebanadas de pizza trajiste: ?'))
print(f'Traje {cant_rebanadas_pizza} rebanadas de pizza')

cant_rebanadas_consumidas = int(input('¿Cúantas rebanadas de pizza comieron: ?'))
print(f'comimos {cant_rebanadas_consumidas} rebanadas, estaban buenisimas')

cant_rebanadas_restantes = cant_rebanadas_pizza - cant_rebanadas_consumidas
print(f'Quedan {cant_rebanadas_restantes} rebanadas de pizza ')

# Reto 7 

def AgePastFuture(name,age):
  name = input('¿Cuál es tu nombre?: ')
  age = int(input('¿Cuántos años tenes?: '))
  past_age = age - 1
  future_age = age + 1

  message = f'{name}, el año pasado tenias {past_age} años y el próximo año tendrás {future_age} años'
  print(message)

AgePastFuture(name,age)

# Reto 8

bill = float(input('Cuánto es el total que se debe pagar?: '))
n_people_pay = int(input('¿Cuántas personas van a pagar?: '))
tip = int(input('¿Cuál es el porcentaje de propina que se va a pagar?: '))#porcentaje
taxes = int(input('¿Cuál es el porcentaje de impuestos que se van a pagar?: '))#porcentaje 

def DivideBill(bill,n_people_pay,tip,taxes): 
  #porcentaje a dinero propina
  amount_tip = (bill * tip) / 100

  #porcentaje a dinero impuestos
  amount_taxes = (bill * taxes) / 100
  
  bill_tip_taxes = bill + amount_tip + amount_taxes
  total_per_person = bill_tip_taxes / n_people_pay
  print(f'El total a pagar incluyendo propina e impuestos es de {bill_tip_taxes}')
  print(f'El total a pagar por persona incluyendo impuestos y propina es de {total_per_person}')

DivideBill(bill,n_people_pay,tip,taxes)

# Reto 9

# Reto 9
#1dia-->24hs-->1440min-->86400seg
print('Conversor de días a minutos y segundos: ')
amount_days = int(input('Escribí una cantidad de días: '))

def days_calculation(amount_days):
  #Regla de 3 simple
  hours = (amount_days * 24) / 1
  minutes = (hours * 60) / 1
  seconds = (minutes * 3600) / 60

  print(f'En {amount_days} días ,hay un total de {hours} horas o {minutes} minutos o {seconds} segundos')

days_calculation(amount_days)

# Reto 10
# 1.609344 km en una milla (mi)

amount_mi = float(input('Escribí una cantidad de millas que deseas convertir a kilometros: '))

def MileConverterToKm(amount_mi):
  km = (amount_mi * 1.609344) / 1

  print(f'{amount_mi} millas es igual {km} kilometros')

MileConverterToKm(amount_mi)

# Reto 11
user_num1 = float(input('Escribí un núm mayor a 1000: '))
user_num2 = float(input('Escribí un numero menor a 100: '))

if user_num1 > 1000and user_num2 < 100:
        defAmountTimes(user_num1,user_num2):
            amount_time = user_num1 / user_num2
            message=f'El número {user_num2} entra {amount_time} veces en {user_num2}'
            print(message)
        

else:
    user_num1 = float(input('Escribí un número mayor a 1000: '))
    user_num2 = float(input('Escribí un numero menor a 100: '))

AmountTimes(user_num1,user_num2)