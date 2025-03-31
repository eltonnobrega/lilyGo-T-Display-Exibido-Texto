#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();

void setup() {
  // Inicialização do display
  tft.init();
  tft.setRotation(2);  // Experimente valores entre 0-3 para orientação
 
  // Limpa a tela
  tft.fillScreen(TFT_BLACK);
  
  // Configurações de texto
  tft.setTextColor(TFT_WHITE, TFT_BLACK);  // Texto branco, fundo preto
  tft.setTextSize(5);  // Tamanho grande
  
  // Escreve mensagem centralizada
  String mensagem = "Hello";
  int larguraTexto = tft.textWidth(mensagem);
  int x = (tft.height() - larguraTexto) / 2;
  
  tft.setCursor(x, tft.width() / 2);
  tft.print(mensagem);
}

void loop() {}
