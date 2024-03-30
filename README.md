# tl1-tp1-2024-patojeder
## Gitignore

**Gitignore** :
El archivo .gitignore es un archivo de configuración _utilizado por Git para especificar qué archivos y directorios se deben ignorar en un repositorio_. Es conveniente incluirlo en un proyecto para evitar que archivos temporales, archivos de compilación, archivos de configuración local o cualquier otro tipo de archivos irrelevantes para el repositorio se agreguen accidentalmente al control de versiones.
### ¿Por qué es conveniente incluirlo?

- Evita la sobrecarga del repositorio: Al ignorar archivos que no son necesarios para el desarrollo o la distribución del proyecto, se evita que el repositorio se llene de archivos irrelevantes, lo que reduce su tamaño y mejora la velocidad de clonación y operaciones relacionadas con Git.

- Evita problemas de compatibilidad: Algunos archivos generados automáticamente por el sistema operativo, IDEs o herramientas de compilación pueden ser específicos de plataformas o sistemas operativos particulares. Ignorar estos archivos garantiza que el proyecto sea compatible en diferentes entornos.

- Mejora la claridad y organización: Al mantener solo los archivos relevantes para el proyecto en el control de versiones, se facilita la navegación por el repositorio y se mejora la claridad y organización del código.

### ¿Cuando se debe hacer?

El archivo **.gitignore** se debe crear y configurar tan pronto como se inicia un nuevo repositorio Git. Sin embargo, es común que se actualice a medida que se agregan nuevos archivos o dependencias al proyecto. Es una buena práctica revisar y ajustar el archivo .gitignore periódicamente para asegurarse de que esté actualizado y refleje los requisitos del proyecto.


### ¿Cómo configuraría el archivo .gitignore?
El archivo .gitignore utiliza patrones simples para especificar qué archivos o tipos de archivos se deben ignorar. Aquí hay algunos ejemplos de cómo podría ser su contenido:

#### Ignorar archivos de compilación y ejecutables
*.exe

*.dll

*.so

*.dylib

*.out

#### Ignorar archivos de configuración de IDEs
.vscode/

.idea/

#### Ignorar archivos de dependencias generados
node_modules/

vendor/

#### Ignorar archivos temporales
*.tmp

*.log

Estos son solo ejemplos y pueden variar según las necesidades del proyecto. Cada línea en el archivo **.gitignore** especifica un patrón para archivos o directorios que se deben ignorar.

### Regla para ignorar un archivo ignorado.txt
Para ignorar un archivo específico, como ignorado.txt, simplemente agrega una línea con el nombre del archivo al archivo **.gitignore**:
para su uso se pueden seguir los siguientes pasos:
1. Abre tu terminal o línea de comandos.
2. Navega hasta la raíz de tu repositorio de Git.
3. Escribe touch . gitignore y presiona Enter.
4. Abre el nuevo archivo 
5. Agrega las rutas del o de los archivos que quieres que git ignore (ej ignorado.txt), cada una en una línea nueva.
6. Guarda y cierra el archivo


Esto asegurará que el archivo ignorado.txt no sea rastreado por Git y se ignore en el repositorio.

# Resolucion de Pregunta, punto 4 apartado g.

En los puntos 2 y 3 se obtiene el mismo resultado, ya que en el punto 2, el valor que almacena la variable **puntero**, es la direccion de memoria correspondiente a la variable **numero**, cuyo direccion de memoria, se imprime en el puto 3. Dicho valor es distinto al punto 4, ya que la variable puntero, al ser una variable, tiene su propia direccion de memoria, independiente del valor que almacene (que en este caso es la direccion dememoria de la variable **numero**)