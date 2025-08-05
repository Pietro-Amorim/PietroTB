# Guia Definitivo Git e GitHub
- Git => Software de Versionamento Local => Faz o Controle de Versões de Arquivos e Pastas de um Projeto de Forma Local, (Git Commit)
- GitHub => Site de Versionamento na Nuvem => FAz o controle de versões na Nuvem (Internet) (Git Push)

## Passo para Criar um Versionamento

- 1º Passo - Instalar o Git no Computador
- 2º Passo - Configurar o Git com Email e Usuário do GitHub
    - git config --global user.name "NomeUsuario"
    - git config --global user.email "meu@email.com"
- 3º Passo - Iniciar o Git na Pasta do Projeto
    - git init (vai criar a pasta oculta .git dentro do Projeto)
    - git remote add origin "o endereço do repositório online"
- 4º Passo - Fazer o Controle de Versão
    - git add . (vai adicionar todos os arquivos para versionamento)
    - git commit -m "Adicionar o Comentario" (faz o versionamento Local)
    - git push -u origin (fazer o versionamento na nuvem)
- 5º Passo - Atualizar Repositorio Local 
    - git pull (pega as informações do GitHub(nuvem) e atualiza localmente(computador))
- 6º Passo - Copiar meu repositório para outro Computador
    - git clone "endereço do repositorio na nuvem"