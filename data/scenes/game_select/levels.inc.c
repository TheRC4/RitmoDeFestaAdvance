// Level Entries Table
struct LevelData level_data_table[] = {
    /* KARATE_MAN */ {
        /* Entry Scene   */ &scene_karate_man,
        /* Level Name    */ "Carateca",
        /* Level Desc.   */ "A chave do caratàÆ\n"
                            "como todas as coisas, áQ o\n"
                            "ritmo. Agora, vamos lanàπar algumas\n"
                            "coisas para vocàÆ socar.",
        /* Level Icon    */ 8,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Sempre hác um amanhàÆ..",
            /* OK        */ "Vamos fazer uma pausa para o almoàπo agora!",
            /* SUPERB    */ "Olha sái para todas estas coisas que eu esmurrei!"
        }
    },
    /* KARATE_MAN_2 */ {
        /* Entry Scene   */ &scene_karate_man_2,
        /* Level Name    */ "Carateca 2",
        /* Level Desc.   */ "Hác algo de errado\n"
                            "com a velocidade! Cuidado,\n"
                            "pois vamos lanàπar-lhe\n"
                            "mais coisas para socar.",
        /* Level Icon    */ 0,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Afinal, quem se importa com a velocidade!",
            /* OK        */ "Bem, áQ isso. Vamos comer!",
            /* SUPERB    */ "Acho que jác vimos tudo!"
        }
    },
    /* CLAPPY_TRIO */ {
        /* Entry Scene   */ &scene_clappy_trio,
        /* Level Name    */ "Trio Palmada",
        /* Level Desc.   */ "Bata palmas em\n"
                            "ordem! VocàÆ áQ o terceiro\n"
                            "a bater. Fique de olho\n"
							"nos outros dois!",
        /* Level Icon    */ 4,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_clappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "O trio acabou de se separar!",
            /* OK        */ "VocàÆprecisa participar mais das nossas sessıes de treino...",
            /* SUPERB    */ "Tri-áitimo!"
        }
    },
    /* SNAPPY_TRIO */ {
        /* Entry Scene   */ &scene_snappy_trio,
        /* Level Name    */ "Tour Em Trio!",
        /* Level Desc.   */ "Olhe para o trio com suas\n"
                            "roupas ocidentais!\n"
                            "Tà∫o legais! Ousamos dizer\n"
                            "que eles parecem... elegantes?",
        /* Level Icon    */ 10,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_snappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Gastei tudo o que tinha nesta roupa!",
            /* OK        */ "Estácvamos t„o perto...",
            /* SUPERB    */ "Sincronia perfeita! Deve ser pelas roupas, certo?"
        }
    },
    /* POLYRHYTHM */ {
        /* Entry Scene   */ &scene_polyrhythm,
        /* Level Name    */ "Polirritmo",
        /* Level Desc.   */ "Gerencie os caminhos\n"
							"áO e áM ao mesmo tempo\n"
							"para manter as coisas vermelhas\n"
							"rolando! Simples, nà∫o áQ?",
        /* Level Icon    */ 3,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Produzir isso em massa serác mais difáecil do que eu pensava...",
            /* OK        */ "Ainda estou aprendendo a fazer essas coisas vermelhas!",
            /* SUPERB    */ "Produzimos mais do que podemos armazenar!"
        }
    },
    /* POLYRHYTHM_2 */ {
        /* Entry Scene   */ &scene_polyrhythm_2,
        /* Level Name    */ "Polirritmo 2",
        /* Level Desc.   */ "Os caminhos da esquerda\n"
                            "e da direita tàÆm padroes à¶nicos!\n"
                            "Preste atenàπà∫o ao ritmo\n"
                            " e toque ao polirritmo!",
        /* Level Icon    */ 51,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Precisamos produzir muito mais coisas vermelhas...",
            /* OK        */ "Produzir mais dessas coisas vermelhas nà∫o faria mal nenhum!",
            /* SUPERB    */ "A produàπà∫o de coisas vermelhas estác em alta!"
        }
    },
    /* NIGHT_WALK */ {
        /* Entry Scene   */ &scene_night_walk,
        /* Level Name    */ "Passeio Noturno",
        /* Level Desc.   */ "O que áQ melhor do que\n"
                            "um passeio sob a luz das estrelas?\n"
                            "Que tal uma sáQrie de\n"
                            "saltos sob a luz das estrelas?",
        /* Level Icon    */ 7,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nà∫o vi esse buraco no escuro!",
            /* OK        */ "Nada como um passeio ág noite.",
            /* SUPERB    */ "VocàÆ nos seguiu atáQ aqui!"
        }
    },
    /* NIGHT_WALK_2 */ {
        /* Entry Scene   */ &scene_night_walk_2,
        /* Level Name    */ "Passeio Noturno 2",
        /* Level Desc.   */ "Hora de mergulhar na\n"
                            "luz das estrelas novamente!\n"
                            "Fique atento\n"
                            "aos peixes eláQtricos.",
        /* Level Icon    */ 41,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nà∫o! VocàÆ caiu!",
            /* OK        */ "A brisa noturna áQ tà∫o fresca...",
            /* SUPERB    */ "VocàÆ fez amizade com as estrelas!"
        }
    },
    /* RHYTHM_TWEEZERS */ {
        /* Entry Scene   */ &scene_rhythm_tweezers,
        /* Level Name    */ "Curto e Grosso",
        /* Level Desc.   */ "\n"
                            "Minhas raáezes està∫o aparecendo!\n"
                            "VocàÆ pode arrancác-las?\n",
        /* Level Icon    */ 14,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nà∫o consigo vender isto!",
            /* OK        */ "Po-por que meus vegetais està∫o crescendo cabelo?",
            /* SUPERB    */ "Tà∫o fresco e limpo! AtáQ o ar tem um sabor delicioso!"
        }
    },
    /* RHYTHM_TWEEZERS_2 */ {
        /* Entry Scene   */ &scene_rhythm_tweezers_2,
        /* Level Name    */ "Curto e Grosso 2",
        /* Level Desc.   */ "Minhas raáezes està∫o\n"
                            "crescendo novamente!\n"
                            "Por favor, arranque-as\n"
                            "novamente!",
        /* Level Icon    */ 25,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Por que vocàÆ tem que ser tà∫o peludo!?",
            /* OK        */ "Por que sái os nossos vegetais tàÆm pelos, afinal...?",
            /* SUPERB    */ "Que revigorante! AtáQ o ar estác agradácvel e fresco!"
        }
    },
    /* SICK_BEATS */ {
        /* Entry Scene   */ &scene_sick_beats,
        /* Level Name    */ "Ritmo Contagioso",
        /* Level Desc.   */ "\0023" "Memo do assistente:\n"
                            "\"Temos um surto\n"
                            "de um váerus desconhecido!\n"
                            "Ajude-nos, Dr. Cutlery!\"",
        /* Level Icon    */ 13,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sick_beats_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Todas as nossas pesquisas... nà∫o levaram a nada...",
            /* OK        */ "O fracasso pode ser a chave para o sucesso!",
            /* SUPERB    */ "Finalmente encontramos a cura!"
        }
    },
    /* BOUNCY_ROAD */ {
        /* Entry Scene   */ &scene_bouncy_road,
        /* Level Name    */ "Pulataforma",
        /* Level Desc.   */ "VàÆ aquela bola quicando\n"
                            "na estrada?\n"
                            "VocàÆ nà∫o gostaria de\n"
							"deixác-la cair... gostaria?",
        /* Level Icon    */ 12,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Ai! Isso foi difáecil...",
            /* OK        */ "Combo excelente!",
            /* SUPERB    */ "Onde estác o desafio?"
        }
    },
    /* BOUNCY_ROAD_2 */ {
        /* Entry Scene   */ &scene_bouncy_road_2,
        /* Level Name    */ "Pulataforma 2",
        /* Level Desc.   */ "VàÆ aquela bola quicando\n"
                            "na estrada?\n"
                            "áQ uma bola muito boa,\n"
                            "entà∫o nà∫o a deixe cair!",
        /* Level Icon    */ 50,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Ai! Falhamos!",
            /* OK        */ "Estamos nos esforÁando ao m·ximo!",
            /* SUPERB    */ "Fáccil vem, fáccil vai."
        }
    },
    /* NINJA_BODYGUARD */ {
        /* Entry Scene   */ &scene_ninja_bodyguard,
        /* Level Name    */ "Ninja Guarda-costas",
        /* Level Desc.   */ "Um inimigo estác atacando\n"
                            "seu senhor! Bloqueie as\n"
                            "flechas com sua espada\n"
							"usando áO e áM!",
        /* Level Icon    */ 5,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_bodyguard_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Meu senhor desmaiou! Nà∫oooo!",
            /* OK        */ "Nà∫o tenho palavras para pedir desculpas, meu senhor!",
            /* SUPERB    */ "Nem um arranhà∫o!"
        }
    },
    /* NINJA_REINCARNATE */ {
        /* Entry Scene   */ &scene_ninja_reincarnate,
        /* Level Name    */ "Descendente Ninja",
        /* Level Desc.   */ "Sabe, os ancestrais\n"
                            "da minha famáelia vieram de uma\n"
                            "longa linhagem de ninjas.\n"
                            "Legal, náQ?",
        /* Level Icon    */ 38,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_reincarnate_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nà∫o desista! Contamos com vocàÆ",
            /* OK        */ "VocàÆ áQ... forte. Nà∫o desista ainda.",
            /* SUPERB    */ "VocàÆ provou o seu valor! VocàÆ tem a nossa bàÆnàπà∫o..."
        }
    },
    /* SNEAKY_SPIRITS */ {
        /* Entry Scene   */ &scene_sneaky_spirits,
        /* Level Name    */ "Espáeritos Zombeteiros",
        /* Level Desc.   */ "Esses espáeritos nà∫o sà∫o\n"
                            "exatamente maus, mas eles\n"
                            "Sà∫O maldosos; eles và∫o rir\n"
                            "de vocàÆ se vocàÆ errar.",
        /* Level Icon    */ 1,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Fantasmas fugitivos sái trazem problemas.",
            /* OK        */ "Este nà∫o vai a lugar nenhum!",
            /* SUPERB    */ "Nenhum fantasma foge do seu olhar!"
        }
    },
    /* SNEAKY_SPIRITS_2 */ {
        /* Entry Scene   */ &scene_sneaky_spirits_2,
        /* Level Name    */ "Espáeritos Zombeteiros 2",
        /* Level Desc.   */ "Esses espáeritos està∫o\n"
                            "agindo de novo!\n"
                            "Deixe-os terem o que querem,\n"
                            "estilo arco e flecha!",
        /* Level Icon    */ 53,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Ah! Eles passaram direto por vocàÆ",
            /* OK        */ "\"S-Solte-me! Por favor!\"",
            /* SUPERB    */ "VocàÆs, fantasmas, fiquem aáe e pensem no que fizeram!"
        }
    },
    /* SAMURAI_SLICE */ {
        /* Entry Scene   */ &scene_samurai_slice,
        /* Level Name    */ "Samurai Retalhador",
        /* Level Desc.   */ "Os demà∂nios colocaram\n"
                            "a cidade em panico!\n"
                            "Cuidado! Samurai--\n"
                            "acabe com todos eles!",
        /* Level Icon    */ 18,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_samurai_slice_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Quebrei minha lamina!",
            /* OK        */ "Vou me esforàπar ainda mais!",
            /* SUPERB    */ "VocàÆ jác viu uma espada tà∫o afiada assim?"
        }
    },
    /* SPACEBALL */ {
        /* Entry Scene   */ &scene_spaceball,
        /* Level Name    */ "Beisebol Espacial",
        /* Level Desc.   */ "Ignore os zooms da\n"
                            "camera! Faàπa a bola\n"
                            "se afastar! Nà∫o pisque!\n"
                            "Nà∫o enxugue suas lácgrimas!",
        /* Level Icon    */ 9,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Posso ter minha bola de volta? Eu te dou meu à¶ltimo bolinho de arroz...",
            /* OK        */ "Preciso... treinar... mais...",
            /* SUPERB    */ "Eu ganhei o primeiro \"espaàπo\"!"
        }
    },
    /* SPACEBALL_2 */ {
        /* Entry Scene   */ &scene_spaceball_2,
        /* Level Name    */ "Beisebol Espacial 2",
        /* Level Desc.   */ "Ignore os zooms da\n"
                            "camera! Apenas acredite\n"
                            "em si mesmo e\n"
                            "mande a bola voar!",
        /* Level Icon    */ 52,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Da práixima vez, balance seu taco em outro lugar!",
            /* OK        */ "Nà∫o posso desistir agora!",
            /* SUPERB    */ "Gente, gente, vejam o que eu ganhei!"
        }
    },
    /* TAP_TRIAL */ {
        /* Entry Scene   */ &scene_tap_trial,
        /* Level Name    */ "Sapateado",
        /* Level Desc.   */ "VocàÆ áQ a garota.\n"
                            "Eles sà∫o os macacos.\n"
                            "Siga-os para alcanàπar o\n"
                            "estrelato!",
        /* Level Icon    */ 6,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tenho que desistir.",
            /* OK        */ "VocàÆ era QUASE tà∫o bom quanto um macaco...",
            /* SUPERB    */ "Sapatear tambáQm te ama, Girafa.!"
        }
    },
    /* TAP_TRIAL_2 */ {
        /* Entry Scene   */ &scene_tap_trial_2,
        /* Level Name    */ "Sapateado 2",
        /* Level Desc.   */ "Os macacos està∫o \n"
                            "dando o seu melhor!\n"
                            "VoàÆ consegue acompanhar? Nà∫o\n"
                            "deixe que eles te ultrapassem!",
        /* Level Icon    */ 11,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Parece que sapateamos com muita foràπa!",
            /* OK        */ "Ei... Para onde foi o nosso ritmo?",
            /* SUPERB    */ "Os macacos sà∫o a chave para o sapateado!"
        }
    },
    /* MARCHING_ORDERS */ {
        /* Entry Scene   */ &scene_marching_orders,
        /* Level Name    */ "Marcha Soldado",
        /* Level Desc.   */ "Prontos, marchar! Seguir\n"
                            "rdens como uma unidade constráii\n"
                            "sua camaradagem.\n"
							"AláQm disso, ritmo.",
        /* Level Icon    */ 21,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Espere! VocàÆ foi embora sem a gente!",
            /* OK        */ "Missà∫o de hoje: Limpeza. ",
            /* SUPERB    */ "Missà∫o cumprida! Resgatamos o alienáegena!"
        }
    },
    /* MARCHING_ORDERS_2 */ {
        /* Entry Scene   */ &scene_marching_orders_2,
        /* Level Name    */ "Marcha Soldado 2",
        /* Level Desc.   */ "Prontos, marchar!\n"
                            "Esta missà∫o requer\n"
                            "habilidade e táQcnica,\n"
                            "entà∫o marchem com o mácximo de vocàÆs!",
        /* Level Icon    */ 20,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Isso áQ inaceitácvel...",
            /* OK        */ "Sei que podemos fazer melhor do que isso!",
            /* SUPERB    */ "ISSO sim áQ uma recompensa!"
        }
    },
    /* WIZARDS_WALTZ */ {
        /* Entry Scene   */ &scene_wizards_waltz,
        /* Level Name    */ "Valsa da Feiticeira",
        /* Level Desc.   */ "Hác uma menina solitácria\n"
                            "ali. Use seu\n"
                            "poder das flores para\n"
                            "animác-la!",
        /* Level Icon    */ 23,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_wizards_waltz_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "...Estou com medo!",
            /* OK        */ "Elas ficarà∫o Tà∫O lindas quando florescerem!",
            /* SUPERB    */ "Quem poderia se sentir solitácrio com todas essas flores?"
        }
    },
    /* BUNNY_HOP */ {
        /* Entry Scene   */ &scene_bunny_hop,
        /* Level Name    */ "Coelho Pula-Pula",
        /* Level Desc.   */ "Este coelho tem um\n"
                            "objetivo impossáevel: pular atáQ\n"
                            "a lua! VocàÆ pode\n"
                            "tornar o sonho dele realidade?",
        /* Level Icon    */ 24,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bunny_hop_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nà∫o tenho certeza se pensei bem nisso...",
            /* OK        */ "Nà∫o conseguiu aterrar bem...",
            /* SUPERB    */ "Uma aterragem perfeita! Quem precisa de foguetes?!"
        }
    },
    /* FIREWORKS */ {
        /* Entry Scene   */ &scene_fireworks,
        /* Level Name    */ "Fogos de ArtifáQcio",
        /* Level Desc.   */ "Nà∫o áQ verà∫o\n"
                            "sem fogos de artifáQcio!\n"
                            "Acenda-os para encher o\n"
                            "cáQu com lindas cores!",
        /* Level Icon    */ 26,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_fireworks_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Cof, cof... Acho que estraguei tudo...",
            /* OK        */ "Nà∫o foi nada tà∫o ruim assim!",
            /* SUPERB    */ "Eu sou O especialista em fogos de artifáQcio!"
        }
    },
    /* POWER_CALLIGRAPHY */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "Prova de Caligrafia",
        /* Level Desc.   */ "A caligrafia japonesa\n"
                            "requer graciosidade, delicadeza,\n"
                            "e uma foràπa impressionante\n"
                            "na parte superior do corpo.",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_power_calligraphy_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Talvez eu devesse continuar usando lácpis...",
            /* OK        */ "Precisà∫o! Graàπa! O que hác para nà∫o gostar?",
            /* SUPERB    */ "Eba! Festa de caligrafia!"
        }
    },
    /* POWER_CALLIGRAPHY_2 */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "",
        /* Level Desc.   */ "\n"
                            "\n"
                            "\n"
                            "",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_calligraphy_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "",
            /* OK        */ "",
            /* SUPERB    */ ""
        }
    },
    /* TOSS_BOYS */ {
        /* Entry Scene   */ &scene_toss_boys,
        /* Level Name    */ "Time do Toque",
        /* Level Desc.   */ "Este trio de amigos adora\n"
                            "praticar và∂lei.\n"
                            "Ouàπa os nomes deles\n"
                            "enquant passam a bola!",
        /* Level Icon    */ 30,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Fomos expulsos!",
            /* OK        */ "Da práixima vez, vamos jogar melhor do que os melhores!",
            /* SUPERB    */ "Campeonato Mundial de Toque, aqui vamos náis!"
        }
    },
    /* TOSS_BOYS_2 */ {
        /* Entry Scene   */ &scene_toss_boys_2,
        /* Level Name    */ "Time do Toque 2",
        /* Level Desc.   */ "Este trio de amigos adora\n"
                            "praticar và∂lei.\n"
                            "Hoje, eles està∫o treinando\n"
                            "mais do que nunca!",
        /* Level Icon    */ 29,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nosso animo estác abatido...",
            /* OK        */ "Ainda temos um longo caminho a percorrer!",
            /* SUPERB    */ "TràÆs vivas para os nossos lanàπadores estrela!"
        }
    },
    /* RAT_RACE */ {
        /* Entry Scene   */ &scene_rat_race,
        /* Level Name    */ "Corrida dos Ratos",
        /* Level Desc.   */ "VocàÆ áQ um rato. Ela áQ\n"
                            "uma gata. VocàÆ adora queijo.\n"
                            "Todos os ingredientes de um\n"
                            "encontro tenso.",
        /* Level Icon    */ 31,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rat_race_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Acho que poderáeamos tentar comer o prato...",
            /* OK        */ "Sabe, eu gosto muito de queijo. Tipo, MUITO mesmo.",
            /* SUPERB    */ "Vamos ter que comeàπar uma famáelia para comer tudo isso!"
        }
    },
    /* TRAM_PAULINE */ {
        /* Entry Scene   */ &scene_tram_pauline,
        /* Level Name    */ "Tram & Pauline",
        /* Level Desc.   */ "Reà¶nam-se, todos!\n"
                            "O espetácculo acrobáctico de raposas\n"
                            "de Tram e Pauline\n"
							"estác prestes a comeàπar!",
        /* Level Icon    */ 32,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tram_pauline_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Transformamos o espetácculo em um fracasso!",
            /* OK        */ "Pelo menos sác estragamos parcialmente o espetácculo...",
            /* SUPERB    */ "Somos a dupla perfeita!"
        }
    },
    /* SHOWTIME */ {
        /* Entry Scene   */ &scene_showtime,
        /* Level Name    */ "Hora do Show",
        /* Level Desc.   */ "áP hora do show!\n"
                            "Nossos corajosos pinguins\n"
                            "està∫o prontos para comeàπar\n"
                            "sua apresentaàπà∫o!",
        /* Level Icon    */ 36,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_showtime_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Náis traáemos nosso pà¶blico...",
            /* OK        */ "Sei que somos capazes de mais do que isto...",
            /* SUPERB    */ "Eles nos adoraram lác fora!"
        }
    },
    /* SPACE_DANCE */ {
        /* Entry Scene   */ &scene_space_dance,
        /* Level Name    */ "Danàπa Espacial",
        /* Level Desc.   */ "VocàÆ quer um desafio\n"
                            "de danàπa? Tente danàπar\n"
                            "em gravidade zero!\n"
							"NO ESPAAAAAAAAAAàπO!",
        /* Level Icon    */ 40,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_space_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nosso desespero nos levou a um buraco negro!",
            /* OK        */ "Vamos almejar as estrelas!",
            /* SUPERB    */ "Somos superestrelas espaciais!"
        }
    },
    /* COSMIC_DANCE */ {
        /* Entry Scene   */ &scene_cosmic_dance,
        /* Level Name    */ "Danàπa Cáismica",
        /* Level Desc.   */ "Esses exemplos de\n"
                            "danàπa dominaram\n"
                            "seus movimentos Zero-G\n"
                            "e querem se exibir!",
        /* Level Icon    */ 16,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_cosmic_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nà∫o podemos continuar ASSIM!",
            /* OK        */ "áP o melhor que vocàÆs conseguem fazer?",
            /* SUPERB    */ "Somos superestrelas cáismicas!"
        }
    },
    /* RAP_MEN */ {
        /* Entry Scene   */ &scene_rap_men,
        /* Level Name    */ "RAPMANOS",
        /* Level Desc.   */ "A dupla de rappers\n"
                            "mais legal chegou! Suas\n"
                            "habilidades incráeveis no\n"
                            "rap sà∫o o assunto da cidade!",
        /* Level Icon    */ 42,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_men_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Precisamos praticar mais...",
            /* OK        */ "Acho que nosso tom estava errado.",
            /* SUPERB    */ "Estamos ansiosos para ouvir vocàÆ novamente!"
        }
    },
    /* RAP_WOMEN */ {
        /* Entry Scene   */ &scene_rap_women,
        /* Level Name    */ "RAPMANAS",
        /* Level Desc.   */ "Os RAPMANOS tàÆm\n"
                            "novas rivais!\n"
                            "Nà∫o se distraiam\n"
                            "com as vozes fofas delas!",
        /* Level Icon    */ 15,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_women_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nà∫o... Isso nà∫o estác certo.",
            /* OK        */ "Eu sei que podemos fazer rap melhor do que isso!",
            /* SUPERB    */ "Sim, sim, SIM! Conseguimos!"
        }
    },
    /* QUIZ_SHOW */ {
        /* Entry Scene   */ &scene_quiz_show,
        /* Level Name    */ "Show do Bilhà∫o",
        /* Level Desc.   */ "Participe de um quiz em que vocàÆ\n"
                            "copia o padrà∫o do apresentador.\n"
                            "Parece simples, certo?\n"
                            "Simples, mas nà∫o áQ fáccil.",
        /* Level Icon    */ 43,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_quiz_show_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Eu posso fazer melhor... Eu posso fazer melhor...",
            /* OK        */ "Tenho que estudar... para a práixima vez... Zzz...",
            /* SUPERB    */ "Ganhei o grande pràÆmio! Uma viagem ao redor do mundo e um bilhà∫o de reais!"
        }
    },
    /* BON_ODORI */ {
        /* Entry Scene   */ &scene_bon_odori,
        /* Level Name    */ "OÅôBon Odori",
        /* Level Desc.   */ "Vamos celebrar o\n"
                            "Festival Bon JaponàÆs!\n"
                            "Bata palmas enquanto elas cantam\n"
                            "sua canàπà∫o tradicional!",
        /* Level Icon    */ 35,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_odori_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Sinto tanto frio...",
            /* OK        */ "Ah... o brilho peculiar de uma faisca...",
            /* SUPERB    */ "Foi muito divertido! Mal posso esperar pelo práiximo ano!"
        }
    },
    /* BON_DANCE */ {
        /* Entry Scene   */ &scene_bon_dance,
        /* Level Name    */ "AÅôDanàπa Bon",
        /* Level Desc.   */ "O Festival Bon tem\n"
                            "um visual novo e moderno!\n"
                            "Bata palmas ao ritmo da\n"
                            "mà¶sica animada! Viva!",
        /* Level Icon    */ 17,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Jác era...",
            /* OK        */ "Quando comeàπou a chover?",
            /* SUPERB    */ "A nossa nova Danàπa Bon áQ muito divertida!"
        }
    },
    /* REMIX_1 */ {
        /* Entry Scene   */ &scene_remix_1,
        /* Level Name    */ "Remix  ÇP",
        /* Level Desc.   */ "Vamos testar suas habilidades!\n"
                            "Os jogos da Fase 1 foram\n"
                            "todos remixados!\n"
                            "Acha que consegue vencer?",
        /* Level Icon    */ 22,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix1_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "O seu desempenho foi como... um petisco de gato.",
            /* OK        */ "O seu desempenho foi como... um cafáP da manhà∫ comum.",
            /* SUPERB    */ "O seu desempenho foi como... bem, um jantar delicioso!"
        }
    },
    /* REMIX_2 */ {
        /* Entry Scene   */ &scene_remix_2,
        /* Level Name    */ "Remix  ÇQ",
        /* Level Desc.   */ "Vamos testar suas habilidades!\n"
                            "Este tem uma atmosfera\n"
                            "animada perfeita\n"
                            "para aulas de danàπa!",
        /* Level Icon    */ 27,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Isso foi tà∫o animado quanto... jogar bola sozinho.",
            /* OK        */ "Isso foi tà∫o animado quanto... uma agradácvel partida de bola.",
            /* SUPERB    */ "Isso foi tà∫o animado quanto... um grande torneio de beisebol!"
        }
    },
    /* REMIX_3 */ {
        /* Entry Scene   */ &scene_remix_3,
        /* Level Name    */ "Remix  ÇR",
        /* Level Desc.   */ "Vamos testar suas habilidades!\n"
                            "Esta tem uma\n"
                            "adorácvel canàπà∫o de amor com\n"
                            "adorácveis letras de amor!",
        /* Level Icon    */ 33,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix3_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "O amor deles terminou em... desgosto...",
            /* OK        */ "O amor deles terminou em... uma boa amizade.",
            /* SUPERB    */ "O amor deles terminou em... um casamento terno!"
        }
    },
    /* REMIX_4 */ {
        /* Entry Scene   */ &scene_remix_4,
        /* Level Name    */ "Remix  ÇS",
        /* Level Desc.   */ "Vamos testar suas habilidades!\n"
                            "Este tem um clima casual,\n"
                            "descontraáedo, como um\n"
                            "passeio agradácvel e tranquilo...",
        /* Level Icon    */ 34,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix4_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Previsà∫o para hoje... chuva torrencial.",
            /* OK        */ "Previsà∫o para hoje... muito nublado.",
            /* SUPERB    */ "Previsà∫o para hoje... cáQu limpo o dia todo!"
        }
    },
    /* REMIX_5 */ {
        /* Entry Scene   */ &scene_remix_5,
        /* Level Name    */ "Remix  ÇT",
        /* Level Desc.   */ "Vamos testar suas habilidades!\n"
                            "Esta tem uma\n"
                            "letra melancáilica.\n"
                            "Tente manter a calma!",
        /* Level Icon    */ 39,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix5_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Este casal estác... em apuros!",
            /* OK        */ "Este casal estác... um pouco nervoso...",
            /* SUPERB    */ "Este casal estác... vivendo seu final feliz!"
        }
    },
    /* REMIX_6 */ {
        /* Entry Scene   */ &scene_remix_6,
        /* Level Name    */ "Remix  ÇU",
        /* Level Desc.   */ "Vamos testar suas habilidades!\n"
                            "Todos os jogos que vocàÆ\n"
                            "jogou està∫o aqui! Mostre-nos\n"
                            "o que vocàÆ aprendeu!",
        /* Level Icon    */ 2,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix6_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Seu aquácrio estác... bem vazio.",
            /* OK        */ "Seu aquácrio áQ... à¶nico, com certeza!",
            /* SUPERB    */ "Seu aquácrio áQ... incráevel!"
        }
    },
    /* REMIX_7 */ {
        /* Entry Scene   */ &scene_remix_7,
        /* Level Name    */ "Remix  ÇV",
        /* Level Desc.   */ "Vamos testar suas habilidades!\n"
                            "Muitos dos Remixes\n"
                            "està∫o de volta aqui!\n"
                            "áP um Remix Remix!",
        /* Level Icon    */ 19,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix7_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "A sua visita ao Jurácssico foi... assustadora!",
            /* OK        */ "A sua visita ao Jurácssico foi... um tanto sem graàπa.",
            /* SUPERB    */ "A sua visita ao Jurácssico foi... muito divertida!"
        }
    },
    /* REMIX_8 */ {
        /* Entry Scene   */ &scene_remix_8,
        /* Level Name    */ "Remix  ÇW",
        /* Level Desc.   */ "Vamos testar suas habilidades!\n"
                            "Esse à¶ltimo remix áQ um\n"
                            "verdadeiro desafio! Mostre-nos\n"
                            "o que vocàÆ aprendeu!",
        /* Level Icon    */ 37,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix8_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Sua viagem foi... nossa...",
            /* OK        */ "Sua viagem foi... um pouco longa.",
            /* SUPERB    */ "Sua viagem foi... absolutamente espetacular!"
        }
    },
    /* CAFE */ {
        /* Entry Scene   */ &scene_cafe,
        /* Level Name    */ "Aconselhamento no CafáQ",
        /* Level Desc.   */ "Como vocàÆ estác se sentindo?\n"
                            "Se tiver algo em\n"
                            "mente, sinta-se ág vontade para\n"
                            "vir e conversar.",
        /* Level Icon    */ 45,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_cafe_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* RHYTHM_TOYS */ {
        /* Entry Scene   */ &scene_toys_menu,
        /* Level Name    */ "Brinquedos Ráetmicos",
        /* Level Desc.   */ "Colete medalhas para\n"
                            "brincar com alguns\n"
                            "Brinquedos Ráetmicos!\n"
                            "Confira!",
        /* Level Icon    */ 46,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_toys_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* ENDLESS_GAMES */ {
        /* Entry Scene   */ &scene_endless_menu,
        /* Level Name    */ "Jogos Infinitos",
        /* Level Desc.   */ "Colete medalhas para\n"
                            "desbloquear Jogos\n"
                            "Infinitos especiais!\n"
                            "Confira!",
        /* Level Icon    */ 47,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_endless_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* DRUM_LESSONS */ {
        /* Entry Scene   */ &scene_lessons_menu,
        /* Level Name    */ "Aulas de Bateria",
        /* Level Desc.   */ "Colete medalhas para ter\n"
                            "algumas Aulas de Bateria.\n"
                            "VocàÆ pode se tornar\n"
                            "um mestre da bateria!",
        /* Level Icon    */ 48,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_lessons_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* STAFF_CREDIT */ {
        /* Entry Scene   */ &scene_staff_credit,
        /* Level Name    */ "CráQditos da equipe",
        /* Level Desc.   */ "Aqui estác a equipe que\n"
                            "ajudou a desenvolver\n"
                            "este jogo. Fique ág vontade\n"
                            "para dar uma olhada!",
        /* Level Icon    */ 49,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_staff_credit_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* LIVE_MENU */ {
        /* Entry Scene   */ &scene_drum_live,
        /* Level Name    */ "Show",
        /* Level Desc.   */ "Estamos organizando um\n"
                            "show! Achamos que\n"
                            "vocàÆ tem um bom ritmo,\n"
                            "entà∫o experimente!",
        /* Level Icon    */ 44,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_drum_live_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "O faxineiro diz... \"Eu sei que vocàÆ consegue, continue assim!\"",
            /* OK        */ "O proprietácrio diz... \"VocàÆ tem um talento incráevel, sabia?\"",
            /* SUPERB    */ "O produtor diz... \"VocàÆ deveria tocar na nossa casa tambáQm!\""
        }
    }
};
