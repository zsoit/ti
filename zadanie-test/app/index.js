function falseA1() {
    document.getElementById("trueOrfalse1").innerHTML = "Zła odpowiedź! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}


function trueB1() {
    document.getElementById("trueOrfalse1").innerHTML = "Poprawna odpowiedź! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna odpowiedź!";

}

function falseA2() {
    document.getElementById("trueOrfalse2").innerHTML = "Spróbój ponownie! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB2() {
    document.getElementById("trueOrfalse2").innerHTML = "Dobrze! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna odpowiedź!";

}

function falseA3() {
    document.getElementById("trueOrfalse3").innerHTML = "Zła odpowiedź! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB3() {
    document.getElementById("trueOrfalse3").innerHTML = "Odpowiedziałeś dobrze! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna odpowiedź!";

}

function falseA4() {
    document.getElementById("trueOrfalse4").innerHTML = "Zła odpowiedź! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB4() {
    document.getElementById("trueOrfalse4").innerHTML = "Poprawna odpowiedź! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Dokładnie!";

}

function falseA5() {
    document.getElementById("trueOrfalse5").innerHTML = "Otóż nie tym razem! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB5() {
    document.getElementById("trueOrfalse5").innerHTML = "Poprawna odpowiedź! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna opowiedź!";

}

function falseA6() {
    document.getElementById("trueOrfalse6").innerHTML = "Zła odpowiedź! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB6() {
    document.getElementById("trueOrfalse6").innerHTML = "Jak najbardziej! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna odpowiedź!";

}

function falseA7() {
    document.getElementById("trueOrfalse7").innerHTML = "Zła odpowiedź! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB7() {
    document.getElementById("trueOrfalse7").innerHTML = "Tak trzymaj! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna odpowiedź!";

}

function falseA8() {
    document.getElementById("trueOrfalse8").innerHTML = "Zła odpowiedź! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB8() {
    document.getElementById("trueOrfalse8").innerHTML = "Poprawna odpowiedź! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna odpowiedź!";

}

function falseA9() {
    document.getElementById("trueOrfalse9").innerHTML = "Zła odpowiedź! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB9() {
    document.getElementById("trueOrfalse9").innerHTML = "Dobrze Ci idzie! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna odpowiedź!";

}

function falseA10() {
    document.getElementById("trueOrfalse10").innerHTML = "Zła odpowiedź! <img src=https://myzsoit.pl/img/nav/error.png width=20px>";
    document.title = "Zła odpowiedź!"

}

function trueB10() {
    document.getElementById("trueOrfalse10").innerHTML = "Jeszcze jak! <img src=https://myzsoit.pl/img/nav/yes.png width=20px>";
    document.title = "Poprawna odpowiedź!";

}





function showEgg() {
    document.getElementById('showEgg').style.display = "block";
    document.getElementById('main').style.display = "none";

}

let i = 0;

function addPoint() {
    if (i <= 9) {
        xd = ++i;
        //document.getElementById('inc').value = ++i + "/10";
        if (xd == 0) {
            document.getElementById('commit').innerHTML = "Jesteś debilem xD";
            document.getElementById('inc').value = xd + "/10";
            document.getElementById('procent').value = xd + "0%";


        } else if (xd <= 3) {
            document.getElementById('commit').innerHTML = "😪Bardzo słabo, gorzej od Grzecha...";
            document.getElementById('inc').value = xd + "/10";
            document.getElementById('procent').value = xd + "0%";

        } else if (xd <= 6) {
            document.getElementById('commit').innerHTML = "😮 Lepiej od Marusiaka, ale głowy nie urywa!";
            document.getElementById('inc').value = xd + "/10";
            document.getElementById('procent').value = xd + "0%";
        } else if (xd == 10) {
            document.getElementById('commit').innerHTML = "🥰🤩😍 Bezbłędnie!";
            document.getElementById('inc').value = xd + "/10";
            document.getElementById('procent').value = xd + "0%";

        } else {
            document.getElementById('commit').innerHTML = "😍 Masno fest umisz dobrze!";
            document.getElementById('inc').value = xd + "/10";
            document.getElementById('procent').value = xd + "0%";
        }




    }
}