## 🌬️ Sistema Inteligente de Monitoramento da Qualidade do Ar

Este projeto detalha a **concepção e a arquitetura do banco de dados** subjacente a uma plataforma de monitoramento ambiental em tempo real, projetada para cidades inteligentes. O objetivo é fornecer uma documentação técnica completa que abrange desde a abstração inicial dos requisitos até a implementação final do esquema de banco de dados.

O repositório está organizado nas seguintes fases de desenvolvimento da modelagem de dados:

---

### 1. 🖼️ Esquema de Alto Nível (Modelo Conceitual)

Esta seção apresenta a **visão macro** do sistema através do Diagrama Entidade-Relacionamento (DER). Foca na identificação das entidades centrais (como estações, sensores e medições), seus atributos cruciais e os relacionamentos fundamentais, sem se prender a especificidades técnicas de implementação. É a fundação para a compreensão dos requisitos de dados.

### 2. 🔗 Estrutura Relacional (Modelo Lógico)

Aqui, o modelo conceitual é transformado em um **esquema relacional formal**. Esta etapa define a estrutura das tabelas, implementa as regras de normalização (garantindo a integridade e reduzindo a redundância), e estabelece as chaves primárias (**PK**) e chaves estrangeiras (**FK**) necessárias para conectar e manter a consistência dos dados.

### 3. ⚙️ Script de Implementação (Modelo Físico)

Contém o **código Data Definition Language (DDL)**, pronto para ser executado em um Sistema Gerenciador de Banco de Dados (SGBD) específico (ex: PostgreSQL, MySQL). Este *script* inclui os comandos `CREATE TABLE`, definindo os tipos de dados exatos, tamanhos e todas as restrições de nível de coluna/tabela.

### 4. 📚 Catálogo de Dados (Dicionário de Dados)

Esta é a **referência técnica e funcional** mais detalhada do banco de dados. Para cada tabela e coluna, são especificados:
* **Nome:** Identificador técnico no banco de dados.
* **Descrição Funcional:** O que o atributo representa no contexto do sistema.
* **Tipo e Tamanho:** O formato e a capacidade máxima do dado.
* **Restrições:** Regras aplicadas (ex: `UNIQUE`, `CHECK`).
* **Obrigatoriedade:** Se o campo pode ou não aceitar valores nulos.

---

Este material serve como o **Plano Diretor** para a implementação e manutenção do banco de dados do Sistema de Controle de Qualidade do Ar.