# tab5-app-gallery

Aplicativo **Galeria** para o sistema operacional **Tab5 OS** (M5Stack Tab5 / ESP32-P4), desacoplado e compilado para execução isolada em WebAssembly (WAMR).

## Características

- Exibição de fotos JPEG/BMP do cartão microSD (`/sdcard/imagens`)
- Navegação por botões, gestos ou toque nas laterais
- Exclusão de fotos com modal de confirmação
- Atalho direto para a Câmera
- Interface delegada à **Host View nativa** (`ui_gallery_view`) do sistema operacional

## Como Compilar e Gerar o Pacote

```bash
# Executa o script de empacotamento
./tools/build.sh
```

O pacote resultante `com.tab5.gallery.tab5pkg` será criado na pasta `dist/` e pode ser instalado diretamente no dispositivo via Cartão SD (`/sdcard/apps/`) ou embutido na partição de sistema do Tab5 OS.

## Licença

MIT License.
