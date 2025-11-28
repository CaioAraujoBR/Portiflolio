# ⚓ Barcos de Luxo — Website de Venda de Embarcações

> **Projeto de Desenvolvimento Web Front-End**
> **HTML5 • CSS3 • Bootstrap 5 • JavaScript**

Este repositório contém o código-fonte de um website responsivo desenvolvido para a venda e apresentação de embarcações de alto padrão. O projeto simula um e-commerce de luxo, focado na experiência visual, navegação intuitiva e apresentação detalhada de especificações técnicas.

---

## 🛠️ Tecnologias Utilizadas

![HTML5](https://img.shields.io/badge/html5-%23E34F26.svg?style=for-the-badge&logo=html5&logoColor=white)
![CSS3](https://img.shields.io/badge/css3-%231572B6.svg?style=for-the-badge&logo=css3&logoColor=white)
![Bootstrap](https://img.shields.io/badge/bootstrap-%238511FA.svg?style=for-the-badge&logo=bootstrap&logoColor=white)
![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=F7DF1E)
![Leaflet](https://img.shields.io/badge/Leaflet-199900?style=for-the-badge&logo=leaflet&logoColor=white)

O projeto foi construído utilizando as seguintes tecnologias e bibliotecas:

* **Estrutura:** HTML5 Semântico.
* **Estilização:** CSS3 personalizado (`estilos.css`) e framework **Bootstrap 5** para layout responsivo e componentes.
* **Ícones e Fontes:** FontAwesome e Google Fonts (Playfair Display e Roboto).
* **Interatividade:** JavaScript (Vanilla) para filtros e manipulação do DOM.
* **Mapas:** Integração com a biblioteca **Leaflet** para localização da loja.

---

## 🚀 Funcionalidades do Projeto

### 1. Navegação e Layout
* **Design Responsivo:** Adaptável a dispositivos móveis, tablets e desktops através do grid system do Bootstrap.
* **Navbar Fixa:** Menu de navegação intuitivo com acesso rápido às seções principais e botão de login.

### 2. Catálogo Interativo
* **Filtragem Dinâmica:** Sistema de filtros via JavaScript que permite visualizar produtos por categoria: *Todos*, *Iates*, *Lanchas* ou *Jet Skis*, sem necessidade de recarregar a página.
* **Cards de Produtos:** Apresentação elegante com imagem, título, breve descrição e preço.

### 3. Página de Detalhes (Produto)
* **Galeria de Imagens:** Carrossel interativo (Carousel Bootstrap) para visualização de fotos internas e externas da embarcação.
* **Ficha Técnica:** Tabelas organizadas com especificações de motorização, tamanho e capacidade.
* **Custos Operacionais:** Seção informativa sobre consumo de combustível e manutenção.

### 4. Sistema de Usuário (Simulado)
* **Modal de Acesso:** Janela modal com abas alternáveis para **Login** e **Cadastro**, acessível de qualquer página.
* **Formulários Completos:** Campos para captura de dados pessoais, endereço e credenciais.

### 5. Localização
* **Mapa Interativo:** Implementação de mapa via Leaflet mostrando a localização física da loja em Santos-SP.

---

## 📂 Estrutura de Arquivos

Abaixo, a organização das páginas e recursos do projeto:

```text
/
├── index.html              # Página Inicial (Landing Page)
├── catalogo.html           # Listagem de produtos com filtros
├── Cimitarra360HT.html     # Detalhes: Lancha Cimitarra
├── SpiritFerretti88.html   # Detalhes: Iate Ferretti
├── Intermarine95.html      # Detalhes: Iate Intermarine
├── Azimut60.html           # Detalhes: Iate Azimut
├── Focker330GT.html        # Detalhes: Lancha Focker
├── Schaefer400.html        # Detalhes: Lancha Schaefer
├── SeaDooRXTX300.html      # Detalhes: Jet Ski Sea-Doo
├── YamahaGP1800R.html      # Detalhes: Jet Ski Yamaha
├── KawasakiUltra310LX.html # Detalhes: Jet Ski Kawasaki
├── css/
│   ├── bootstrap.min.css
│   └── estilos.css         # Estilos personalizados (Cores douradas/Dark mode)
├── js/
│   ├── bootstrap.bundle.min.js
│   └── configuracoes.js    # Scripts do mapa e lógica geral
└── imagens/
    └── [Imagens das embarcações e logotipo]
