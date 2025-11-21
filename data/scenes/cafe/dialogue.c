#include "global.h"
#include "graphics.h"
#include "text.h"
#include "src/scenes/cafe.h"
#include "graphics/cafe/cafe_graphics.h"


  /* CAFE - DIALOGUE */


// [D_089cd2e8] Dialogue - First Visit
    /* -------------------------------- */
        //
        // Welcome. This is your
        // first time here, isn't it?
        //
    /* -------------------------------- */
        // This is the Cafe.
        // <When you can't finish a game>,
        // or when you just want a break,
        // please come here and relax.
    /* -------------------------------- */
        //
        // I'm pretty good at Rhythm Games.
        // If you need help, <come to the Cafe>.
        //
    /* -------------------------------- */
        //
        // I'm still unpacking boxes, so
        // please come back in a bit.
        //
    /* -------------------------------- */
        //
        //
        // See you later.
        //
    /* -------------------------------- */

const char *cafe_dialogue_first_visit[] = {
    /* ------------------------------------------------ */
        "\n"
        "Bem-vindo ao caf‡Q.\n"
        "‡Q a sua primeira vez aqui?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Sinta-se a vontade para aparecer\n"
        "quando achar os jogos " "\0051" "\0015" "dif‡eceis demais de jogar " "\0054" "\0018" "ou\n"
        "quando simplesmente precisar de uma pausa.",
    /* ------------------------------------------------ */
       "\n"
       "Se eu puder ajudar com algo,\n"
       "bom, \0051\0015 ‡Q pra isso\n"
       "que eu estou aqui.\0054\0018",
     /* ------------------------------------------------ */
       "\n"
       "Estou meio ocupado agora,\n"
       "j‡c que acabei de abrir,\n"
       "mas conversamos depois.",
     /* ------------------------------------------------ */
       "\n"
       "Volte em breve!\n"
       "\n",
/* ------------------------------------------------ */
   END_OF_DIALOGUE
};


// [D_089cd300] Dialogue - Come Back Later
    /* -------------------------------- */
        //
        //
        // Come back in a while!
        //
    /* -------------------------------- */

