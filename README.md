# lilyGo-T-Display-Exibido-Texto

Este projeto é focado em demonstrar a exibição de texto no display da placa LilyGO T-Display.

**Importante: Compatibilidade com TTGO T-Display**

Vale ressaltar que a placa **LilyGO T-Display e a TTGO T-Display parecem ser a mesma placa**, ou seja, são compatíveis entre si. Portanto, as instruções e configurações para uma se aplicam à outra.

**Instalação de Bibliotecas e Placas**

Para utilizar este projeto, você precisará instalar a biblioteca `TFT_eSPI` e a placa ESP32 no seu ambiente Arduino IDE. Siga os passos abaixo:

**1. Instalar a Biblioteca TFT_eSPI:**

   *   Abra o Arduino IDE.
   *   Vá em `Sketch` -> `Incluir Biblioteca` -> `Gerenciar Bibliotecas...`
   *   Na janela "Gerenciador de Bibliotecas", digite "TFT_eSPI" na barra de pesquisa.
   *   Procure pela biblioteca "TFT_eSPI" de Bodmer.
   *   Clique em "Instalar" e aguarde a conclusão da instalação.

**2. Instalar a Placa ESP32:**

   *   Abra o Arduino IDE.
   *   Vá em `Arquivo` -> `Preferências`.
   *   No campo "URLs Adicionais para Gerenciadores de Placas", adicione a seguinte URL:
       `https://dl.espressif.com/dl/package_esp32_index.json`
   *   Clique em "OK".
   *   Vá em `Ferramentas` -> `Placa:` -> `Gerenciador de Placas...`
   *   Na janela "Gerenciador de Placas", digite "esp32" na barra de pesquisa.
   *   Procure pela placa "esp32 by Espressif Systems".
   *   Clique em "Instalar" e aguarde a conclusão da instalação.
   * Pode ser que seja necessario reiniciar o IDE, antes de prosseguir com a proxima etapa.

**3. Escolher a Placa ESP32 Dev Module:**

    *   Vá em `Ferramentas` -> `Placa:`
    *   Na lista, selecione a placa "**ESP32 Dev Module**".

**Configurando a Placa no Arquivo de Configuração:**

   A biblioteca `TFT_eSPI` precisa saber qual é o tipo do seu display. Para isso, é necessário editar um arquivo de configuração.

   **4. Editar o arquivo `User_Setup_Select.h`:**

   *   Navegue até o diretório onde a biblioteca `TFT_eSPI` foi instalada. O caminho normalmente é semelhante a este:
       *   `Arduino/libraries/TFT_eSPI/`
   *   Abra o arquivo `User_Setup_Select.h` em um editor de texto (como o bloco de notas ou o próprio editor do Arduino).
   *   **Descomente (remova as duas barras `//`) a linha que inclui o arquivo de configuração da TTGO T-Display.**
   *   Procure por esta linha:
       ```
       //#include <User_Setups/Setup25_TTGO_T_Display.h>
       ```
   *   **Remova as duas barras (`//`) no começo da linha para descomentá-la**, de forma que ela fique assim:
      ```
      #include <User_Setups/Setup25_TTGO_T_Display.h>
      ```
   *   **Importante:** Essa linha específica de configuração (`Setup25_TTGO_T_Display.h`) também funciona para a LilyGO T-Display, devido à sua compatibilidade com a placa TTGO.
   *   Salve o arquivo `User_Setup_Select.h`.

**Pronto!**

Agora você já está pronto para utilizar a biblioteca `TFT_eSPI` com sua placa LilyGO T-Display (ou TTGO T-Display) e executar os exemplos deste projeto!
