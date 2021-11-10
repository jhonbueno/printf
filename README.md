# _printf function

## Description

This function prints the string supplied with special operators to substitute
according to an specified format.

```
_printf (const char *FORMAT, ARGUMENT...){}
_printf (const char *format,...){}
_printf ("%[OPERATOR]");
```

Prints ARGUMENT(s) according to options in supplied FORMAT string:
FORMAT is the string to print with OPERATORS. Specified formats are:

* %%: a single '%'

* %c ARGUMENT for character type is printed.

* %s ARGUMENT for string type is printed.

* %d/%i ARGUMENT for integer type is printed.

## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [_printf](./_printf.c) | prints any string according to format    |
| [main.h](./main.h)   | containts all the prototypes               |
| [misc.c](./misc.c)   | putchar function and strlen                |
| [strings.c](./strings.c) | functions for printing strings      |
| [numbers.c](./numbers.c) | function for print integer numbers               |

_Finaliza con un ejemplo de cómo obtener datos del sistema o como usarlos para una pequeña demo_

## Ejecutando las pruebas ⚙️

_Explica como ejecutar las pruebas automatizadas para este sistema_

### Analice las pruebas end-to-end 🔩

_Explica que verifican estas pruebas y por qué_

```
Da un ejemplo
```

### Y las pruebas de estilo de codificación ⌨️

_Explica que verifican estas pruebas y por qué_

```
Da un ejemplo
```

## Despliegue 📦

_Agrega notas adicionales sobre como hacer deploy_

## Construido con 🛠️

_Menciona las herramientas que utilizaste para crear tu proyecto_

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - El framework web usado
* [Maven](https://maven.apache.org/) - Manejador de dependencias
* [ROME](https://rometools.github.io/rome/) - Usado para generar RSS

## Contribuyendo 🖇️

Por favor lee el [CONTRIBUTING.md](https://gist.github.com/villanuevand/xxxxxx) para detalles de nuestro código de conducta, y el proceso para enviarnos pull requests.

## Wiki 📖

Puedes encontrar mucho más de cómo utilizar este proyecto en nuestra [Wiki](https://github.com/tu/proyecto/wiki)

## Versionado 📌

Usamos [SemVer](http://semver.org/) para el versionado. Para todas las versiones disponibles, mira los [tags en este repositorio](https://github.com/tu/proyecto/tags).

## Autores ✒️

_Menciona a todos aquellos que ayudaron a levantar el proyecto desde sus inicios_

* **Andrés Villanueva** - *Trabajo Inicial* - [villanuevand](https://github.com/villanuevand)
* **Fulanito Detal** - *Documentación* - [fulanitodetal](#fulanito-de-tal)

También puedes mirar la lista de todos los [contribuyentes](https://github.com/your/project/contributors) quíenes han participado en este proyecto. 

## Licencia 📄

Este proyecto está bajo la Licencia (Tu Licencia) - mira el archivo [LICENSE.md](LICENSE.md) para detalles

## Expresiones de Gratitud 🎁

* Comenta a otros sobre este proyecto 📢
* Invita una cerveza 🍺 o un café ☕ a alguien del equipo. 
* Da las gracias públicamente 🤓.
* etc.




⌨️ con ❤️ por [Villanuevand](https://github.com/Villanuevand) 😊