const char *cafe_dialogue_come_back_later[] = {
    /* ------------------------------------------------ */
        "\n"
        "Tenho outros clientes para atender.\n"
        "Falamos mais tarde.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd308] Dialogue - Keep Trying
    /* -------------------------------- */
        //
        // You know, after a few tries
        // I think you'll manage that Genial.
        //
    /* -------------------------------- */
        //
        // Just keep moving to the music,
        // and you'll have fun doing it, too.
        //
    /* -------------------------------- */
        //
        // Don't let it frustrate you.
        // You're supposed to enjoy yourself.
        //
    /* -------------------------------- */

const char *cafe_dialogue_keep_trying[] = {
    /* ------------------------------------------------ */
        "\n"
        "Com um pouco de pr‡ctica, vocˆ® vai\n"
        "mandar bem. Eu acredito nisso!\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Tenho certeza de que jogar junto\n"
        "com a musica j‡c vai ser bem\n"
        "divertido por si s‡i.",
    /* ------------------------------------------------ */
        "\n"
        "Tente nˆºo se estrressar a‡e fora.\n"
        "O importante ‡Q se divertir.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd318] Dialogue - Practicing for the Perfect Campaign
    /* -------------------------------- */
        //
        // Sorry for yelling. I just got
        // a little too excited there.
        //
    /* -------------------------------- */
        //
        // Please try your best
        // for those Perfects.
        // See you soon!
    /* -------------------------------- */

const char *cafe_dialogue_practicing_perfect[] = {
    /* ------------------------------------------------ */
        "\n"
        "...Desculpa por gritar. Eu s‡i fiquei\n"
        "animado demais.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Boa sorte indo atr‡cs dos Perfeitos!\n"
        "Te vejo por a‡e.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd324] Dialogue - Not Practicing for the Perfect Campaign
    /* -------------------------------- */
        //
        // Is that right? Loose lips can sink
        // friendships... please forgive me.
        //
    /* -------------------------------- */
        //
        // Please enjoy the
        // game. See you!
        //
    /* -------------------------------- */

const char *cafe_dialogue_not_practicing_perfect[] = {
    /* ------------------------------------------------ */
        "\n"
        "Ah, ‡Q? Entˆºo foi mal.\n"
        "Acho que ‡Q por isso que nˆºo d‡c pra\n"
        "acreditar muito em rumores.",
    /* ------------------------------------------------ */
        "\n"
        "Aproveite os jogos no seu ritmo,\n"
        "ok? At‡Q a pr‡hxima.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd330] Dialogue - All Perfects Cleared
    /* -------------------------------- */
        //
        // You must have excellent rhythm
        // sense to have gotten this far!
        //
    /* -------------------------------- */
        //
        // Oh, I'm so happy I think
        // I might just start to cry.
        //
    /* -------------------------------- */
        //
        // Well, in celebration I've added
        // more songs to the studio.
        //
    /* -------------------------------- */
        //
        // Wow. It looks like you've
        // mastered the game. Not bad.
        //
    /* -------------------------------- */
        //
        // Had enough, I suppose? Go
        // get some rest. I'll be waiting.
        //
    /* -------------------------------- */

const char *cafe_dialogue_all_perfects_clear[] = {
    /* ------------------------------------------------ */
        "\n"
        "Se vocˆ® chegou tˆºo longe, entˆºo seu\n"
        "senso de ritmo deve estar rmesmo um\n"
        "passo acima do normal!",
    /* ------------------------------------------------ */
        "\n"
        "Estou tˆºo orgulhoso de vocˆ®.\n"
        "At‡Q emocionado!\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Nˆºo ‡Q muito, mas abri mais musicas\n"
        "do estudio pra vocˆ®.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Entˆºo isso quer dizer que vocˆ®\n"
        "coletou tudo?\n"
        "Impressionante!",
    /* ------------------------------------------------ */
        "\n"
        "Bom trabalho a‡e fora, meu(inha) amigo(a).\n"
        "Vocˆ® merece um descanso.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd348] Praise
    /* -------------------------------- */
        //
        //
        // Not too bad!!
    /* -------------------------------- */
        //
        //
        // You're good!!
    /* -------------------------------- */
        //
        //
        // Congratulations!!
    /* -------------------------------- */
        //
        //
        // Good job!!
    /* -------------------------------- */
        //
        //
        // Unbelievable!!
    /* -------------------------------- */

const char *cafe_dialogue_shouts_praise[] = {
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Isso ‡Q ‡itimo!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Incr‡evel!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Parab‡Qns!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "‡itimo trabalho!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Nˆºo acredito nisso!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
};


// [D_089cd35c] Encouragement
    /* -------------------------------- */
        //
        //
        // <Go for it!>
    /* -------------------------------- */
        //
        //
        // <Fight!>
    /* -------------------------------- */
        //
        //
        // <Go! Go!>
    /* -------------------------------- */
        //
        //
        // Good luck!
    /* -------------------------------- */
        //
        //
        // I was moved!
    /* -------------------------------- */

const char *cafe_dialogue_shouts_cheer[] = {
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "V‡c em frente!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Dˆ® o seu melhor!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Continue!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Boa sorte!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Estou impressionado!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
};


// [D_089cd370] Dialogue - Rhythm Sense
    /* -------------------------------- */
        //
        // By the way, I wonder how
        // Rhythm Sense is for humans?
        //
    /* -------------------------------- */
        //
        // Well, not that I'm very
        // aware of it myself.
        //
    /* -------------------------------- */
        //
        // But you'll be a bit happier once you
        // find your Rhythm Sense, I'm sure.
        //
    /* -------------------------------- */
        //
        // Maybe I should try a little harder
        // to get good at Rhythm Heaven...
        //
    /* -------------------------------- */

const char *cafe_dialogue_rhythm_sense[] = {
    /* ------------------------------------------------ */
        "\n"
        "Ali‡cs, ser‡c que sensaˆ¹ˆºo de ritmo\n"
        "‡Q diferente pros humanos?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Bom, nem que a minha tamb‡Qm nˆºo\n"
        "precise de uma ajustada, mas...\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Quando sua noˆ¹ˆºo de ritmom\n"
        "melhora... deve ser bem\n"
        "gostoso, n‡Q?",
    /* ------------------------------------------------ */
        "\n"
        "Talvez eu devesse tentar jogar uns\n"
        "Jogos de Ritmo tamb‡Qm...\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd384] Dialogue - Offbeats
    /* -------------------------------- */
        //
        // I hear the word "offbeat" often.
        // Do you know what an "offbeat" is?
        //
    /* -------------------------------- */
        // Honestly, I wasn't sure
        // what it meant either.
        // So, the other day I looked
        // up the definition.
    /* -------------------------------- */
        //
        // How do I explain it...
        // Well, you naturally clap
        // your hands to music, right?
    /* -------------------------------- */
        // Halfway between one clap
        // and the next (the "onbeats")
        // is called the "offbeat".
        // At least, so I understand.
    /* -------------------------------- */
        // Did you know that already?
        // Sorry if it seems like I'm
        // talking down to you.
        // Anyways, see you again.
    /* -------------------------------- */

const char *cafe_dialogue_offbeats[] = {
    /* ------------------------------------------------ */
        "\n"
        "Vocˆ® j‡c deve ter ouvido falar em\n"
        "offbeat. Sabe o que ‡Q?\n"
        "",
    /* ------------------------------------------------ */
        "\n"
        "Eu tamb‡Qm nˆºo sou expert, mas acho\n"
        "que entendi o b‡csico.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Sabe quando vocˆ® bate palmas junto\n"
        "com a musica?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Entˆºo, offbeat ‡Q bem no meio\n"
        "entre uma palma e a pr‡ixima.\n"
        "",
    /* ------------------------------------------------ */
        "\n"
        "Pelo menos eu acho que ‡Q isso. Sou p‡Qssimo\n"
        "explicando, mas espero que ajude.\n"
        "At‡Q mais.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd39c] Dialogue - Rhythm Test
    /* -------------------------------- */
        //
        // Say, when was the last time you
        // checked your "Rhythm Test" score?
        //
    /* -------------------------------- */
        //
        // I just tried it again yesterday, but
        // 65 points seems to be my limit...
        //
    /* -------------------------------- */
        //
        // I always have trouble with
        // the rests in the second test.
        //
    /* -------------------------------- */
        //
        // Counting to yourself is hard, isn't it?
        // I always go too fast or lose my place.
        //
    /* -------------------------------- */
        //
        // Well, nothing we can do but practice.
        // Take care for now.
        //
    /* -------------------------------- */

const char *cafe_dialogue_rhythm_test[] = {
    /* ------------------------------------------------ */
        "\n"
        "E a‡e, j‡c tentou fazer o\n"
        "Teste de Ritmo de novo?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Tenho tentado ultimamente.\n"
        "Parece que 65 pontos ‡Q meu limite.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Aquela segunda parte sempre\n"
        "me complica.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Contar os tempos silenciosos...\n"
        "bem dif‡ecil, n‡Q?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Bom, ‡Q praticar aos poucos.\n"
        "At‡Q a pr‡ixima.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3b4] Dialogue - Drum Lessons
    /* -------------------------------- */
        //
        // Let me ask... have you tried the
        // Drum Lessons in the Prize Corner?
        //
    /* -------------------------------- */
        //
        // I take lessons once a week, but
        // I don't really seem to improve.
        //
    /* -------------------------------- */
        // The teacher is really strict.
        // I asked him for an easier
        // lesson, but he told me to
        // just keep on trying my best.
    /* -------------------------------- */
        //
        // You'll find it's hard to quit
        // once you start a lesson.
        //
    /* -------------------------------- */
        // Maybe it's for the best.
        // For musical instruments, you
        // just have to keep at it.
        // You should try your best, too.
    /* -------------------------------- */

const char *cafe_dialogue_drum_lessons[] = {
    /* ------------------------------------------------ */
        "\n"
        "J‡c viu as Aulas de Bateria\n"
        "no Cantinho de Prˆ®mios?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Faˆ¹o aula toda semana, mas nunca\n"
        "pareˆ¹o melhorar.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "O professor disse que eu tenho\n"
        "problema com o ritmo e que nˆºo\n"
        "devo forˆ¹ar demais.",
    /* ------------------------------------------------ */
        "\n"
        "Mas quando vocˆ® comeˆ¹a a entrar\n"
        "no ritmo, ‡Q dif‡ecil parar.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Ningu‡Qm vira mestre da bateria\n"
        "de um dia pro outro. Melhor ir\n"
        "com calma.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3cc] Dialogue - Staying Up All Night
    /* -------------------------------- */
        //
        // By the way, right now
        // I'm terribly tired...
        //
    /* -------------------------------- */
        //
        // I was up all last night playing.
        // I just couldn't stop myself...
        //
    /* -------------------------------- */
        //
        // What? Oh, I was talking to myself.
        // It was a monologue... sorry.
        //
    /* -------------------------------- */
        //
        // Learn from me, and don't forget
        // to take a break every so often.
        // Anyway, see you again.
    /* -------------------------------- */

const char *cafe_dialogue_adhd[] = {
    /* ------------------------------------------------ */
        "\n"
        "Nˆºo sei por quˆ®, mas to morto\n"
        "de cansado...\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Passei a noite inteira jogando,\n"
        "nˆºo consegui parar...\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Ops! To falando sozinho de novo.\n"
        "Desconsidera.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Qualquer dia conto essa hist‡iria...\n"
        "se vocˆ® quiser. At‡Q mais.\n"
        "",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3e0] Dialogue - Coffee
    /* -------------------------------- */
        //
        // By the way, here's the
        // coffee you ordered.
        //
    /* -------------------------------- */
        //
        // Hm? You didn't order it?
        // Ah, I see. This is actually
        // for the guy next to you...
    /* -------------------------------- */
        //
        // Well... he isn't a talkative person,
        // but you seem to be getting along.
        //
    /* -------------------------------- */
        //
        // All I can do is pour
        // the coffee, but... heh.
        //
    /* -------------------------------- */

const char *cafe_dialogue_coffee[] = {
    /* ------------------------------------------------ */
        "\n"
        "Entˆºo, preparei um caf‡Q pra vocˆ®.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "U‡Q, nˆºo pediu caf‡Q?\n"
        "Ah?‡Q do cara sentado do seu lado.\n"
        "Presente dele.",
    /* ------------------------------------------------ */
        "\n"
        "Ele nˆºo fala muito, mas\n"
        "parece gente boa... e generoso.\n"
        "",
    /* ------------------------------------------------ */
        "\n"
        "Eu? Sei fazer caf‡Q, mas...\n"
        "o resto preciso melhorar. Heh....\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3f4] Dialogue - Dog
    /* -------------------------------- */
        //
        // By the way, if you hadn't
        // noticed, I'm actually a dog.
        //
    /* -------------------------------- */
        //
        // I'm not one of those young pups,
        // either. I'm nine years old.
        //
    /* -------------------------------- */
        //
        // When you get to be my age,
        // time really does seem to fly.
        //
    /* -------------------------------- */
        //
        // Hey, you're a human, right?
        // Well, despite our species I still
        // hope that we can get along
    /* -------------------------------- */

const char *cafe_dialogue_dog_barista[] = {
    /* ------------------------------------------------ */
        "\n"
        "Ah, s‡i pra avisar: eu sou um cachorro.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Tenho nove anos. At‡Q que to bem\n"
        "esperto pra minha idade.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Quando a gente envelhece, o tempo\n"
        "parece correr mais r‡cpido.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Vocˆ® ‡Q humano, n‡Q? Dizem que eu\n"
        "deveria ser seu melhor amigo.\n"
        "Entˆºo vamos nos dar bem!",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd408] Dialogue - Music
    /* -------------------------------- */
        //
        // By the way, what do
        // you do when you're sad?
        // I always listen to music.
    /* -------------------------------- */
        //
        // Taking out a good old record and
        // reminiscing about the past
        // always makes me feel better.
    /* -------------------------------- */
        //
        // Music is strange, isn't it?
        // It has this mysterious
        // power to heal the heart.
    /* -------------------------------- */
        //
        // Just don't think that good
        // rhythm makes you qualified
        // to be a doctor, ha ha ha.
    /* -------------------------------- */

const char *cafe_dialogue_healing_with_music[] = {
    /* ------------------------------------------------ */
        "\n"
        "Quando vocˆ® fica triste, o que faz\n"
        "pra melhorar?\n"
        "Eu sempre escuto musica.",
    /* ------------------------------------------------ */
        "\n"
        "Pegar um disco velho, ouvir e lembrar\n"
        "do passado... sempre me acalma.\n"
        "",
    /* ------------------------------------------------ */
        "\n"
        "Musica ‡Q estranha, n‡Q? Como ser‡c\n"
        "que ela mexe tanto com os nossos\n"
        "sentimentos?",
    /* ------------------------------------------------ */
        "\n"
        "Talvez se eu estudasse isso eu soubesse,\n"
        "mas nˆºo sei! Foi mal! Heh.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd41c] Dialogue - Speaking Through Rhythm
    /* -------------------------------- */
        //
        // Say... did you know that you can
        // have a conversation with rhythm?
        //
    /* -------------------------------- */
        //
        // By attaching words and meanings
        // to certain beats, you can have a
        // conversation without speaking.
    /* -------------------------------- */
        // For example... you could play
        // a drum beat to ask "How are
        // you?" or say "Please come
        // visit!" even from far away.
    /* -------------------------------- */
        //
        // I learned it from another
        // customer, and now I want
        // to try it for myself.
    /* -------------------------------- */
        // Then again, if we gave speeches
        // with bongos or the neighbors
        // argued with trumpets, it'd get
        // noisy, don't you think? Ha ha ha.
    /* -------------------------------- */

const char *cafe_dialogue_speaking_with_music[] = {
    /* ------------------------------------------------ */
        "\n"
        "Ouvi dizer que d‡c pra conversar\n"
        "usando s‡i ritmo.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Vocˆ® coloca significados diferentes\n"
        "em ritmos, tipo c‡idigo Morse,\n"
        "e fala sem falar.",
    /* ------------------------------------------------ */
        "\n"
        "Tipo mandar uma mensagem batendo\n"
        "num taiko... d‡c pra conversar\n"
        "mesmo de longe.",
    /* ------------------------------------------------ */
        "\n"
        "Pelo menos foi o que um cliente\n"
        "me contou. Legal, n‡Q?",
        "",
    /* ------------------------------------------------ */
        "\n"
        "Mas imagina discursos com bongos\n"
        "ou discussˆ¤es com tambores...\n"
        "Barulho garantido! Ahahaha!",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd434] Dialogue - Ranks and Medals
    /* -------------------------------- */
        //
        // By the way, have you ever
        // gotten a "Genial" rating on a game?
        //
    /* -------------------------------- */
        //
        // There are three grades, you know:
        // "Try Again", "OK" and "Genial".
        //
    /* -------------------------------- */
        //
        // If you get a "Genial",
        // you'll even get a medal.
        //
    /* -------------------------------- */
        // Collecting lots of medals will
        // unlock all sorts of prizes that
        // you can play with. Please do your
        // best to collect them all!
    /* -------------------------------- */
        //
        // Oh... but if you already knew that,
        // I'm sorry if I bored you.
        // See you later.
    /* -------------------------------- */

const char *cafe_dialogue_ranks_and_medals[] = {
    /* ------------------------------------------------ */
        "\n"
        "Ali‡cs, vocˆ® j‡c conseguiu um\n"
        "Genial em algum jogo?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Existem trˆ®s ranks: Tente Novamente,\n"
        "OK e Genial.\n"
        "\n",

    /* ------------------------------------------------ */
        "\n"
        "E se vocˆ® pegar um Genial,\n"
        "ganha uma medalha.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "E com bastante medalha vocˆ® libera\n"
        "uns prˆ®mios bem legais.\n"
        "Vale a pena juntar.",
    /* ------------------------------------------------ */
        "\n"
        "Mas acho que vocˆ® j‡c sabia.\n"
        "Desculpa a enrolaˆ¹ˆºo.\n"
        "At‡Q a pr‡ixima.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd44c] Random Dialogue Pool
const char **cafe_random_conversation_pool[] = {
    cafe_dialogue_rhythm_sense,
    cafe_dialogue_offbeats,
    cafe_dialogue_rhythm_test,
    cafe_dialogue_drum_lessons,
    cafe_dialogue_adhd,
    cafe_dialogue_coffee,
    cafe_dialogue_dog_barista,
    cafe_dialogue_healing_with_music,
    cafe_dialogue_speaking_with_music,
    cafe_dialogue_ranks_and_medals
};
