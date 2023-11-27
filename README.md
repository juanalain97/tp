# tp
contador de personas
## diagrama de estados y transiciones
![diagrama de estados y transiciones tp  de info 2](https://github.com/juanalain97/tp/assets/145404492/0972af38-20ed-4af5-ab94-f5802d366f13)
### funcionamiento teorico del contador
Vamos a describir el funcionamiento teórico de un contador de personas con sensores infrarrojos en un banco con una capacidad máxima de 30 personas:
1.	Sensores infrarrojos: El sistema está equipado con sensores infrarrojos que emiten un haz de luz infrarroja en una zona específica, por ejemplo, cerca de la puerta de entrada o salida del banco. Estos sensores son capaces de detectar cuando una persona cruza el haz de luz infrarroja.
2.	Configuración de límites: Antes de utilizar el contador de personas, se configura un límite máximo de capacidad, en este caso, será de 30 personas. Este valor se establece como la capacidad máxima permitida en el banco para garantizar el distanciamiento social y por razones de seguridad.
3.	Conteo de entrada y salida: Cuando una persona entra al banco y cruza el haz de luz infrarroja, el sensor detecta el movimiento y aumenta el contador en una unidad. Al contrario, cuando una persona sale del banco, el sensor registra su salida y disminuye el contador en una unidad.
4.	Control de capacidad: El sistema lleva un registro en tiempo real del número de personas dentro del banco. en algún momento el contador alcanzara el límite máximo de 30 personas, en ese momento el sistema activara una alarma y mostrara un mensaje de advertencia en una pantalla, para indicar que el banco ha alcanzado su capacidad máxima.
5.	Visualización de datos: Para informar al personal del banco y a los visitantes, se utilizara una pantalla digital o un indicador luminoso que muestra el número actual de personas dentro del banco en tiempo real.
6.	Registro de datos: Además de mostrar el número actual de personas, el sistema también puede registrar datos sobre el flujo de personas durante el día. Esto puede ser útil para analizar horarios en donde se concentren más personas y asi tomar decisiones informadas sobre la gestión de la capacidad en el banco.
7.	Mantenimiento y ajustes: El contador de personas con sensores infrarrojos debe ser mantenido regularmente para asegurarse de que los sensores estén funcionando correctamente. Además, es posible ajustar el límite de capacidad máxima según las necesidades cambiantes del banco.
8.	Se usaran 2 sensores para diferenciar, uno sumara y el otro restara en el contador, el primer sensor estará entre la puerta del banco y la salida a la calle, cuando esta se active, sumara el contador en 1 unidad y se desactivara el otro sensor q esta entre la puerta y el interior del banco,  caso contrario cuando una persona del interior salga se activara el sensor q resta y se desactivara el otro sensor.
9.	Limitaciones: no se podrá ingresar y salir al mismo tiempo, para q se respete esto, un personal de seguridad estará durante la jornada laboral del banco en la puerta  cumpliendo q se cumpla lo antes mencionado. 
![image](https://github.com/juanalain97/tp/assets/145404492/5db2987f-ba25-458a-a98e-e2f7b144b168)
El límite máximo permitido dentro del banco es de 30 personas                                                                                                                
![image](https://github.com/juanalain97/tp/assets/145404492/d844c3b4-a777-4150-9e4b-c76d44eca5eb)
