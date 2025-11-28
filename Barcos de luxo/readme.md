## ⚓ **MarineScape: Showcase & E-commerce Front-end para o Segmento Náutico Premium**

Este repositório documenta a implementação *front-end* completa do **MarineScape**, uma aplicação web desenvolvida para atuar como vitrine e plataforma e-commerce para a venda de embarcações de alto luxo (iates, lanchas e *jet skis*). O foco principal deste desenvolvimento foi a entrega de um **código limpo, modularizado** e uma **interface de usuário (UI) de alta fidelidade**.

### 🌟 **Arquitetura de Interface e Foco no Usuário**

O projeto foi construído para garantir uma navegação superior e uma experiência de compra visualmente imersiva, destacando-se por:

* **Identidade Visual High-End:** Aplicação consistente de um *Design System* exclusivo com temática "Gold & Black", suportando alternância entre temas Claro e Escuro.
* **Performance e Acessibilidade:** Uso de **Bootstrap 5** para garantir *responsividade* nativa e um layout que se adapta perfeitamente a qualquer dispositivo.
* **Modularidade de Componentes:** Elementos de UI customizados e reutilizáveis (e.g., cartões de produto, botões de ação) definidos via CSS customizado.
* **Acesso Controlado:** Sistema de autenticação (Login/Cadastro) implementado em *modal*, otimizado para o fluxo de conversão.
* **Interatividade Geográfica:** Integração com **Leaflet.js** para mapeamento interativo, aprimorando a experiência de localização da concessionária.

### 💻 **Organização Estrutural e *Asset Management***

A aplicação é dividida em três ambientes principais, cada um com propósito claro:

1.  **Página Central (`index.html`):** Atua como *Entry Point*. Inclui um *call-to-action* principal, *teasers* de produtos e o mapa interativo.
2.  **Vitrine de Produtos (`catalogo.html`):** O coração do e-commerce. Possui um sistema de filtragem categórica **(Iates | Lanchas | Jet Skis)** e exibe os produtos em um *grid* otimizado, geralmente em modo *dark theme* para reforçar o luxo.
3.  **Visualização Detalhada (`SpiritFerretti88.html`, etc.):** Páginas de conversão que apresentam especificações técnicas, descrições detalhadas e um contato direto para negociação.

### 🧩 **Tecnologias e Bibliotecas Chave**

O projeto utiliza um *stack* moderno e focado na otimização *front-end*:

| Tecnologia | Finalidade e Impacto |
| :--- | :--- |
| **HTML5 (Semântico)** | Base estrutural para melhor SEO e acessibilidade. |
| **CSS3 (Custom Properties)** | Estilização avançada, manutenção simplificada e criação do *Design System*. |
| **Bootstrap 5** | *Framework* CSS/JS para *grid system* rápido e componentes padronizados. |
| **JavaScript (Vanilla)** | Manipulação do DOM e lógica para modais e filtros. |
| **Leaflet.js** | Biblioteca leve para renderização de mapas customizados e performáticos. |
| **Google Fonts / FontAwesome** | Tipografia exclusiva (`Playfair Display` & `Roboto`) e conjunto de ícones vetoriais. |

### ✅ **Escopo Entregue e Funcionalidades Concluídas**

* **100% Responsivo:** O layout é plenamente funcional e visualmente consistente em *mobile*, *tablet* e *desktop*.
* **Navegação Bidirecional:** Fluxo de usuário intuitivo entre a página inicial, catálogo e detalhes do produto.
* **Funcionalidade de Filtragem:** Implementação de lógica para filtrar o catálogo sem recarregar a página.
* **UX de Autenticação:** Modal de Login/Cadastro com transições suaves e campos estruturados.
* **Mapeamento Integrado:** Carregamento assíncrono do mapa Leaflet.js na página inicial.
* **Consistência Visual:** Aplicação rigorosa da paleta de cores e tipografia em todos os elementos.
