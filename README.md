
<img width="1535" height="1370" alt="image" src="https://github.com/user-attachments/assets/a9e8f441-e436-48ad-b8e2-6c9cf515cd65" />

# Ritmo de Festa Advance:
Esta é a versão mais recente e atualizada do Ritmo de Festa Advance, baseada na descompilação WIP do Rhythm Tengoku.
“Ritmo de Festa Advance” é um fork e patch de tradução para o Rhythm Tengoku em PT-BR, baseado no projeto [Rhythm Heaven Advance](https://github.com/RHAdvance/RhythmHeavenAdvance).
Este projeto (assim como a própria descompilação) **é um trabalho em andamento!**, o que significa que ainda não está completo e, portanto, não há link para download disponível.
No entanto, as instruções sobre como construir a descompilação, e portanto o projeto, estão disponíveis abaixo. E quando o projeto estiver suficientemente avançado para ser lançado, um patch estará disponível para download.

Para quaisquer perguntas, sugestões ou testes de jogabilidade, consulte o [servidor Discord do Rhythm Heaven Advance](https://discord.gg/8PET8w8PU8) no canal [Ritmo de Festa Advance](https://discord.com/channels/829444874751180911/1441382641705160758)!
Eu, Nyoka, estou procurando pessoas para me ajudar com traduções de textos e gráficos.
Então, se você quer contribuir, será muito mais do que bem-vindo!
Não estou planejando dublagem, mas qualquer dublagem está bem vinda para entrar no patch!

## Instalação

Para instalar o projeto, você precisa ter acesso a um terminal Linux. Se você estiver no Windows 10 ou 11, pode acessar um terminal Linux facilmente instalando o **WSL (Windows Subsystem for Linux)**. Se você já estiver no Linux, pode pular para a seção **Instalando dependências**. Caso contrário, siga este guia para instalar o WSL:

#### Instalando o WSL

Para instalar o WSL, primeiro abra uma janela do Prompt de Comando ou do Windows PowerShell como administrador. Execute o comando `wsl --install` para instalar automaticamente o WSL com a distribuição Ubuntu como padrão. Quando o processo terminar, reinicie o computador para concluir a instalação.

*Observação: você precisará habilitar a virtualização nas configurações da BIOS para usar o WSL. Portanto, se encontrar problemas, verifique como inicializar a BIOS e habilitar a virtualização no seu computador. Para quaisquer outros problemas com a instalação, consulte o [guia de instalação oficial](https://docs.microsoft.com/en-us/windows/wsl/install).*
<br>
Depois que o WSL estiver instalado, ao abri-lo, será solicitado que você digite um nome de usuário e uma senha. Observe que, ao digitar a senha, os caracteres não serão exibidos, nem mesmo como asteriscos, portanto, digite com cuidado, pois você precisará lembrar sua senha.

Depois de criar um usuário, você deve executar mais dois comandos para concluir a configuração do seu terminal. Primeiro, execute `sudo apt update` e, depois que esse comando for concluído, execute `sudo apt upgrade`. Esses comandos exigirão que você digite sua senha. Quando for solicitado `Do you want to continue? [Y/n]`, basta digitar `y`. Depois de fazer isso, o WSL estará totalmente configurado e pronto para uso.
<BR>
Também é recomendável montar o WSL em uma letra de unidade para acessar seu sistema de arquivos WSL a partir do Windows com mais facilidade. Para fazer isso, siga [este guia](https://github.com/HackerN64/HackerSM64/wiki/Mounting-WSL-to-Drive).

Se você não estiver familiarizado com o terminal Linux, um comando útil a saber é `cd`, que alterará o diretório de trabalho atual. `cd ~/` o levará ao seu diretório home, onde é recomendável armazenar o repositório. Além disso, copiar e colar no terminal WSL é feito clicando com o botão direito do mouse em vez de Ctrl+C / Ctrl+V. Portanto, para colar os comandos deste guia no seu terminal, basta copiá-los com Ctrl+C e clicar com o botão direito do mouse no seu terminal para colar.


#### Instalando dependências

Para instalar as dependências necessárias para o projeto, primeiro execute este comando:

`sudo apt install build-essential binutils-arm-none-eabi git libpng-dev ffmpeg`

Depois disso, você também deve executar este comando:

`sudo ln -s /proc/self/mounts /etc/mtab`

Este comando pode ajudar com problemas com o WSL ao instalar o devkitPro. Nem sempre é necessário executá-lo e pode gerar um erro. Se ocorrer um erro, não se preocupe e simplesmente avance para a próxima etapa.

Depois disso, você precisará instalar o devkitPro. Este processo é muito complexo, então basta executar todos os comandos listados nesta ordem, digitando sua senha quando solicitado:

`wget https://apt.devkitpro.org/install-devkitpro-pacman`
`chmod +x ./install-devkitpro-pacman`
`sudo ./install-devkitpro-pacman`
`export DEVKITPRO=/opt/devkitpro`
`export DEVKITARM=/opt/devkitpro/devkitARM`
`export DEVKITPPC=/opt/devkitpro/devkitPPC`
`sudo dkp-pacman -Sy`
`sudo dkp-pacman -S gba-dev`

Após executar o comando final, pressione Enter e digite `y` para concluir a instalação.


#### Clonando o repositório

Agora você está pronto para clonar o repositório. Primeiro, navegue até o seu diretório home com `cd ~/` e execute este comando:

`git clone https://github.com/TheRC4/RitmoDeFestaAdvance.git rt`

Isso clonará o repositório em uma pasta chamada `rt` no seu diretório home. Você pode alterar `rt` para outro nome, se desejar nomear a pasta do repositório de outra forma.

Antes de compilar a ROM, você também precisará instalar o agbcc, o compilador usado para o Rhythm Tengoku. Certifique-se de que ainda está no seu diretório home e execute

`git clone https://github.com/pret/agbcc`

Depois disso, navegue até o diretório agbcc com `cd ~/agbcc` e compile o compilador executando `./build.sh`. Por fim, instale o compilador no repositório Rhythm Heaven Advance executando `./install.sh ~/rt`.

Por último, você precisará adquirir uma ROM Rhythm Tengoku rev0 não modificada para compilar o projeto. Essa ROM não é fornecida e você mesmo deve obtê-la. Depois de obter essa ROM, renomeie-a para `baserom.gba` e coloque-a no diretório `rt`.


#### Compilando a ROM

Você está finalmente pronto para compilar o repositório! Navegue até a pasta do repositório com `cd ~/rt` e compile a ROM executando `make -j`. (O parâmetro `-j` faz com que o processo de compilação possa ser executado em vários núcleos da sua CPU, acelerando bastante o processo.) Quando a ROM terminar de ser criada, ela gerará um arquivo em `build/rhythmheavenadvance.gba`! Essa é a sua ROM compilada.

Se você tiver outras dúvidas ou preocupações, entre no [servidor Discord do RHModding](https://discord.com/invite/ps4rq53)!

## Créditos Ritmo de Festa Advance

Tradução e localização:
+ Nyoka

Suporte à localização:
+ Itaific

#### Créditos Rhythm Heaven Advance

Montagem de ativos:
+ SkyeStage
+ Cash Banooka
+ geometricentric
+ somethingAccurate
+ TinyCastleGuy
+ The Eggo55
+ Vincells
+ WindowsTiger
+ Kievit
+ NotWario
+ amdree
+ patataofcourse
+ Nate Candles

Design gráfico:
+ Tailx
+ vincells
+ Borists

Programação principal:
+ Itaific
+ ShaffySwitcher

Contribuições de codificação:
+ Deni_iguess
+ patataofcourse
+ Arthurtilly
+ Estexnt
+ Nibblez
+ Conhlee
+ MissKnowledge

Tradução e localização:
+ Mizuka Lover
+ ShaffySwitcher
+ somethingAccurate
+ patataofcourse
+ castle

Suporte à localização:
+ Cash Banooka
+ SkyStage
+ RedRobocon
+ ThisIsMyUsername

SFX:
+ Rhythm Heaven Megamix
+ Cherryberryfaygo
+ Nabix e toda a sua família

Teste de bugs:
Todos no Discord do Rhythm Heaven Advance!
Com menção especial a nwqol

Obrigado a todos pelo apoio!

Want to be here? Join our [Server!](https://discord.gg/8PET8w8PU8)
